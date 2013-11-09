/**                                                                     
 *  /file guwhiteboardtypelist_c_generated.h                            
 *                                                                      
 *  Created by Carl Lusty in 2013.                                      
 *  Copyright (c) 2013 Carl Lusty                                       
 *  All rights reserved.                                                
 */                                                                     


#ifndef _GUWHITEBOARD_TYPELIST_C_H_                                     
#define _GUWHITEBOARD_TYPELIST_C_H_                                     


#define WANT_WB_STRINGS

#define GSW_NUM_TYPES_DEFINED 50

#if GSW_NUM_TYPES_DEFINED > GSW_NUM_RESERVED
#error *** Error: gusimplewhiteboard: The number of defined types exceeds the total number of reserved types allowed. Increase GSW_NUM_RESERVED to solve this.
#endif
//Generated on: Sat Nov  9 15:53:56 2013
//Generated by user: vlad

        typedef enum wb_types      
        {                                                               
                kwb_reserved_SubscribeToAllTypes_v = 0,	///<Global subscription type. Do not add content to this type, it is for global subscriptions only
                kPrint_v = 1,                kSay_v = 2,                kSpeech_v = 3,                kQSay_v = 4,                kQSpeech_v = 5,                kSpeechOutput_v = 6,
                kGCGameState_v = 7,
                kWALK_Command_v = 8,
                kWALK_Status_v = 9,
                kMOTION_Commands_v = 10,
                kMOTION_Status_v = 11,
                kNaoWalk_v = 12,
                kNaoWalkIsRunning_v = 13,
                kHeadStiffness_v = 14,
                kHoldingStiffness_v = 15,
                kGenericAngleChange_v = 16,
                kGenericAngleChangeIsRunning_v = 17,
                kHAL_HeadTarget_v = 18,
                kSENSORS_FootSensors_v = 19,
                kSENSORS_BodySensors_v = 20,
                kSENSORS_LedsSensors_v = 21,
                kSENSORS_LegJointTemps_v = 22,
                kSENSORS_TorsoJointTemps_v = 23,
                kSENSORS_LegJointSensors_v = 24,
                kSENSORS_TorsoJointSensors_v = 25,
                kSENSORS_SonarSensors_v = 26,
                kFSM_Control_v = 27,
                kFSM_Status_v = 28,
                kFSM_Names_v = 29,
                kSoloTypeExample_v = 30,	///<This is an example of a type definition that does not generate anything other than a wb type
                kBallBelief_v = 31,
                kFilteredGoalSighting_v = 32,
                kNAO_State_v = 33,
                kUDPRN_v = 34,
                kPlayerNumber_v = 35,
                kManuallyPenalized_v = 36,
                kVision_Control_v = 37,
                kVision_Status_v = 38,
                kVision_Objects_v = 39,
                kFSOsighting_v = 40,
                kTopParticles_v = 41,
                kFilteredBallSighting_v = 42,
                kPF_ControlStatus_Modes_v = 43,
                kWEBOTS_NXT_bridge_v = 44,
                kWEBOTS_NXT_encoders_v = 45,
                kWEBOTS_NXT_camera_v = 46,
                kWEBOTS_NXT_walk_isRunning_v = 47,
                kWEBOTS_NXT_deadReakoning_walk_v = 48,
                kWEBOTS_NXT_colorLine_walk_v = 49
        } WBTypes;

        extern const char *WBTypes_stringValues[];
#endif                          
