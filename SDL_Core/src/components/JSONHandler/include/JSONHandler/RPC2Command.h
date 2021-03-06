/**
* \file RPC2Command.hpp
* \brief RPC2Command class header.
* Copyright (c) 2013, Ford Motor Company
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* Redistributions of source code must retain the above copyright notice, this
* list of conditions and the following disclaimer.
*
* Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following
* disclaimer in the documentation and/or other materials provided with the
* distribution.
*
* Neither the name of the Ford Motor Company nor the names of its contributors
* may be used to endorse or promote products derived from this software
* without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*/


#ifndef RPC2COMMAND_CLASS
#define RPC2COMMAND_CLASS

/**
  *\namespace NsRPC2Communication
  *\brief Namespace for communication with HMI.
*/
namespace NsRPC2Communication
{
    /**
     * \class RPC2Command
     * \brief Base class for objects generated from Json RPC2
    */
    class RPC2Command
    {
    public:
        /**
         * \enum CommandType
         * \brief RPC2 message types.
        */
        enum CommandType { REQUEST = 0x0, RESPONSE = 0x1, NOTIFICATION = 0x2, ERROR = 0x3, UNDEFINED };
    public:
        /**
         * \brief Constructor
        */
        RPC2Command( );

        /**
         * \brief Constructor
         * \param type RPC2 type
         * \sa CommandType
        */
        RPC2Command( CommandType type );

        /**
         * \brief Constructor
         * \param type RPC2 type
         * \sa CommandType
         * \param method ID of the method.
        */
        RPC2Command( CommandType type, int method );

        /**
         * \brief Destructor
        */
        virtual ~RPC2Command();

        /**
         * \brief Getter for message type.
         * \return Type of Json RPC2 message.
         * \sa CommandType.
         */
        virtual CommandType getCommandType( ) const;

        /**
         * \brief Setter for message type.
         * \param commandType Type of Json RPC2 message.
         */
        virtual void setCommandType( CommandType commandType );

        /**
         * \brief Getter for method id
         * \return Id of the method in message.
         */
        virtual int getMethod() const;

        /**
         * \brief Setter for method id.
         * \param method Id of method in message.
         */
        virtual void setMethod( int method );

    protected:
        /**
          *\brief Type of Json RPC2 message.
        */
        CommandType mCommandType;

        /**
          *\brief Id of method in message.
        */
        int mMethod;
    };

}

#endif  //  RPC2COMMAND_CLASS
