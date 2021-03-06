/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf --output-file=./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.inc ./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp  */
/* Computed positions: -k'1,10' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


#define TOTAL_KEYWORDS 60
#define MIN_WORD_LENGTH 12
#define MAX_WORD_LENGTH 39
#define MIN_HASH_VALUE 13
#define MAX_HASH_VALUE 99
/* maximum key range = 87, duplicates = 0 */

class Marshaller_intHash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct NsSmartDeviceLinkRPC::Marshaller::localHash *getPointer (const char *str, unsigned int len);
};

inline unsigned int
Marshaller_intHash::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,  5, 57, 45, 10, 15,
     100, 40,100,100,100,100, 55, 45,100,  5,
      35,100, 20,  0, 55, 10,100,100,100,100,
     100,100,100,100,100,  5,100, 15, 25,100,
      45, 10, 15,100, 30,  0,100,100,  0, 20,
      45, 15,  0,100,  0, 35, 10,  0, 55,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100,100,100,100,100,
     100,100,100,100,100,100
    };
  return len + asso_values[(unsigned char)str[9]] + asso_values[(unsigned char)str[0]];
}

const struct NsSmartDeviceLinkRPC::Marshaller::localHash *
Marshaller_intHash::getPointer (register const char *str, register unsigned int len)
{
  static const unsigned char lengthtable[] =
    {
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 13,
      14,  0,  0,  0, 13, 14,  0,  0, 12, 18, 19,  0, 26, 27,
      13, 24,  0, 26, 22, 18, 19,  0, 31, 32,  0, 34, 30, 31,
       0,  0, 39, 30, 21, 22, 28, 29,  0, 21, 22,  0, 34, 35,
      21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 18, 19,
       0, 26, 27,  0, 19, 20, 21, 22,  0, 29, 23, 24,  0,  0,
      24, 25, 26,  0,  0, 34, 35,  0,  0,  0, 34,  0,  0,  0,
       0, 24
    };
  static const struct NsSmartDeviceLinkRPC::Marshaller::localHash wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 44 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"Speak_request",26,&NsSmartDeviceLinkRPC::Marshaller::mSpeak_request},
#line 45 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"Speak_response",27,&NsSmartDeviceLinkRPC::Marshaller::mSpeak_response},
      {""}, {""}, {""},
#line 40 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"Alert_request",22,&NsSmartDeviceLinkRPC::Marshaller::mAlert_request},
#line 41 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"Alert_response",23,&NsSmartDeviceLinkRPC::Marshaller::mAlert_response},
      {""}, {""},
#line 42 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"Show_request",24,&NsSmartDeviceLinkRPC::Marshaller::mShow_request},
#line 30 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AddSubMenu_request",12,&NsSmartDeviceLinkRPC::Marshaller::mAddSubMenu_request},
#line 31 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AddSubMenu_response",13,&NsSmartDeviceLinkRPC::Marshaller::mAddSubMenu_response},
      {""},
#line 46 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SetMediaClockTimer_request",28,&NsSmartDeviceLinkRPC::Marshaller::mSetMediaClockTimer_request},
#line 47 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SetMediaClockTimer_response",29,&NsSmartDeviceLinkRPC::Marshaller::mSetMediaClockTimer_response},
#line 43 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"Show_response",25,&NsSmartDeviceLinkRPC::Marshaller::mShow_response},
#line 55 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnHMIStatus_notification",37,&NsSmartDeviceLinkRPC::Marshaller::mOnHMIStatus},
      {""},
#line 58 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnButtonPress_notification",40,&NsSmartDeviceLinkRPC::Marshaller::mOnButtonPress},
#line 59 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnCommand_notification",41,&NsSmartDeviceLinkRPC::Marshaller::mOnCommand},
#line 69 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AddProfile_request",51,&NsSmartDeviceLinkRPC::Marshaller::mAddProfile_request},
#line 70 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AddProfile_response",52,&NsSmartDeviceLinkRPC::Marshaller::mAddProfile_response},
      {""},
#line 60 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnEncodedSyncPData_notification",42,&NsSmartDeviceLinkRPC::Marshaller::mOnEncodedSyncPData},
#line 62 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnDriverDistraction_notification",44,&NsSmartDeviceLinkRPC::Marshaller::mOnDriverDistraction},
      {""},
#line 77 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnProfileStateChanged_notification",59,&NsSmartDeviceLinkRPC::Marshaller::mOnProfileStateChanged},
#line 20 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"UnregisterAppInterface_request",2,&NsSmartDeviceLinkRPC::Marshaller::mUnregisterAppInterface_request},
#line 21 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"UnregisterAppInterface_response",3,&NsSmartDeviceLinkRPC::Marshaller::mUnregisterAppInterface_response},
      {""}, {""},
#line 56 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnAppInterfaceUnregistered_notification",38,&NsSmartDeviceLinkRPC::Marshaller::mOnAppInterfaceUnregistered},
#line 76 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnProfileUnloaded_notification",58,&NsSmartDeviceLinkRPC::Marshaller::mOnProfileUnloaded},
#line 65 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"UnloadProfile_request",47,&NsSmartDeviceLinkRPC::Marshaller::mUnloadProfile_request},
#line 66 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"UnloadProfile_response",48,&NsSmartDeviceLinkRPC::Marshaller::mUnloadProfile_response},
#line 18 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"RegisterAppInterface_request",0,&NsSmartDeviceLinkRPC::Marshaller::mRegisterAppInterface_request},
#line 19 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"RegisterAppInterface_response",1,&NsSmartDeviceLinkRPC::Marshaller::mRegisterAppInterface_response},
      {""},
#line 28 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"DeleteCommand_request",10,&NsSmartDeviceLinkRPC::Marshaller::mDeleteCommand_request},
#line 29 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"DeleteCommand_response",11,&NsSmartDeviceLinkRPC::Marshaller::mDeleteCommand_response},
      {""},
#line 38 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"DeleteInteractionChoiceSet_request",20,&NsSmartDeviceLinkRPC::Marshaller::mDeleteInteractionChoiceSet_request},
#line 39 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"DeleteInteractionChoiceSet_response",21,&NsSmartDeviceLinkRPC::Marshaller::mDeleteInteractionChoiceSet_response},
#line 71 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"RemoveProfile_request",53,&NsSmartDeviceLinkRPC::Marshaller::mRemoveProfile_request},
#line 72 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"RemoveProfile_response",54,&NsSmartDeviceLinkRPC::Marshaller::mRemoveProfile_response},
#line 73 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AppStateChanged_request",55,&NsSmartDeviceLinkRPC::Marshaller::mAppStateChanged_request},
#line 74 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AppStateChanged_response",56,&NsSmartDeviceLinkRPC::Marshaller::mAppStateChanged_response},
#line 52 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"UnsubscribeButton_request",34,&NsSmartDeviceLinkRPC::Marshaller::mUnsubscribeButton_request},
#line 53 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"UnsubscribeButton_response",35,&NsSmartDeviceLinkRPC::Marshaller::mUnsubscribeButton_response},
#line 22 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SetGlobalProperties_request",4,&NsSmartDeviceLinkRPC::Marshaller::mSetGlobalProperties_request},
#line 23 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SetGlobalProperties_response",5,&NsSmartDeviceLinkRPC::Marshaller::mSetGlobalProperties_response},
#line 24 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"ResetGlobalProperties_request",6,&NsSmartDeviceLinkRPC::Marshaller::mResetGlobalProperties_request},
#line 25 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"ResetGlobalProperties_response",7,&NsSmartDeviceLinkRPC::Marshaller::mResetGlobalProperties_response},
#line 67 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SendAppToProfileMessage_request",49,&NsSmartDeviceLinkRPC::Marshaller::mSendAppToProfileMessage_request},
#line 68 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SendAppToProfileMessage_response",50,&NsSmartDeviceLinkRPC::Marshaller::mSendAppToProfileMessage_response},
#line 26 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AddCommand_request",8,&NsSmartDeviceLinkRPC::Marshaller::mAddCommand_request},
#line 27 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"AddCommand_response",9,&NsSmartDeviceLinkRPC::Marshaller::mAddCommand_response},
      {""},
#line 36 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"PerformInteraction_request",18,&NsSmartDeviceLinkRPC::Marshaller::mPerformInteraction_request},
#line 37 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"PerformInteraction_response",19,&NsSmartDeviceLinkRPC::Marshaller::mPerformInteraction_response},
      {""},
#line 63 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"LoadProfile_request",45,&NsSmartDeviceLinkRPC::Marshaller::mLoadProfile_request},
#line 64 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"LoadProfile_response",46,&NsSmartDeviceLinkRPC::Marshaller::mLoadProfile_response},
#line 32 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"DeleteSubMenu_request",14,&NsSmartDeviceLinkRPC::Marshaller::mDeleteSubMenu_request},
#line 33 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"DeleteSubMenu_response",15,&NsSmartDeviceLinkRPC::Marshaller::mDeleteSubMenu_response},
      {""},
#line 61 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnTBTClientState_notification",43,&NsSmartDeviceLinkRPC::Marshaller::mOnTBTClientState},
#line 50 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SubscribeButton_request",32,&NsSmartDeviceLinkRPC::Marshaller::mSubscribeButton_request},
#line 51 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"SubscribeButton_response",33,&NsSmartDeviceLinkRPC::Marshaller::mSubscribeButton_response},
      {""}, {""},
#line 48 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"EncodedSyncPData_request",30,&NsSmartDeviceLinkRPC::Marshaller::mEncodedSyncPData_request},
#line 49 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"EncodedSyncPData_response",31,&NsSmartDeviceLinkRPC::Marshaller::mEncodedSyncPData_response},
#line 57 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnButtonEvent_notification",39,&NsSmartDeviceLinkRPC::Marshaller::mOnButtonEvent},
      {""}, {""},
#line 34 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"CreateInteractionChoiceSet_request",16,&NsSmartDeviceLinkRPC::Marshaller::mCreateInteractionChoiceSet_request},
#line 35 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"CreateInteractionChoiceSet_response",17,&NsSmartDeviceLinkRPC::Marshaller::mCreateInteractionChoiceSet_response},
      {""}, {""}, {""},
#line 75 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"OnProfileToAppMessage_notification",57,&NsSmartDeviceLinkRPC::Marshaller::mOnProfileToAppMessage},
      {""}, {""}, {""}, {""},
#line 54 "./src/components/JSONHandler/src/SDLRPCObjectsImpl/V1/Marshaller.gp"
      {"GenericResponse_response",36,&NsSmartDeviceLinkRPC::Marshaller::mGenericResponse_response}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
