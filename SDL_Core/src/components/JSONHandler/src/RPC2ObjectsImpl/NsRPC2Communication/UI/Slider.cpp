//
// Copyright (c) 2013, Ford Motor Company
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
//
// Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following
// disclaimer in the documentation and/or other materials provided with the
// distribution.
//
// Neither the name of the Ford Motor Company nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/UI/Slider.h"
#include "../src/../include/JSONHandler/RPC2Objects/Marshaller.h"

/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Thu Jan 24 06:41:15 2013
  source stamp	Wed Jan 23 13:56:28 2013
  author	RC
*/

using namespace NsRPC2Communication::UI;


Slider& Slider::operator =(const Slider& c)
{
  numTicks=c.numTicks;
  position=c.position;
  sliderHeader=c.sliderHeader;
  if(sliderFooter)  delete sliderFooter;
  sliderFooter= c.sliderFooter ? new std::vector<std::string>(c.sliderFooter[0]) : 0;
  timeout=c.timeout;
  appId=c.appId;
  return *this;
}


Slider::~Slider(void)
{
  if(sliderFooter)  delete sliderFooter;
}


Slider::Slider(void) : 
  RPC2Request(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__SLIDER),
  sliderFooter(0)
{
}


Slider::Slider(const Slider& c) : RPC2Request(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__SLIDER,c.getId())
{
  *this=c;
}


unsigned int Slider::get_numTicks(void)
{
  return numTicks;
}

bool Slider::set_numTicks(unsigned int numTicks_)
{
  numTicks=numTicks_;
  return true;
}

unsigned int Slider::get_position(void)
{
  return position;
}

bool Slider::set_position(unsigned int position_)
{
  position=position_;
  return true;
}

const std::string& Slider::get_sliderHeader(void)
{
  return sliderHeader;
}

bool Slider::set_sliderHeader(const std::string& sliderHeader_)
{
  sliderHeader=sliderHeader_;
  return true;
}

const std::vector< std::string>* Slider::get_sliderFooter(void)
{
  return sliderFooter;
}

bool Slider::set_sliderFooter(const std::vector< std::string>& sliderFooter_)
{
  if(sliderFooter)  delete sliderFooter;
  sliderFooter=new std::vector< std::string>(sliderFooter_);
  return true;
}

void Slider::reset_sliderFooter(void)
{
  if(sliderFooter)  delete sliderFooter;
  sliderFooter=0;
}

unsigned int Slider::get_timeout(void)
{
  return timeout;
}

bool Slider::set_timeout(unsigned int timeout_)
{
  timeout=timeout_;
  return true;
}

int Slider::get_appId(void)
{
  return appId;
}

bool Slider::set_appId(int appId_)
{
  appId=appId_;
  return true;
}

bool Slider::checkIntegrity(void)
{
  return SliderMarshaller::checkIntegrity(*this);
}
