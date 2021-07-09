/**
 *  /file guwhiteboardserialiser.c
 *
 *  Created by Carl Lusty in 2018.
 *  Copyright (c) 2013-2020 Carl Lusty and Rene Hexel
 *  All rights reserved.
 */

/** Auto-generated, don't modify! */

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-macros"
#pragma clang diagnostic ignored "-Wcast-qual"
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wunreachable-code-break"

#ifndef WB_GUWHITEBOARDSERIALISER_C
#define WB_GUWHITEBOARDSERIALISER_C


#define WHITEBOARD_SERIALISER

#define COMPRESSION_CALL(...) _to_network_serialised(__VA_ARGS__);
#define COMPRESSION_FUNC_(s, p) s ## p
#define COMPRESSION_FUNC(s, p) COMPRESSION_FUNC_(s, p)
#define SERIALISE(_struct, ...) COMPRESSION_FUNC(_struct, COMPRESSION_CALL(__VA_ARGS__))

#include "guwhiteboardserialisation.h"
#include "guwhiteboard_c_types.h"

int32_t serialisemsg(wb_types message_index, const void *message_in, void *serialised_out)
{
    switch (message_index)
    {

            case kwb_reserved_SubscribeToAllTypes_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kPrint_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kSay_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kSpeech_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kQSay_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kQSpeech_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kSpeechOutput_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kGCGameState_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSensorsHandSensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSensorsHeadSensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kMOTION_Commands_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kMOTION_Status_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_HeadTarget_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSensorsFootSensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSensorsBodySensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSENSORSLedsSensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSENSORSLegJointTemps_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSENSORSTorsoJointTemps_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSENSORSLegJointSensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSENSORSTorsoJointSensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSENSORSSonarSensors_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kFSM_Control_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kFSM_Status_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kFSM_Names_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSoloTypeExample_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kFilteredGoalSighting_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kNAO_State_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kUDPRN_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kPlayerNumber_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kManuallyPenalized_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kVisionControl_v:
            {
#ifdef WB_VISION_CONTROL_STATUS_GENERATED
                return SERIALISE(WB_VISION_CONTROL_STATUS_C_STRUCT, (struct WB_VISION_CONTROL_STATUS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_CONTROL_STATUS_GENERATED
                break;
            }
            case kVisionStatus_v:
            {
#ifdef WB_VISION_CONTROL_STATUS_GENERATED
                return SERIALISE(WB_VISION_CONTROL_STATUS_C_STRUCT, (struct WB_VISION_CONTROL_STATUS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_CONTROL_STATUS_GENERATED
                break;
            }
            case kFFTStatus_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kFSOsighting_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kTopParticles_v:
            {
#ifdef WB_TOPPARTICLES_GENERATED
                return SERIALISE(WB_TOPPARTICLES_C_STRUCT, (struct WB_TOPPARTICLES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_TOPPARTICLES_GENERATED
                break;
            }
            case kFilteredBallSighting_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kPF_ControlStatus_Modes_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kWEBOTS_NXT_bridge_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWEBOTS_NXT_encoders_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWEBOTS_NXT_camera_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWEBOTS_NXT_walk_isRunning_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWEBOTS_NXT_deadReakoning_walk_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWEBOTS_NXT_colorLine_walk_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWEBOTS_NXT_gridMotions_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kVisionBall_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kVisionGoals_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWalkData_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kTeleoperationControlStatus_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kTeleoperationConnection_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kUDPWBNumber_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kWEBOTS_NXT_bumper_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kWEBOTS_NXT_vector_bridge_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kTopVisionLines_v:
            {
#ifdef WB_VISION_LINES_GENERATED
                return SERIALISE(WB_VISION_LINES_C_STRUCT, (struct WB_VISION_LINES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_LINES_GENERATED
                break;
            }
            case kBottomVisionLines_v:
            {
#ifdef WB_VISION_LINES_GENERATED
                return SERIALISE(WB_VISION_LINES_C_STRUCT, (struct WB_VISION_LINES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_LINES_GENERATED
                break;
            }
            case kDifferentialRobotStatus_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kDifferentialRobotControl_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kXEyesPos_v:
            {
#ifdef WB_POINT2D_GENERATED
                return SERIALISE(WB_POINT2D_C_STRUCT, (struct WB_POINT2D_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_POINT2D_GENERATED
                break;
            }
            case kVisionFace_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kDraw_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kFSM_States_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kGiraff_Interface_Status_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kGiraff_Interface_Command_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kNXT_Status_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kNXT_Command_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kAPM_Status_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kAPM_Command_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kREMOVED3_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kREMOVED4_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kCBall_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kOculusPrime_Command_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kInput3D_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kOculus_Prime_Command_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kIOPins_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kNXT_Two_Touch_Status_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kNXT_Sound_Control_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kNXT_Lights_Control_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kClocks_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kChannels_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kSwitchSubsumption_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kTotoDoingMotion_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kCount_v:
            {
#ifdef WB_COUNT_GENERATED
                return SERIALISE(WB_COUNT_C_STRUCT, (struct WB_COUNT_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_COUNT_GENERATED
                break;
            }
            case kGreenEWon_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kWarnEW_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kTimeGTthirty_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kAmberEWon_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kTurnRedEW_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kTimeGTfive_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kRedEWon_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kGreenNSon_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kWarnNS_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kAmberNSon_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kTurnRedNS_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kRedNSon_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kTimerReset_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kSLOT_UNUSED_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kCarSensorPressed_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kSwitchSubsumptionTrafficLights_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kBall_Found_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kBall_Calibration_File_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kBall_Calibration_Num_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kBall_Color_Num_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kHAL_LArmTarget_Ctrl_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_LArmTarget_Stat_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_LArmTarget_Tolr_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_RArmTarget_Ctrl_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_RArmTarget_Stat_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_RArmTarget_Tolr_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kVisionFieldFeatures_v:
            {
#ifdef WB_VISION_FIELD_FEATURES_GENERATED
                return SERIALISE(WB_VISION_FIELD_FEATURES_C_STRUCT, (struct WB_VISION_FIELD_FEATURES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_FIELD_FEATURES_GENERATED
                break;
            }
            case kWhistleBlown_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kVolumeControl_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kVisionRobots_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kVisionDetectionHorizons_v:
            {
#ifdef WB_VISION_DETECTION_HORIZONS_GENERATED
                return SERIALISE(WB_VISION_DETECTION_HORIZONS_C_STRUCT, (struct WB_VISION_DETECTION_HORIZONS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_DETECTION_HORIZONS_GENERATED
                break;
            }
            case kNaoWalkCommand_v:
            {
#ifdef WB_NAOWALKCOMMAND_GENERATED
                return SERIALISE(WB_NAOWALKCOMMAND_C_STRUCT, (struct WB_NAOWALKCOMMAND_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_NAOWALKCOMMAND_GENERATED
                break;
            }
            case kNaoWalkStatus_v:
            {
#ifdef WB_NAOWALKSTATUS_GENERATED
                return SERIALISE(WB_NAOWALKSTATUS_C_STRUCT, (struct WB_NAOWALKSTATUS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_NAOWALKSTATUS_GENERATED
                break;
            }
            case kHAL_LLegTarget_Ctrl_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_LLegTarget_Stat_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_LLegTarget_Tolr_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_RLegTarget_Ctrl_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_RLegTarget_Stat_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kHAL_RLegTarget_Tolr_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kVisionDetectionGoals_v:
            {
#ifdef WB_VISION_DETECTION_GOALS_GENERATED
                return SERIALISE(WB_VISION_DETECTION_GOALS_C_STRUCT, (struct WB_VISION_DETECTION_GOALS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_DETECTION_GOALS_GENERATED
                break;
            }
            case kTeleoperationControl_v:
            {
#ifdef WB_TELEOPERATIONCONTROL_GENERATED
                return SERIALISE(WB_TELEOPERATIONCONTROL_C_STRUCT, (struct WB_TELEOPERATIONCONTROL_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_TELEOPERATIONCONTROL_GENERATED
                break;
            }
            case kTeleoperationStatus_v:
            {
#ifdef WB_TELEOPERATIONSTATUS_GENERATED
                return SERIALISE(WB_TELEOPERATIONSTATUS_C_STRUCT, (struct WB_TELEOPERATIONSTATUS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_TELEOPERATIONSTATUS_GENERATED
                break;
            }
            case kVisionDetectionBalls_v:
            {
#ifdef WB_VISION_DETECTION_BALLS_GENERATED
                return SERIALISE(WB_VISION_DETECTION_BALLS_C_STRUCT, (struct WB_VISION_DETECTION_BALLS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_DETECTION_BALLS_GENERATED
                break;
            }
            case kTeleoperationControlVR_v:
            {
#ifdef WB_TELEOPERATIONCONTROLVR_GENERATED
                return SERIALISE(WB_TELEOPERATIONCONTROLVR_C_STRUCT, (struct WB_TELEOPERATIONCONTROLVR_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_TELEOPERATIONCONTROLVR_GENERATED
                break;
            }
            case kParticleOutputMap_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kParticleOutputMapControl_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kFFTControl_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kMachineFilteredNaoVision_v:
            {
#ifdef WB_MACHINE_FILTERED_VISION_GENERATED
                return SERIALISE(WB_MACHINE_FILTERED_VISION_C_STRUCT, (struct WB_MACHINE_FILTERED_VISION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MACHINE_FILTERED_VISION_GENERATED
                break;
            }
            case kMicrowaveStatus_v:
            {
#ifdef WB_MICROWAVE_STATUS_GENERATED
                return SERIALISE(WB_MICROWAVE_STATUS_C_STRUCT, (struct WB_MICROWAVE_STATUS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MICROWAVE_STATUS_GENERATED
                break;
            }
            case kButtons_v:
            {
#ifdef WB_BUTTONS_GENERATED
                return SERIALISE(WB_BUTTONS_C_STRUCT, (struct WB_BUTTONS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_BUTTONS_GENERATED
                break;
            }
            case kMachineFilteredLocalisationVision_v:
            {
#ifdef WB_MACHINE_FILTERED_LOCALISATION_VISION_GENERATED
                return SERIALISE(WB_MACHINE_FILTERED_LOCALISATION_VISION_C_STRUCT, (struct WB_MACHINE_FILTERED_LOCALISATION_VISION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MACHINE_FILTERED_LOCALISATION_VISION_GENERATED
                break;
            }
            case kSensorsJointCurrent_v:
            {
#ifdef SerialisationNotSupportedWithLegacyNaming
                return SERIALISE(NotSupportedWithLegacyNaming, (struct NotSupportedWithLegacyNaming *)message_in, serialised_out)
#else
                return -1;
#endif //SerialisationNotSupportedWithLegacyNaming
                break;
            }
            case kDataLogger_v:
            {
#ifdef WB_DATA_LOGGER_GENERATED
                return SERIALISE(WB_DATA_LOGGER_C_STRUCT, (struct WB_DATA_LOGGER_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_DATA_LOGGER_GENERATED
                break;
            }
            case kMachineFilteredLines_v:
            {
#ifdef WB_MACHINE_FILTERED_LINES_GENERATED
                return SERIALISE(WB_MACHINE_FILTERED_LINES_C_STRUCT, (struct WB_MACHINE_FILTERED_LINES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MACHINE_FILTERED_LINES_GENERATED
                break;
            }
            case kBallLocation_v:
            {
#ifdef WB_LOCATION_GENERATED
                return SERIALISE(WB_LOCATION_C_STRUCT, (struct WB_LOCATION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_LOCATION_GENERATED
                break;
            }
            case kLeftGoalPostLocation_v:
            {
#ifdef WB_LOCATION_GENERATED
                return SERIALISE(WB_LOCATION_C_STRUCT, (struct WB_LOCATION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_LOCATION_GENERATED
                break;
            }
            case kRightGoalPostLocation_v:
            {
#ifdef WB_LOCATION_GENERATED
                return SERIALISE(WB_LOCATION_C_STRUCT, (struct WB_LOCATION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_LOCATION_GENERATED
                break;
            }
            case kGoalLocation_v:
            {
#ifdef WB_LOCATION_GENERATED
                return SERIALISE(WB_LOCATION_C_STRUCT, (struct WB_LOCATION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_LOCATION_GENERATED
                break;
            }
            case kNaoSonarProtectedWalkCommand_v:
            {
#ifdef WB_NAO_SONAR_PROTECTED_WALK_COMMAND_GENERATED
                return SERIALISE(WB_NAO_SONAR_PROTECTED_WALK_COMMAND_C_STRUCT, (struct WB_NAO_SONAR_PROTECTED_WALK_COMMAND_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_NAO_SONAR_PROTECTED_WALK_COMMAND_GENERATED
                break;
            }
            case kNaoObstacleDirection_v:
            {
#ifdef WB_NAO_OBSTACLE_DIRECTION_GENERATED
                return SERIALISE(WB_NAO_OBSTACLE_DIRECTION_C_STRUCT, (struct WB_NAO_OBSTACLE_DIRECTION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_NAO_OBSTACLE_DIRECTION_GENERATED
                break;
            }
            case kDominantFrequencies_v:
            {
#ifdef WB_DOMINANT_FREQUENCIES_GENERATED
                return SERIALISE(WB_DOMINANT_FREQUENCIES_C_STRUCT, (struct WB_DOMINANT_FREQUENCIES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_DOMINANT_FREQUENCIES_GENERATED
                break;
            }
            case kMissionPriorityForObstacles_v:
            {
#ifdef WB_MISSION_PRIORITY_FOR_OBSTACLES_GENERATED
                return SERIALISE(WB_MISSION_PRIORITY_FOR_OBSTACLES_C_STRUCT, (struct WB_MISSION_PRIORITY_FOR_OBSTACLES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MISSION_PRIORITY_FOR_OBSTACLES_GENERATED
                break;
            }
            case kWavLoad_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kWavPlay_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kReproduceWavNotSilent_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kFrequencyControl_v:
            {
#ifdef WB_FREQUENCY_LIMITS_GENERATED
                return SERIALISE(WB_FREQUENCY_LIMITS_C_STRUCT, (struct WB_FREQUENCY_LIMITS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_FREQUENCY_LIMITS_GENERATED
                break;
            }
            case kFrequencyStatus_v:
            {
#ifdef WB_FREQUENCY_LIMITS_GENERATED
                return SERIALISE(WB_FREQUENCY_LIMITS_C_STRUCT, (struct WB_FREQUENCY_LIMITS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_FREQUENCY_LIMITS_GENERATED
                break;
            }
            case kHeadJointSensors_v:
            {
#ifdef WB_HEAD_JOINT_SENSORS_GENERATED
                return SERIALISE(WB_HEAD_JOINT_SENSORS_C_STRUCT, (struct WB_HEAD_JOINT_SENSORS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_HEAD_JOINT_SENSORS_GENERATED
                break;
            }
            case kAdjustPositionConfidence_v:
            {
#ifdef WB_ADJUST_POSITION_CONFIDENCE_GENERATED
                return SERIALISE(WB_ADJUST_POSITION_CONFIDENCE_C_STRUCT, (struct WB_ADJUST_POSITION_CONFIDENCE_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_ADJUST_POSITION_CONFIDENCE_GENERATED
                break;
            }
            case kGuVrTeleopVulkanControl_v:
            {
#ifdef WB_GU_VR_TELEOP_VULKAN_CONTROL_GENERATED
                return SERIALISE(WB_GU_VR_TELEOP_VULKAN_CONTROL_C_STRUCT, (struct WB_GU_VR_TELEOP_VULKAN_CONTROL_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_GU_VR_TELEOP_VULKAN_CONTROL_GENERATED
                break;
            }
            case kTemperatureSensors_v:
            {
#ifdef WB_TEMPERATURE_SENSORS_GENERATED
                return SERIALISE(WB_TEMPERATURE_SENSORS_C_STRUCT, (struct WB_TEMPERATURE_SENSORS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_TEMPERATURE_SENSORS_GENERATED
                break;
            }
            case kOverheating_v:
            {
#ifdef WB_OVERHEATING_GENERATED
                return SERIALISE(WB_OVERHEATING_C_STRUCT, (struct WB_OVERHEATING_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_OVERHEATING_GENERATED
                break;
            }
            case kbuttonPushed_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kdoorOpen_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case ktimeLeft_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kmotor_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case ksound_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case klight_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino2Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino2PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino3Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino3PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino4Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino4PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino5Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino5PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino6Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino6PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino7Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino7PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino8Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino8PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino9Pin_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kArduino9PinValue_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kBallPosition_v:
            {
#ifdef WB_BALL_POSITION_GENERATED
                return SERIALISE(WB_BALL_POSITION_C_STRUCT, (struct WB_BALL_POSITION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_BALL_POSITION_GENERATED
                break;
            }
            case kMemoryImageControl_v:
            {
#ifdef WB_MEMORY_IMAGE_CONTROL_STATUS_GENERATED
                return SERIALISE(WB_MEMORY_IMAGE_CONTROL_STATUS_C_STRUCT, (struct WB_MEMORY_IMAGE_CONTROL_STATUS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MEMORY_IMAGE_CONTROL_STATUS_GENERATED
                break;
            }
            case kMemoryImageStatus_v:
            {
#ifdef WB_MEMORY_IMAGE_CONTROL_STATUS_GENERATED
                return SERIALISE(WB_MEMORY_IMAGE_CONTROL_STATUS_C_STRUCT, (struct WB_MEMORY_IMAGE_CONTROL_STATUS_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MEMORY_IMAGE_CONTROL_STATUS_GENERATED
                break;
            }
            case kLHandGripper_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kRHandGripper_v:
            {
                return -1; /*TODO, add support for POD types.*/
                break;
            }
            case kMyPosition_v:
            {
#ifdef WB_MY_POSITION_GENERATED
                return SERIALISE(WB_MY_POSITION_C_STRUCT, (struct WB_MY_POSITION_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_MY_POSITION_GENERATED
                break;
            }
            case kVisionDetectionLines_v:
            {
#ifdef WB_VISION_DETECTION_LINES_GENERATED
                return SERIALISE(WB_VISION_DETECTION_LINES_C_STRUCT, (struct WB_VISION_DETECTION_LINES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_DETECTION_LINES_GENERATED
                break;
            }
            case kVisionDetectionFeatures_v:
            {
#ifdef WB_VISION_DETECTION_FEATURES_GENERATED
                return SERIALISE(WB_VISION_DETECTION_FEATURES_C_STRUCT, (struct WB_VISION_DETECTION_FEATURES_C_STRUCT *)message_in, serialised_out)
#else
                return -1;
#endif //WB_VISION_DETECTION_FEATURES_GENERATED
                break;
            }
    }
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunreachable-code"
    /*(void) message_content;*/
    return -1;
#pragma clang diagnostic pop
}

#endif //WB_GUWHITEBOARDSERIALISER_C

#pragma clang diagnostic pop
