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
#include <vtkObject.h>
#include <vtkSetGet.h>

// RTI includes
#include <dds/domain/DomainParticipant.hpp>
#include <dds/sub/DataReader.hpp>
#include <dds/sub/Subscriber.hpp>
#include <dds/topic/Topic.hpp>

enum BitsPerPixel
{
  BitsPerPixel_8Bit,
  BitsPerPixel_16Bit,
  BitsPerPixel_32Bit
};

class vtkImageSubscriber : public vtkObject
{
public:
  vtkImageSubscriber();
  virtual ~vtkImageSubscriber();

  void SetDomainId(unsigned int);
  vtkGetMacro(DomainId, unsigned int);

  void SetBitsPerPixel(BitsPerPixel);

  void SetTopicName(std::string);
  vtkGetMacro(TopicName, std::string);

protected:
  dds::domain::DomainParticipant Participant;
  dds::sub::Subscriber Subscriber;
  unsigned int DomainId;
  BitsPerPixel CurrentBitsPerPixel;
  std::string TopicName;

  dds::topic::Topic<VtkImage8bit> Topic8bit;
  dds::sub::DataReader<VtkImage8bit> Reader8Bit;
  dds::topic::Topic<VtkImage16bit> Topic16Bit;
  dds::sub::DataReader<VtkImage16bit> Reader16Bit;
  dds::topic::Topic<VtkImage32bit> Topic32Bit;
  dds::sub::DataReader<VtkImage32bit> Reader32Bit;
private:
};
