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

// VTK includes
#include <vtkImageData.h>
#include <vtkObject.h>
#include <vtkSetGet.h>
#include <vtkSmartPointer.h>

// RTI includes
#include <dds/core/cond/StatusCondition.hpp>
#include <dds/domain/DomainParticipant.hpp>
#include <dds/sub/DataReader.hpp>
#include <dds/sub/Subscriber.hpp>
#include <dds/topic/Topic.hpp>
#include <rti/core/cond/AsyncWaitSet.hpp>

// Export directive
#include "vtkDDSExport.h"

// STL includes
#include <atomic>
#include <deque>

class VtkImage;

class vtkDDSExport vtkImageSubscriber : public vtkObject
{
public:
  enum ImageSubscriberEvents
  {
    ImageSubscriberEvent_NewImage = 850400
  };

public:
  vtkImageSubscriber(uint32_t threadPoolSize = 2);
  virtual ~vtkImageSubscriber();

  void SetDomainId(unsigned int);
  vtkGetMacro(DomainId, unsigned int);

  void SetTopicName(std::string);
  vtkGetMacro(TopicName, std::string);

  vtkSmartPointer<vtkImageData> GetImage(uint64_t timestamp);
  vtkSmartPointer<vtkImageData> GetLatestImage();

protected:
  bool CreateAndStartAsync(uint32_t threadPoolSize);
  uint32_t ProcessData();

  class QueueEntry
  {
  public:
    QueueEntry(uint64_t timestamp, vtkSmartPointer<vtkImageData> image)
      : Timestamp(timestamp)
      , ImageData(image)
    {}
    uint64_t Timestamp;
    vtkSmartPointer<vtkImageData> ImageData;
  };

protected:
  dds::domain::DomainParticipant            Participant;
  dds::sub::Subscriber                      Subscriber;
  dds::core::cond::StatusCondition          StatusCondition;
  rti::core::cond::AsyncWaitSet             WaitSetAsync;
  unsigned int                              DomainId;
  std::string                               TopicName;
  std::atomic_bool                          Started;

  dds::topic::Topic<VtkImage>               Topic;
  dds::sub::DataReader<VtkImage>            Reader;

  std::deque<QueueEntry>                    ReceivedSamples;
};
