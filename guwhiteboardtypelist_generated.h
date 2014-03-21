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
                                                                        
#pragma clang diagnostic push                                           
#pragma clang diagnostic ignored "-Wpadded"                           
                                                                        
                                                                        
//Generated on: Fri Mar 21 13:03:28 2014
//Generated by user: vlad
                              
namespace guWhiteboard                                                  
{                                                                       
                                                                        
extern "C"                                                            
{                                                                       
#include "guwhiteboardtypelist_c_generated.h"                         
}                                                                       
                                                                        
	/// print to stdout
        class Print_t: public generic_whiteboard_object<std::string > { 
	public: 
		Print_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kPrint_v, true) {}
		Print_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kPrint_v, wbd, true) {} 
	};

	/// speech output message
        class Say_t: public generic_whiteboard_object<std::string > { 
	public: 
		Say_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kSay_v, true) {}
		Say_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kSay_v, wbd, true) {} 
	};

	/// debug speech message
        class Speech_t: public generic_whiteboard_object<std::string > { 
	public: 
		Speech_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kSpeech_v, true) {}
		Speech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kSpeech_v, wbd, true) {} 
	};

	/// speech output message (queued)
        class QSay_t: public generic_whiteboard_object<std::string > { 
	public: 
		QSay_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kQSay_v, true) {}
		QSay_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kQSay_v, wbd, true) {} 
	};

	/// debug speech message (queued)
        class QSpeech_t: public generic_whiteboard_object<std::string > { 
	public: 
		QSpeech_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kQSpeech_v, true) {}
		QSpeech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kQSpeech_v, wbd, true) {} 
	};

	/// toggle, treat speech messages as silent output unless this is turned on
        class SpeechOutput_t: public generic_whiteboard_object<bool > { 
	public: 
		SpeechOutput_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kSpeechOutput_v, false) {}
		SpeechOutput_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kSpeechOutput_v, wbd, false) {} 
	};

	///game state as posted by the game controller state machine
        class GCGameState_t: public generic_whiteboard_object<class GCGameState > { 
	public: 
		GCGameState_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class GCGameState >(wbd, kGCGameState_v, false) {} 
	};

	///Class used to control the walk engine (UNSW)
        class WALK_Command_t: public generic_whiteboard_object<class WALK_ControlStatus > { 
	public: 
		WALK_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WALK_ControlStatus >(wbd, kWALK_Command_v, false) {} 
	};

	///Class used to check the status of the walk engine (UNSW)
        class WALK_Status_t: public generic_whiteboard_object<class WALK_ControlStatus > { 
	public: 
		WALK_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WALK_ControlStatus >(wbd, kWALK_Status_v, false) {} 
	};

	///WB interface for sending motion commands
        class MOTION_Commands_t: public generic_whiteboard_object<class MOTION_Commands > { 
	public: 
		MOTION_Commands_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class MOTION_Commands >(wbd, kMOTION_Commands_v, false) {} 
	};

	///WB interface for checking the status of commands sent
        class MOTION_Status_t: public generic_whiteboard_object<class MOTION_Status > { 
	public: 
		MOTION_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class MOTION_Status >(wbd, kMOTION_Status_v, false) {} 
	};

	///Used to alter the head position via the DCM
        class HAL_HeadTarget_t: public generic_whiteboard_object<class HAL_HeadTarget > { 
	public: 
		HAL_HeadTarget_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class HAL_HeadTarget >(wbd, kHAL_HeadTarget_v, false) {} 
	};

	///Posts the sensor information for the feet via the DCM loop (read only)
        class SENSORS_FootSensors_t: public generic_whiteboard_object<class SENSORS_FootSensors > { 
	public: 
		SENSORS_FootSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_FootSensors >(wbd, kSENSORS_FootSensors_v, false) {} 
	};

	///Posts the sensor information for the body via the DCM loop (read only)
        class SENSORS_BodySensors_t: public generic_whiteboard_object<class SENSORS_BodySensors > { 
	public: 
		SENSORS_BodySensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_BodySensors >(wbd, kSENSORS_BodySensors_v, false) {} 
	};

	///Posts the current LEDs info, can be modified. (read/write)
        class SENSORS_LedsSensors_t: public generic_whiteboard_object<class SENSORS_LedsSensors > { 
	public: 
		SENSORS_LedsSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LedsSensors >(wbd, kSENSORS_LedsSensors_v, false) {} 
	};

	///Posts the temperature of the leg joints via the DCM loop (read only)
        class SENSORS_LegJointTemps_t: public generic_whiteboard_object<class SENSORS_LegJointTemps > { 
	public: 
		SENSORS_LegJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LegJointTemps >(wbd, kSENSORS_LegJointTemps_v, false) {} 
	};

	///Posts the temperature of the torso joints via the DCM loop (read only)
        class SENSORS_TorsoJointTemps_t: public generic_whiteboard_object<class SENSORS_TorsoJointTemps > { 
	public: 
		SENSORS_TorsoJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_TorsoJointTemps >(wbd, kSENSORS_TorsoJointTemps_v, false) {} 
	};

	///Posts the joint angles of the legs via the DCM loop (read only)
        class SENSORS_LegJointSensors_t: public generic_whiteboard_object<class SENSORS_LegJointSensors > { 
	public: 
		SENSORS_LegJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LegJointSensors >(wbd, kSENSORS_LegJointSensors_v, false) {} 
	};

	///Posts the joint angles of the torso via the DCM loop (read only)
        class SENSORS_TorsoJointSensors_t: public generic_whiteboard_object<class SENSORS_TorsoJointSensors > { 
	public: 
		SENSORS_TorsoJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_TorsoJointSensors >(wbd, kSENSORS_TorsoJointSensors_v, false) {} 
	};

	///Posts the sonar readings via the DCM loop (read only)
        class SENSORS_SonarSensors_t: public generic_whiteboard_object<class SENSORS_SonarSensors > { 
	public: 
		SENSORS_SonarSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_SonarSensors >(wbd, kSENSORS_SonarSensors_v, false) {} 
	};

	///Suspend, Resume, or Restart a finite state machine (clfsm)
        class FSM_Control_t: public generic_whiteboard_object<class FSMControlStatus > { 
	public: 
		FSM_Control_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMControlStatus >(wbd, kFSM_Control_v, true) {} 
	};

	///Current status indicating the suspended state of all FSMs.  The highest bit that is always set is the number of machines plus one.
        class FSM_Status_t: public generic_whiteboard_object<class FSMControlStatus > { 
	public: 
		FSM_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMControlStatus >(wbd, kFSM_Status_v, true) {} 
	};

	///Request or return the names of the currently loaded FSMs.  End of list is denoted by an empty string.  Requests need to put an empty string into the first FSM name;
        class FSM_Names_t: public generic_whiteboard_object<class FSMNames > { 
	public: 
		FSM_Names_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMNames >(wbd, kFSM_Names_v, true) {} 
	};

	///Class that contains the Kalman filtered goal objects after sighting from vision
        class FilteredGoalSighting_t: public generic_whiteboard_object<class FilteredOneDimObjects > { 
	public: 
		FilteredGoalSighting_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FilteredOneDimObjects >(wbd, kFilteredGoalSighting_v, false) {} 
	};

	///Stores the orientation of the robot as well as the chest button status (more to come).
        class NAO_State_t: public generic_whiteboard_object<class NAO_State > { 
	public: 
		NAO_State_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NAO_State >(wbd, kNAO_State_v, false) {} 
	};

	///game state notfication from the UDP receiver.
        class UDPRN_t: public generic_whiteboard_object<class GCGameState > { 
	public: 
		UDPRN_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class GCGameState >(wbd, kUDPRN_v, false) {} 
	};

	/// what player number is this robot wearing at RoboCup in its back, retrieved from data/playernumber and posted by the UDPreceiver
        class PlayerNumber_t: public generic_whiteboard_object<int > { 
	public: 
		PlayerNumber_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kPlayerNumber_v, false) {}
		PlayerNumber_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kPlayerNumber_v, wbd, false) {} 
	};

	/// what player number is this robot wearing at RoboCup in its back whn manually penalized, from GameController FSM sent to the UDPreceiver to forward to the JAVA referee
        class ManuallyPenalized_t: public generic_whiteboard_object<int > { 
	public: 
		ManuallyPenalized_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kManuallyPenalized_v, false) {}
		ManuallyPenalized_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kManuallyPenalized_v, wbd, false) {} 
	};

	///control various attributes of the vision pipeline.
        class Vision_Control_t: public generic_whiteboard_object<class VisionControlStatus > { 
	public: 
		Vision_Control_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionControlStatus >(wbd, kVision_Control_v, false) {} 
	};

	///message sent by vision that contains the current status of
        class Vision_Status_t: public generic_whiteboard_object<class VisionControlStatus > { 
	public: 
		Vision_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionControlStatus >(wbd, kVision_Status_v, false) {} 
	};

	///message containing information about objects detected in last run of the pipeline
        class Vision_Objects_t: public generic_whiteboard_object<class VisionObjects > { 
	public: 
		Vision_Objects_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionObjects >(wbd, kVision_Objects_v, true) {} 
	};

	///Class that contains the Karman filtered  iSONAR objects after a sighting
        class FSOsighting_t: public generic_whiteboard_object<class FilteredSonarObjects > { 
	public: 
		FSOsighting_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FilteredSonarObjects >(wbd, kFSOsighting_v, false) {} 
	};

	///Class that contains the top particles for possible robot positions
        class TopParticles_t: public generic_whiteboard_object<class TopParticles > { 
	public: 
		TopParticles_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class TopParticles >(wbd, kTopParticles_v, false) {} 
	};

	///Class that contains the Kalman filtered ball object after sighting from vision
        class FilteredBallSighting_t: public generic_whiteboard_object<class FilteredVisionObject > { 
	public: 
		FilteredBallSighting_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FilteredVisionObject >(wbd, kFilteredBallSighting_v, false) {} 
	};

	/// what to post in the whiteboard to cause the Particle Filetr to reset, but running has no effect, it is the PF response
        class PF_ControlStatus_Modes_t: public generic_whiteboard_object<int > { 
	public: 
		PF_ControlStatus_Modes_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kPF_ControlStatus_Modes_v, false) {}
		PF_ControlStatus_Modes_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kPF_ControlStatus_Modes_v, wbd, false) {} 
	};

	///WIP Class that contains a command for WEBOTS or NXt trough a bridge
        class WEBOTS_NXT_bridge_t: public generic_whiteboard_object<class WEBOTS_NXT_bridge > { 
	public: 
		WEBOTS_NXT_bridge_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_bridge >(wbd, kWEBOTS_NXT_bridge_v, false) {} 
	};

	///Class that contains data from encoders all for WEBOTS or NXt trough a bridge
        class WEBOTS_NXT_encoders_t: public generic_whiteboard_object<class WEBOTS_NXT_encoders > { 
	public: 
		WEBOTS_NXT_encoders_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_encoders >(wbd, kWEBOTS_NXT_encoders_v, false) {} 
	};

	///Class that contains data from cameta channels of  WEBOTS trough a bridge
        class WEBOTS_NXT_camera_t: public generic_whiteboard_object<class WEBOTS_NXT_camera > { 
	public: 
		WEBOTS_NXT_camera_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_camera >(wbd, kWEBOTS_NXT_camera_v, false) {} 
	};

	///Class that contains boolean for checking if motion walks is running in  WEBOTS trough a bridge
        class WEBOTS_NXT_walk_isRunning_t: public generic_whiteboard_object<class WEBOTS_NXT_walk_isRunning > { 
	public: 
		WEBOTS_NXT_walk_isRunning_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_walk_isRunning >(wbd, kWEBOTS_NXT_walk_isRunning_v, false) {} 
	};

	///Class for dead reckoning walks in  WEBOTS trough a bridge
        class WEBOTS_NXT_deadReakoning_walk_t: public generic_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk > { 
	public: 
		WEBOTS_NXT_deadReakoning_walk_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk >(wbd, kWEBOTS_NXT_deadReakoning_walk_v, false) {} 
	};

	///Class for commands followign a line in  WEBOTS trough a bridge
        class WEBOTS_NXT_colorLine_walk_t: public generic_whiteboard_object<class WEBOTS_NXT_colorLine_walk > { 
	public: 
		WEBOTS_NXT_colorLine_walk_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_colorLine_walk >(wbd, kWEBOTS_NXT_colorLine_walk_v, false) {} 
	};

	///Class for walks on a grid of colored lines for WEBOTS trough a bridge
        class WEBOTS_NXT_gridMotions_t: public generic_whiteboard_object<class WEBOTS_NXT_gridMotions > { 
	public: 
		WEBOTS_NXT_gridMotions_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_gridMotions >(wbd, kWEBOTS_NXT_gridMotions_v, false) {} 
	};

	///Class that reports the ball that vision sees.
        class VisionBall_t: public generic_whiteboard_object<class VisionBall > { 
	public: 
		VisionBall_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionBall >(wbd, kVisionBall_v, false) {} 
	};

	///Class that reports the goals that vision sees.
        class VisionGoals_t: public generic_whiteboard_object<class VisionGoals > { 
	public: 
		VisionGoals_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionGoals >(wbd, kVisionGoals_v, false) {} 
	};

	///Class to report Walk Data.
        class WalkData_t: public generic_whiteboard_object<class WalkData > { 
	public: 
		WalkData_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WalkData >(wbd, kWalkData_v, false) {} 
	};

	///Class for sending teleoperation commands
        class TeleoperationControlStatus_t: public generic_whiteboard_object<class TeleoperationControlStatus > { 
	public: 
		TeleoperationControlStatus_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class TeleoperationControlStatus >(wbd, kTeleoperationControlStatus_v, false) {} 
	};

	/// "Integer indication which remote whiteboard teleoperation instructions are on"
        class TeleoperationConnection_t: public generic_whiteboard_object<int > { 
	public: 
		TeleoperationConnection_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kTeleoperationConnection_v, false) {}
		TeleoperationConnection_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kTeleoperationConnection_v, wbd, false) {} 
	};

	/// "ID number being used to broadcast udp whiteboard"
        class UDPWBNumber_t: public generic_whiteboard_object<int > { 
	public: 
		UDPWBNumber_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kUDPWBNumber_v, false) {}
		UDPWBNumber_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kUDPWBNumber_v, wbd, false) {} 
	};

	///Class that contains data from 2 rouch sensors in an NXT bumper by the bridge
        class WEBOTS_NXT_bumper_t: public generic_whiteboard_object<class WEBOTS_NXT_bumper > { 
	public: 
		WEBOTS_NXT_bumper_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_bumper >(wbd, kWEBOTS_NXT_bumper_v, false) {} 
	};

	///Class that will define actuators for the Diferential motor bridge
        class WEBOTS_NXT_vector_bridge_t: public generic_whiteboard_object<class WEBOTS_NXT_vector_bridge > { 
	public: 
		WEBOTS_NXT_vector_bridge_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_vector_bridge >(wbd, kWEBOTS_NXT_vector_bridge_v, false) {} 
	};

}

#pragma clang diagnostic pop

#endif                          
