/********************************************

Copyright 2020 Adam Rankin

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject
to the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

********************************************/

#include "vtkImageSubscriber.h"

// STL includes
#include <algorithm>
#include <iostream>

// RTI includes
#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>

// VTK includes
#include <vtkObject.h>

// Topic includes
#include "image.hpp"

namespace
{
  const uint32_t MAX_SAMPLE_QUEUE_SIZE = 256;
}
/*
  // Obtain the DataReader's Status Condition
  dds::core::cond::StatusCondition status_condition(reader);

  // Enable the 'data available' status.
  status_condition.enabled_statuses(
    dds::core::status::StatusMask::data_available());

  // Associate a handler with the status condition. This will run when the
  // condition is triggered, in the context of the dispatch call (see below)
  unsigned int samples_read = 0;
  status_condition.extensions().handler([&reader, &samples_read]()
  {
    samples_read += process_data(reader);
  });

  // Create a WaitSet and attach the StatusCondition
  dds::core::cond::WaitSet waitset;
  waitset += status_condition;

  while (true)
  {
    // Dispatch will call the handlers associated to the WaitSet conditions
    // when they activate
    std::cout << "HelloWorld subscriber sleeping for 4 sec..."
              << std::endl;

    waitset.dispatch(dds::core::Duration(4));  // Wait up to 4s each time
  }
}
*/

//----------------------------------------------------------------------------
vtkImageSubscriber::vtkImageSubscriber()
  : Participant(0)
  , Subscriber(Participant)
  , TopicName("VtkImageDDS")
  , Topic(Participant, "VtkImage")
  , Reader(Subscriber, Topic)
{
  
}

//----------------------------------------------------------------------------
vtkImageSubscriber::~vtkImageSubscriber()
{

}

//----------------------------------------------------------------------------
void vtkImageSubscriber::SetDomainId(unsigned int domainId)
{
  this->DomainId = domainId;
  this->Participant = dds::domain::DomainParticipant(this->DomainId);
  this->Subscriber = dds::sub::Subscriber(this->Participant);
}

//----------------------------------------------------------------------------
void vtkImageSubscriber::SetTopicName(std::string topicName)
{
  this->Topic = dds::topic::Topic<VtkImage>(this->Participant, topicName);
  this->Reader = dds::sub::DataReader<VtkImage>(this->Subscriber, this->Topic);
}

//----------------------------------------------------------------------------
vtkSmartPointer<vtkImageData> vtkImageSubscriber::GetImage(uint64_t timestamp)
{
  auto iter = std::find_if(this->ReceivedSamples.begin(), this->ReceivedSamples.end(),
    [timestamp](const QueueEntry& m) -> bool { return m.Timestamp == timestamp; });
  if (iter != this->ReceivedSamples.end())
  {
    return iter->ImageData;
  }

  return nullptr;
}

//----------------------------------------------------------------------------
vtkSmartPointer<vtkImageData> vtkImageSubscriber::GetLatestImage()
{
  if (this->ReceivedSamples.size() > 0)
  {
    return this->ReceivedSamples.back().ImageData;
  }

  return nullptr;
}

//----------------------------------------------------------------------------
uint32_t vtkImageSubscriber::ProcessData(dds::sub::DataReader<VtkImage>& reader)
{
  // Take all samples. Samples are loaned to application, loan is returned when LoanedSamples destructor called.
  unsigned int samples_read = 0;
  dds::sub::LoanedSamples<VtkImage> samples = reader.take();
  for (const auto& sample : samples)
  {
    if (sample.info().valid())
    {
      samples_read++;
      auto newImage = vtkSmartPointer<vtkImageData>::New();
      newImage->SetDimensions(sample.data().Width(), sample.data().Height(), sample.data().Depth());
      uint8_t dataType;
      switch (sample.data().BytesPerComponent())
      {
      case 2:
        dataType = VTK_UNSIGNED_SHORT;
        break;
      case 4:
        dataType = VTK_UNSIGNED_INT;
        break;
      default:
      case 1:
        dataType = VTK_UNSIGNED_CHAR;
        break;
      }
      newImage->AllocateScalars(dataType, sample.data().Components());
      void* imageBytes = newImage->GetScalarPointer();
      auto dataSize = sample.data().Width() * sample.data().Height() * sample.data().Depth() * sample.data().Components() * sample.data().BytesPerComponent();
      memcpy(imageBytes, (void*)sample.data().Data().data(), dataSize);
      
      // Image received, throw it into queue and fire an event
      this->ReceivedSamples.push_back(vtkImageSubscriber::QueueEntry(sample.data().Timestamp(), newImage));
      if (this->ReceivedSamples.size() > MAX_SAMPLE_QUEUE_SIZE)
      {
        this->ReceivedSamples.pop_front();
      }
      this->InvokeEvent(ImageSubscriberEvent_NewImage, (void*)&this->ReceivedSamples.back().Timestamp);
    }
  }

  return samples_read;
}
