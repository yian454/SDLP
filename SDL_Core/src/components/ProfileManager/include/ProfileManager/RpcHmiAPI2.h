/*
 *
 * SDLP SDK
 * Cross Platform Application Communication Stack for In-Vehicle Applications
 *
 * Copyright (C) 2013, Luxoft Professional Corp., member of IBS group
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; version 2.1.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 *
 */


#ifndef __RPC_HMI_API_2_H__
#define __RPC_HMI_API_2_H__

#include "JSONHandler/SDLRPCObjects/V2/EncodedSyncPData_request.h"
#include "JSONHandler/SDLRPCObjects/V2/Show_request.h"
#include "JSONHandler/SDLRPCObjects/V2/VehicleType.h"
#include "JSONHandler/SDLRPCObjects/V2/MenuParams.h"
#include "JSONHandler/SDLRPCObjects/V2/AppInterfaceUnregisteredReason.h"
#include "JSONHandler/SDLRPCObjects/V2/AddCommand_request.h"
#include "JSONHandler/SDLRPCObjects/V2/UpdateTurnList_request.h"
#include "JSONHandler/SDLRPCObjects/V2/OnButtonEvent.h"
#include "JSONHandler/SDLRPCObjects/V2/OnPermissionsChange.h"
#include "JSONHandler/SDLRPCObjects/V2/StartTime.h"
#include "JSONHandler/SDLRPCObjects/V2/MediaClockFormat.h"
#include "JSONHandler/SDLRPCObjects/V2/SubscribeButton_request.h"
#include "JSONHandler/SDLRPCObjects/V2/PutFile_response.h"
#include "JSONHandler/SDLRPCObjects/V2/DialNumber_response.h"
#include "JSONHandler/SDLRPCObjects/V2/SubscribeButton_response.h"
#include "JSONHandler/SDLRPCObjects/V2/ListFiles_request.h"
#include "JSONHandler/SDLRPCObjects/V2/Slider_request.h"
#include "JSONHandler/SDLRPCObjects/V2/ShowConstantTBT_request.h"
#include "JSONHandler/SDLRPCObjects/V2/GetVehicleData_response.h"
#include "JSONHandler/SDLRPCObjects/V2/DeactivateReason.h"
#include "JSONHandler/SDLRPCObjects/V2/OnDriverDistraction.h"
#include "JSONHandler/SDLRPCObjects/V2/UnsubscribeButton_request.h"
#include "JSONHandler/SDLRPCObjects/V2/VrCapabilities.h"
#include "JSONHandler/SDLRPCObjects/V2/PerformInteraction_request.h"
#include "JSONHandler/SDLRPCObjects/V2/GPSData.h"
#include "JSONHandler/SDLRPCObjects/V2/CreateInteractionChoiceSet_request.h"
#include "JSONHandler/SDLRPCObjects/V2/TireStatus.h"
#include "JSONHandler/SDLRPCObjects/V2/PermissionStatus.h"
#include "JSONHandler/SDLRPCObjects/V2/SetGlobalProperties_response.h"
#include "JSONHandler/SDLRPCObjects/V2/SystemAction.h"
#include "JSONHandler/SDLRPCObjects/V2/SetGlobalProperties_request.h"
#include "JSONHandler/SDLRPCObjects/V2/SetDisplayLayout_response.h"
#include "JSONHandler/SDLRPCObjects/V2/Alert_request.h"
#include "JSONHandler/SDLRPCObjects/V2/ShowConstantTBT_response.h"
#include "JSONHandler/SDLRPCObjects/V2/Turn.h"
#include "JSONHandler/SDLRPCObjects/V2/Speak_response.h"
#include "JSONHandler/SDLRPCObjects/V2/EncodedSyncPData_response.h"
#include "JSONHandler/SDLRPCObjects/V2/OnCommand.h"
#include "JSONHandler/SDLRPCObjects/V2/Slider_response.h"
#include "JSONHandler/SDLRPCObjects/V2/AlertManeuver_request.h"
#include "JSONHandler/SDLRPCObjects/V2/ReadDID_request.h"
#include "JSONHandler/SDLRPCObjects/V2/HmiZoneCapabilities.h"
#include "JSONHandler/SDLRPCObjects/V2/SetMediaClockTimer_request.h"
#include "JSONHandler/SDLRPCObjects/V2/ButtonCapabilities.h"
#include "JSONHandler/SDLRPCObjects/V2/SoftButtonType.h"
#include "JSONHandler/SDLRPCObjects/V2/RPC.h"
#include "JSONHandler/SDLRPCObjects/V2/Dimension.h"
#include "JSONHandler/SDLRPCObjects/V2/Image.h"
#include "JSONHandler/SDLRPCObjects/V2/ListFiles_response.h"
#include "JSONHandler/SDLRPCObjects/V2/UnsubscribeButton_response.h"
#include "JSONHandler/SDLRPCObjects/V2/PerformAudioPassThru_request.h"
#include "JSONHandler/SDLRPCObjects/V2/ChangeRegistration_request.h"
#include "JSONHandler/SDLRPCObjects/V2/Speak_request.h"
#include "JSONHandler/SDLRPCObjects/V2/SubscribeVehicleData_request.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteCommand_request.h"
#include "JSONHandler/SDLRPCObjects/V2/VehicleDataResult.h"
#include "JSONHandler/SDLRPCObjects/V2/OnAudioPassThru.h"
#include "JSONHandler/SDLRPCObjects/V2/FunctionID.h"
#include "JSONHandler/SDLRPCObjects/V2/TBTState.h"
#include "JSONHandler/SDLRPCObjects/V2/SetMediaClockTimer_response.h"
#include "JSONHandler/SDLRPCObjects/V2/HMILevel.h"
#include "JSONHandler/SDLRPCObjects/V2/OnVehicleData.h"
#include "JSONHandler/SDLRPCObjects/V2/AddSubMenu_request.h"
#include "JSONHandler/SDLRPCObjects/V2/UnsubscribeVehicleData_response.h"
#include "JSONHandler/SDLRPCObjects/V2/OnButtonPress.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteSubMenu_request.h"
#include "JSONHandler/SDLRPCObjects/V2/UpdateMode.h"
#include "JSONHandler/SDLRPCObjects/V2/SetAppIcon_response.h"
#include "JSONHandler/SDLRPCObjects/V2/SyncMsgVersion.h"
#include "JSONHandler/SDLRPCObjects/V2/ButtonPressMode.h"
#include "JSONHandler/SDLRPCObjects/V2/TextAlignment.h"
#include "JSONHandler/SDLRPCObjects/V2/RegisterAppInterface_response.h"
#include "JSONHandler/SDLRPCObjects/V2/ImageType.h"
#include "JSONHandler/SDLRPCObjects/V2/EndAudioPassThru_response.h"
#include "JSONHandler/SDLRPCObjects/V2/AddCommand_response.h"
#include "JSONHandler/SDLRPCObjects/V2/SubscribeVehicleData_response.h"
#include "JSONHandler/SDLRPCObjects/V2/GetDTCs_request.h"
#include "JSONHandler/SDLRPCObjects/V2/ButtonName.h"
#include "JSONHandler/SDLRPCObjects/V2/CompassDirection.h"
#include "JSONHandler/SDLRPCObjects/V2/SystemContext.h"
#include "JSONHandler/SDLRPCObjects/V2/UpdateTurnList_response.h"
#include "JSONHandler/SDLRPCObjects/V2/SetAppIcon_request.h"
#include "JSONHandler/SDLRPCObjects/V2/DriverDistractionState.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteInteractionChoiceSet_response.h"
#include "JSONHandler/SDLRPCObjects/V2/AppType.h"
#include "JSONHandler/SDLRPCObjects/V2/SoftButton.h"
#include "JSONHandler/SDLRPCObjects/V2/Result.h"
#include "JSONHandler/SDLRPCObjects/V2/UnsubscribeVehicleData_request.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteFile_request.h"
#include "JSONHandler/SDLRPCObjects/V2/OnAppInterfaceUnregistered.h"
#include "JSONHandler/SDLRPCObjects/V2/CharacterSet.h"
#include "JSONHandler/SDLRPCObjects/V2/FileType.h"
#include "JSONHandler/SDLRPCObjects/V2/TextField.h"
#include "JSONHandler/SDLRPCObjects/V2/DTC.h"
#include "JSONHandler/SDLRPCObjects/V2/TextFieldName.h"
#include "JSONHandler/SDLRPCObjects/V2/VehicleDataResultCode.h"
#include "JSONHandler/SDLRPCObjects/V2/AddSubMenu_response.h"
#include "JSONHandler/SDLRPCObjects/V2/SingleTirePressureStatus.h"
#include "JSONHandler/SDLRPCObjects/V2/PutFile_request.h"
#include "JSONHandler/SDLRPCObjects/V2/SpeechCapabilities.h"
#include "JSONHandler/SDLRPCObjects/V2/CreateInteractionChoiceSet_response.h"
#include "JSONHandler/SDLRPCObjects/V2/Language.h"
#include "JSONHandler/SDLRPCObjects/V2/TriggerSource.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteCommand_response.h"
#include "JSONHandler/SDLRPCObjects/V2/ScrollableMessage_response.h"
#include "JSONHandler/SDLRPCObjects/V2/DisplayCapabilities.h"
#include "JSONHandler/SDLRPCObjects/V2/RegisterAppInterface_request.h"
#include "JSONHandler/SDLRPCObjects/V2/GenericResponse_response.h"
#include "JSONHandler/SDLRPCObjects/V2/Choice.h"
#include "JSONHandler/SDLRPCObjects/V2/OnTBTClientState.h"
#include "JSONHandler/SDLRPCObjects/V2/AudioCaptureQuality.h"
#include "JSONHandler/SDLRPCObjects/V2/SoftButtonCapabilities.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteSubMenu_response.h"
#include "JSONHandler/SDLRPCObjects/V2/Alert_response.h"
#include "JSONHandler/SDLRPCObjects/V2/GetVehicleData_request.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteFile_response.h"
#include "JSONHandler/SDLRPCObjects/V2/ChangeRegistration_response.h"
#include "JSONHandler/SDLRPCObjects/V2/TTSChunk.h"
#include "JSONHandler/SDLRPCObjects/V2/ResetGlobalProperties_response.h"
#include "JSONHandler/SDLRPCObjects/V2/PerformInteraction_response.h"
#include "JSONHandler/SDLRPCObjects/V2/Marshaller.h"
#include "JSONHandler/SDLRPCObjects/V2/ParameterPermissions.h"
#include "JSONHandler/SDLRPCObjects/V2/OnLanguageChange.h"
#include "JSONHandler/SDLRPCObjects/V2/PresetBankCapabilities.h"
#include "JSONHandler/SDLRPCObjects/V2/PRNDL.h"
#include "JSONHandler/SDLRPCObjects/V2/SingleTireStatus.h"
#include "JSONHandler/SDLRPCObjects/V2/SamplingRate.h"
#include "JSONHandler/SDLRPCObjects/V2/AudioStreamingState.h"
#include "JSONHandler/SDLRPCObjects/V2/ReadDID_response.h"
#include "JSONHandler/SDLRPCObjects/V2/SetDisplayLayout_request.h"
#include "JSONHandler/SDLRPCObjects/V2/DialNumber_request.h"
#include "JSONHandler/SDLRPCObjects/V2/AlertManeuver_response.h"
#include "JSONHandler/SDLRPCObjects/V2/HMIPermissions.h"
#include "JSONHandler/SDLRPCObjects/V2/ScrollableMessage_request.h"
#include "JSONHandler/SDLRPCObjects/V2/DeleteInteractionChoiceSet_request.h"
#include "JSONHandler/SDLRPCObjects/V2/AudioType.h"
#include "JSONHandler/SDLRPCObjects/V2/DisplayType.h"
#include "JSONHandler/SDLRPCObjects/V2/TirePressureTellTale.h"
#include "JSONHandler/SDLRPCObjects/V2/InteractionMode.h"
#include "JSONHandler/SDLRPCObjects/V2/UnregisterAppInterface_request.h"
#include "JSONHandler/SDLRPCObjects/V2/PerformAudioPassThru_response.h"
#include "JSONHandler/SDLRPCObjects/V2/ResetGlobalProperties_request.h"
#include "JSONHandler/SDLRPCObjects/V2/OnHMIStatus.h"
#include "JSONHandler/SDLRPCObjects/V2/UnregisterAppInterface_response.h"
#include "JSONHandler/SDLRPCObjects/V2/HMIApplication.h"
#include "JSONHandler/SDLRPCObjects/V2/EndAudioPassThru_request.h"
#include "JSONHandler/SDLRPCObjects/V2/VrHelpItem.h"
#include "JSONHandler/SDLRPCObjects/V2/VehicleDataType.h"
#include "JSONHandler/SDLRPCObjects/V2/TimerMode.h"
#include "JSONHandler/SDLRPCObjects/V2/Show_response.h"
#include "JSONHandler/SDLRPCObjects/V2/messageType.h"
#include "JSONHandler/SDLRPCObjects/V2/ButtonEventMode.h"
#include "JSONHandler/SDLRPCObjects/V2/OnEncodedSyncPData.h"
#include "JSONHandler/SDLRPCObjects/V2/PermissionItem.h"
#include "JSONHandler/SDLRPCObjects/V2/GetDTCs_response.h"
#include "JSONHandler/SDLRPCObjects/V2/GlobalProperty.h"

#endif //__RPC_HMI_API_2_H__
