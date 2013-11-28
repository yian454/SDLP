#ifndef NSSMARTDEVICELINKRPC_UNLOADPROFILE_RESPONSE_INCLUDE
#define NSSMARTDEVICELINKRPC_UNLOADPROFILE_RESPONSE_INCLUDE

#include <string>

#include "Result.h"
#include "../include/JSONHandler/SDLRPCResponse.h"


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

  class UnloadProfile_response : public SDLRPCResponse
  {
  public:
  
    UnloadProfile_response(const UnloadProfile_response& c);
    UnloadProfile_response(void);
    
    virtual ~UnloadProfile_response(void);
  
    UnloadProfile_response& operator =(const UnloadProfile_response&);
  
    bool checkIntegrity(void);

    const Result& get_resultCode(void) const;
    const std::string* get_info(void) const;

    bool set_resultCode(const Result& resultCode_);
    void reset_info(void);
    bool set_info(const std::string& info_);

  private:
  
    friend class UnloadProfile_responseMarshaller;


///  See Result
      Result resultCode;

///  Provides additional human readable info regarding the result.
      std::string* info;	//!< (1000)
  };

}

#endif
