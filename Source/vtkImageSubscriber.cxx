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
#include <image_8bps.hpp>
#include <image_16bps.hpp>
#include <image_32bps.hpp>

/*
unsigned int process_data(dds::sub::DataReader<VtkImage8bit>& reader)
{
  // Take all samples.  Samples are loaned to application, loan is
  // returned when LoanedSamples destructor called.
  unsigned int samples_read = 0;
  dds::sub::LoanedSamples<VtkImage8bit> samples = reader.take();
  for (const auto& sample : samples)
  {
    if (sample.info().valid())
    {
      samples_read++;
      std::cout << sample.data() << std::endl;
    }
  }

  return samples_read;
}

void run_example(unsigned int domain_id, unsigned int sample_count)
{
  // A Topic has a name and a datatype. Create a Topic named
  // "HelloWorld Topic" with type HelloWorld
  dds::topic::Topic<VtkImage8bit> topic(participant, "Example HelloWorld");

  // This DataReader will read data of type HelloWorld on Topic
  // "HelloWorld Topic". DataReader QoS is configured in
  // USER_QOS_PROFILES.xml
  dds::sub::DataReader<VtkImage8bit> reader(subscriber, topic);

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
  , CurrentBitsPerPixel(BitsPerPixel_8Bit)
  , TopicName("VtkImageDDS")
  , Topic8Bit(Participant, "VtkImage8Bit")
  , Topic16Bit(Participant, "VtkImage16Bit")
  , Topic32Bit(Participant, "VtkImage32Bit")
  , Reader8Bit(Subscriber, Topic8Bit)
  , Reader16Bit(Subscriber, Topic16Bit)
  , Reader32Bit(Subscriber, Topic32Bit)
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
  this->SetBitsPerPixel(this->CurrentBitsPerPixel);
}

//----------------------------------------------------------------------------
void vtkImageSubscriber::SetBitsPerPixel(BitsPerPixel bpp)
{
  this->CurrentBitsPerPixel = bpp;
  switch (this->CurrentBitsPerPixel)
  {
  case BitsPerPixel_8Bit:
    this->Topic8Bit = dds::topic::Topic<VtkImage8bit>(this->Participant, this->TopicName);
    this->Reader8Bit = dds::sub::DataReader<VtkImage8bit>(this->Subscriber, this->Topic8Bit);
    break;
  case BitsPerPixel_16Bit:
    this->Topic16Bit = dds::topic::Topic<VtkImage16bit>(this->Participant, this->TopicName);
    this->Reader16Bit = dds::sub::DataReader<VtkImage16bit>(this->Subscriber, this->Topic16Bit);
    break;
  case BitsPerPixel_32Bit:
    this->Topic32Bit = dds::topic::Topic<VtkImage32bit>(this->Participant, this->TopicName);
    this->Reader32Bit = dds::sub::DataReader<VtkImage32bit>(this->Subscriber, this->Topic32Bit);
    break;
  default:
    break;
  }
}

//----------------------------------------------------------------------------
void vtkImageSubscriber::SetTopicName(std::string)
{

}
