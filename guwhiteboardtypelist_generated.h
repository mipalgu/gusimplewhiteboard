/**                                                                     
 *  /file guwhiteboardtypelist_generated.h                              
 *                                                                      
 *  Created by Carl Lusty in 2013.                                      
 *  Copyright (c) 2013 Carl Lusty                                       
 *  All rights reserved.                                                
 */                                                                     
                                                                        
                                                                        
#ifndef _GUWHITEBOARD_TYPELIST_H_                                       
#define _GUWHITEBOARD_TYPELIST_H_                                       
                                                                        
#include "gugenericwhiteboardobject.h"                                
                                                                        
                                                                        
//Generated on: Wed Apr 17 13:56:18 2013
//Generated by user: carl
                              
namespace guWhiteboard                                                  
{                                                                       
                                                                        
extern "C"                                                            
{                                                                       
#include "guwhiteboardtypelist_c_generated.h"                         
}                                                                       
                                                                        
	/// print to stdout
        class Print_t: public generic_whiteboard_object<std::string > { public: Print_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kPrint_v) {}
		Print_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kPrint_v, wbd) {} };

	/// speech output message
        class Say_t: public generic_whiteboard_object<std::string > { public: Say_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kSay_v) {}
		Say_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kSay_v, wbd) {} };

	/// debug speech message
        class Speech_t: public generic_whiteboard_object<std::string > { public: Speech_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kSpeech_v) {}
		Speech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kSpeech_v, wbd) {} };

	/// speech output message (queued)
        class QSay_t: public generic_whiteboard_object<std::string > { public: QSay_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kQSay_v) {}
		QSay_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kQSay_v, wbd) {} };

	/// debug speech message (queued)
        class QSpeech_t: public generic_whiteboard_object<std::string > { public: QSpeech_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kQSpeech_v) {}
		QSpeech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kQSpeech_v, wbd) {} };

	/// toggle, treat speech messages as silent output unless this is turned on
        class SpeechOutput_t: public generic_whiteboard_object<bool > { public: SpeechOutput_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kSpeechOutput_v) {}
		SpeechOutput_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kSpeechOutput_v, wbd) {} };

	/// This is an example of a type definition that generates a basic type class for getters / setters
        class BoolExample_t: public generic_whiteboard_object<bool > { public: BoolExample_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kBoolExample_v) {}
		BoolExample_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kBoolExample_v, wbd) {} };

	///This is an example of a type definition that indicates that a custom accessor class will be defined later
        class CustomClassExample_t: public generic_whiteboard_object<class CustClass > { public: CustomClassExample_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class CustClass >(wbd, kCustomClassExample_v) {} };

	/// *deprecated use MOTION_SDK_Commands* Used to play the motion files generated by Choregraphe
        class NaoMotionPlayer_t: public generic_whiteboard_object<std::string > { public: NaoMotionPlayer_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kNaoMotionPlayer_v) {}
		NaoMotionPlayer_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kNaoMotionPlayer_v, wbd) {} };

	/// *deprecated use MOTION_SDK_Commands* State variable, is there a motion running currently (NaoMotionPlayer)
        class NaoMotionPlayerIsRunning_t: public generic_whiteboard_object<bool > { public: NaoMotionPlayerIsRunning_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kNaoMotionPlayerIsRunning_v) {}
		NaoMotionPlayerIsRunning_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kNaoMotionPlayerIsRunning_v, wbd) {} };

	/// *deprecated commented out of motion* Commands the slow walk that is built into the SDK
        class NaoWalk_t: public generic_whiteboard_object<std::vector<int> > { public: NaoWalk_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::vector<int> >(wbd, kNaoWalk_v) {}
		NaoWalk_t(std::vector<int> value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::vector<int> >(value, kNaoWalk_v, wbd) {} };

	/// *deprecated commented out of motion* State variable, is the slow SDK walk running (NaoWalk)
        class NaoWalkIsRunning_t: public generic_whiteboard_object<bool > { public: NaoWalkIsRunning_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kNaoWalkIsRunning_v) {}
		NaoWalkIsRunning_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kNaoWalkIsRunning_v, wbd) {} };

	/// *deprecated use MOTION_SDK_Commands* Sets the head stiffness level, warning: this call may change and become part of the sensors / HAL module at a later date
        class HeadStiffness_t: public generic_whiteboard_object<float > { public: HeadStiffness_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<float >(wbd, kHeadStiffness_v) {}
		HeadStiffness_t(float value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<float >(value, kHeadStiffness_v, wbd) {} };

	/// *deprecated use MOTION_SDK_Commands* Sets the body stiffness level, warning: this call may change and become part of the sensors / HAL module at a later date
        class HoldingStiffness_t: public generic_whiteboard_object<float > { public: HoldingStiffness_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<float >(wbd, kHoldingStiffness_v) {}
		HoldingStiffness_t(float value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<float >(value, kHoldingStiffness_v, wbd) {} };

	/// *deprecated use MOTION_SDK_Commands* SDK wrapper function for moving any joint, be very careful
        class GenericAngleChange_t: public generic_whiteboard_object<std::vector<int> > { public: GenericAngleChange_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::vector<int> >(wbd, kGenericAngleChange_v) {}
		GenericAngleChange_t(std::vector<int> value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::vector<int> >(value, kGenericAngleChange_v, wbd) {} };

	/// *deprecated use MOTION_SDK_Commands* State variable, is the joint SDK wrapper function running (kGenericAngleChange)
        class GenericAngleChangeIsRunning_t: public generic_whiteboard_object<bool > { public: GenericAngleChangeIsRunning_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kGenericAngleChangeIsRunning_v) {}
		GenericAngleChangeIsRunning_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kGenericAngleChangeIsRunning_v, wbd) {} };

	///Used to alter the head position via the DCM
        class HAL_HeadTarget_t: public generic_whiteboard_object<class HAL_HeadTarget > { public: HAL_HeadTarget_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class HAL_HeadTarget >(wbd, kHAL_HeadTarget_v) {} };

	///Posts the sensor information for the feet via the DCM loop (read only)
        class SENSORS_FootSensors_t: public generic_whiteboard_object<class SENSORS_FootSensors > { public: SENSORS_FootSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_FootSensors >(wbd, kSENSORS_FootSensors_v) {} };

	///Posts the sensor information for the body via the DCM loop (read only)
        class SENSORS_BodySensors_t: public generic_whiteboard_object<class SENSORS_BodySensors > { public: SENSORS_BodySensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_BodySensors >(wbd, kSENSORS_BodySensors_v) {} };

	///Posts the current LEDs info, can be modified. (read/write)
        class SENSORS_LedsSensors_t: public generic_whiteboard_object<class SENSORS_LedsSensors > { public: SENSORS_LedsSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LedsSensors >(wbd, kSENSORS_LedsSensors_v) {} };

	///Posts the temperature of the leg joints via the DCM loop (read only)
        class SENSORS_LegJointTemps_t: public generic_whiteboard_object<class SENSORS_LegJointTemps > { public: SENSORS_LegJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LegJointTemps >(wbd, kSENSORS_LegJointTemps_v) {} };

	///Posts the temperature of the torso joints via the DCM loop (read only)
        class SENSORS_TorsoJointTemps_t: public generic_whiteboard_object<class SENSORS_TorsoJointTemps > { public: SENSORS_TorsoJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_TorsoJointTemps >(wbd, kSENSORS_TorsoJointTemps_v) {} };

	///Posts the joint angles of the legs via the DCM loop (read only)
        class SENSORS_LegJointSensors_t: public generic_whiteboard_object<class SENSORS_LegJointSensors > { public: SENSORS_LegJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LegJointSensors >(wbd, kSENSORS_LegJointSensors_v) {} };

	///Posts the joint angles of the torso via the DCM loop (read only)
        class SENSORS_TorsoJointSensors_t: public generic_whiteboard_object<class SENSORS_TorsoJointSensors > { public: SENSORS_TorsoJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_TorsoJointSensors >(wbd, kSENSORS_TorsoJointSensors_v) {} };

	///Posts the sonar readings via the DCM loop (read only)
        class SENSORS_SonarSensors_t: public generic_whiteboard_object<class SENSORS_SonarSensors > { public: SENSORS_SonarSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_SonarSensors >(wbd, kSENSORS_SonarSensors_v) {} };

	///Suspend, Resume, or Restart a finite state machine (clfsm)
        class FSM_Control_t: public generic_whiteboard_object<class FSMControlStatus > { public: FSM_Control_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMControlStatus >(wbd, kFSM_Control_v) {} };

	///Current status indicating the suspended state of all FSMs.  The highest bit that is always set is the number of machines plus one.
        class FSM_Status_t: public generic_whiteboard_object<class FSMControlStatus > { public: FSM_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMControlStatus >(wbd, kFSM_Status_v) {} };

	///Request or return the names of the currently loaded FSMs.  End of list is denoted by an empty string.  Requests need to put an empty string into the first FSM name;
        class FSM_Names_t: public generic_whiteboard_object<class FSMNames > { public: FSM_Names_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMNames >(wbd, kFSM_Names_v) {} };

	///Class used to interact with the walk engine (UNSW)
        class WALK_Status_t: public generic_whiteboard_object<class WALK_Status > { public: WALK_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WALK_Status >(wbd, kWALK_Status_v) {} };

	///WIP Class that contains the belief of the ball position from Localisation
        class BallBelief_t: public generic_whiteboard_object<class Point2D > { public: BallBelief_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Point2D >(wbd, kBallBelief_v) {} };

	///Class that contains the Klamna filtered  information of an object sigthing
        class FVOsighting_t: public generic_whiteboard_object<class FilteredVisionObject > { public: FVOsighting_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FilteredVisionObject >(wbd, kFVOsighting_v) {} };

	///Stores the orientation of the robot as well as the chest button status (more to come).
        class NAO_State_t: public generic_whiteboard_object<class NAO_State > { public: NAO_State_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NAO_State >(wbd, kNAO_State_v) {} };

	///the notfication for the UDP receiver.
        class UDPRN_t: public generic_whiteboard_object<class UDPReceiverNotification > { public: UDPRN_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class UDPReceiverNotification >(wbd, kUDPRN_v) {} };

	///WB interface for sending motion commands to the SDK
        class MOTION_SDK_Commands_t: public generic_whiteboard_object<class MOTION_SDK_Commands > { public: MOTION_SDK_Commands_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class MOTION_SDK_Commands >(wbd, kMOTION_SDK_Commands_v) {} };

}

#endif                          
