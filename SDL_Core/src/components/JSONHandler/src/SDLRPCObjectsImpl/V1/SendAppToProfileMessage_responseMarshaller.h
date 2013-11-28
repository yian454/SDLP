#ifndef NSSMARTDEVICELINKRPC_SENDAPPTOPROFILEMESSAGE_RESPONSEMARSHALLER_INCLUDE
#define NSSMARTDEVICELINKRPC_SENDAPPTOPROFILEMESSAGE_RESPONSEMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../include/JSONHandler/SDLRPCObjects/V1/SendAppToProfileMessage_response.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Mon Jul  1 13:13:32 2013
  source stamp	Sun Jun 30 21:55:31 2013
  author	RC
*/

namespace NsSmartDeviceLinkRPC
{

  struct SendAppToProfileMessage_responseMarshaller
  {
    static bool checkIntegrity(SendAppToProfileMessage_response& e);
    static bool checkIntegrityConst(const SendAppToProfileMessage_response& e);
  
    static bool fromString(const std::string& s,SendAppToProfileMessage_response& e);
    static const std::string toString(const SendAppToProfileMessage_response& e);
  
    static bool fromJSON(const Json::Value& s,SendAppToProfileMessage_response& e);
    static Json::Value toJSON(const SendAppToProfileMessage_response& e);
  };
}

#endif
