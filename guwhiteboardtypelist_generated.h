/**                                                                     
 *  /file guwhiteboardtypelist_generated.h                              
 *                                                                      
 *  Created by Carl Lusty in 2013.                                      
 *  Copyright (c) 2013-2015 Carl Lusty and Rene Hexel                   
 *  All rights reserved.                                                
 */                                                                     
                                                                        
                                                                        
#ifndef GUWHITEBOARD_TYPELIST_H_                                        
#define GUWHITEBOARD_TYPELIST_H_                                        
                                                                        
#include "gugenericwhiteboardobject.h"                                
                                                                        
#pragma clang diagnostic push                                           
#pragma clang diagnostic ignored "-Wpadded"                           
                                                                        
                                                                        
//Generated on: Thu Feb  4 13:14:24 2016
//Generated by user: user

namespace guWhiteboard                                                  
{                                                                       
                                                                        
extern "C"                                                            
{                                                                       
#include "guwhiteboardtypelist_c_generated.h"                         
}                                                                       
                                                                        
	/** WB Ptr Class: Print @brief print to stdout */ 
        class Print_t: public generic_whiteboard_object<std::string > { 
	public: 
		/** Constructor: Print */ 
		Print_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kPrint_v, true) {}
		/** Constructor: Print */ 
		Print_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kPrint_v, wbd, true) {} 
	};

	/** WB Ptr Class: Say @brief speech output message */ 
        class Say_t: public generic_whiteboard_object<std::string > { 
	public: 
		/** Constructor: Say */ 
		Say_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kSay_v, true) {}
		/** Constructor: Say */ 
		Say_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kSay_v, wbd, true) {} 
	};

	/** WB Ptr Class: Speech @brief debug speech message */ 
        class Speech_t: public generic_whiteboard_object<std::string > { 
	public: 
		/** Constructor: Speech */ 
		Speech_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kSpeech_v, true) {}
		/** Constructor: Speech */ 
		Speech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kSpeech_v, wbd, true) {} 
	};

	/** WB Ptr Class: QSay @brief speech output message (queued) */ 
        class QSay_t: public generic_whiteboard_object<std::string > { 
	public: 
		/** Constructor: QSay */ 
		QSay_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kQSay_v, true) {}
		/** Constructor: QSay */ 
		QSay_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kQSay_v, wbd, true) {} 
	};

	/** WB Ptr Class: QSpeech @brief debug speech message (queued) */ 
        class QSpeech_t: public generic_whiteboard_object<std::string > { 
	public: 
		/** Constructor: QSpeech */ 
		QSpeech_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kQSpeech_v, true) {}
		/** Constructor: QSpeech */ 
		QSpeech_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kQSpeech_v, wbd, true) {} 
	};

	/** WB Ptr Class: SpeechOutput @brief toggle, treat speech messages as silent output unless this is turned on */ 
        class SpeechOutput_t: public generic_whiteboard_object<bool > { 
	public: 
		/** Constructor: SpeechOutput */ 
		SpeechOutput_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kSpeechOutput_v, false) {}
		/** Constructor: SpeechOutput */ 
		SpeechOutput_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kSpeechOutput_v, wbd, false) {} 
	};

	/** WB Ptr Class: GCGameState @brief game state as posted by the game controller state machine */ 

        class GCGameState_t: public generic_whiteboard_object<class GCGameState > { 
	public: 
		/** Constructor: GCGameState */ 
		GCGameState_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class GCGameState >(wbd, kGCGameState_v, false) {} 
	};

	/** WB Ptr Class: WALK_Command @brief Class used to control the walk engine (UNSW) */ 

        class WALK_Command_t: public generic_whiteboard_object<class WALK_ControlStatus > { 
	public: 
		/** Constructor: WALK_Command */ 
		WALK_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WALK_ControlStatus >(wbd, kWALK_Command_v, false) {} 
	};

	/** WB Ptr Class: WALK_Status @brief Class used to check the status of the walk engine (UNSW) */ 

        class WALK_Status_t: public generic_whiteboard_object<class WALK_ControlStatus > { 
	public: 
		/** Constructor: WALK_Status */ 
		WALK_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WALK_ControlStatus >(wbd, kWALK_Status_v, false) {} 
	};

	/** WB Ptr Class: MOTION_Commands @brief WB interface for sending motion commands */ 

        class MOTION_Commands_t: public generic_whiteboard_object<class MOTION_Commands > { 
	public: 
		/** Constructor: MOTION_Commands */ 
		MOTION_Commands_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class MOTION_Commands >(wbd, kMOTION_Commands_v, false) {} 
	};

	/** WB Ptr Class: MOTION_Status @brief WB interface for checking the status of commands sent */ 

        class MOTION_Status_t: public generic_whiteboard_object<class MOTION_Status > { 
	public: 
		/** Constructor: MOTION_Status */ 
		MOTION_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class MOTION_Status >(wbd, kMOTION_Status_v, false) {} 
	};

	/** WB Ptr Class: HAL_HeadTarget @brief Used to alter the head position via the DCM */ 

        class HAL_HeadTarget_t: public generic_whiteboard_object<class HAL_HeadTarget > { 
	public: 
		/** Constructor: HAL_HeadTarget */ 
		HAL_HeadTarget_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class HAL_HeadTarget >(wbd, kHAL_HeadTarget_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_FootSensors @brief Posts the sensor information for the feet via the DCM loop (read only) */ 

        class SENSORS_FootSensors_t: public generic_whiteboard_object<class SENSORS_FootSensors > { 
	public: 
		/** Constructor: SENSORS_FootSensors */ 
		SENSORS_FootSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_FootSensors >(wbd, kSENSORS_FootSensors_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_BodySensors @brief Posts the sensor information for the body via the DCM loop (read only) */ 

        class SENSORS_BodySensors_t: public generic_whiteboard_object<class SENSORS_BodySensors > { 
	public: 
		/** Constructor: SENSORS_BodySensors */ 
		SENSORS_BodySensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_BodySensors >(wbd, kSENSORS_BodySensors_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_LedsSensors @brief Posts the current LEDs info, can be modified. (read/write) */ 

        class SENSORS_LedsSensors_t: public generic_whiteboard_object<class SENSORS_LedsSensors > { 
	public: 
		/** Constructor: SENSORS_LedsSensors */ 
		SENSORS_LedsSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LedsSensors >(wbd, kSENSORS_LedsSensors_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_LegJointTemps @brief Posts the temperature of the leg joints via the DCM loop (read only) */ 

        class SENSORS_LegJointTemps_t: public generic_whiteboard_object<class SENSORS_LegJointTemps > { 
	public: 
		/** Constructor: SENSORS_LegJointTemps */ 
		SENSORS_LegJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LegJointTemps >(wbd, kSENSORS_LegJointTemps_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_TorsoJointTemps @brief Posts the temperature of the torso joints via the DCM loop (read only) */ 

        class SENSORS_TorsoJointTemps_t: public generic_whiteboard_object<class SENSORS_TorsoJointTemps > { 
	public: 
		/** Constructor: SENSORS_TorsoJointTemps */ 
		SENSORS_TorsoJointTemps_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_TorsoJointTemps >(wbd, kSENSORS_TorsoJointTemps_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_LegJointSensors @brief Posts the joint angles of the legs via the DCM loop (read only) */ 

        class SENSORS_LegJointSensors_t: public generic_whiteboard_object<class SENSORS_LegJointSensors > { 
	public: 
		/** Constructor: SENSORS_LegJointSensors */ 
		SENSORS_LegJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_LegJointSensors >(wbd, kSENSORS_LegJointSensors_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_TorsoJointSensors @brief Posts the joint angles of the torso via the DCM loop (read only) */ 

        class SENSORS_TorsoJointSensors_t: public generic_whiteboard_object<class SENSORS_TorsoJointSensors > { 
	public: 
		/** Constructor: SENSORS_TorsoJointSensors */ 
		SENSORS_TorsoJointSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_TorsoJointSensors >(wbd, kSENSORS_TorsoJointSensors_v, false) {} 
	};

	/** WB Ptr Class: SENSORS_SonarSensors @brief Posts the sonar readings via the DCM loop (read only) */ 

        class SENSORS_SonarSensors_t: public generic_whiteboard_object<class SENSORS_SonarSensors > { 
	public: 
		/** Constructor: SENSORS_SonarSensors */ 
		SENSORS_SonarSensors_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SENSORS_SonarSensors >(wbd, kSENSORS_SonarSensors_v, false) {} 
	};

	/** WB Ptr Class: FSM_Control @brief Suspend, Resume, or Restart a finite state machine (clfsm) */ 

        class FSM_Control_t: public generic_whiteboard_object<class FSMControlStatus > { 
	public: 
		/** Constructor: FSM_Control */ 
		FSM_Control_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMControlStatus >(wbd, kFSM_Control_v, true) {} 
	};

	/** WB Ptr Class: FSM_Status @brief Current status indicating the suspended state of all FSMs.  The highest bit that is always set is the number of machines plus one. */ 

        class FSM_Status_t: public generic_whiteboard_object<class FSMControlStatus > { 
	public: 
		/** Constructor: FSM_Status */ 
		FSM_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMControlStatus >(wbd, kFSM_Status_v, true) {} 
	};

	/** WB Ptr Class: FSM_Names @brief Request or return the names of the currently loaded FSMs.  End of list is denoted by an empty string.  Requests need to put an empty string into the first FSM name; */ 

        class FSM_Names_t: public generic_whiteboard_object<class FSMNames > { 
	public: 
		/** Constructor: FSM_Names */ 
		FSM_Names_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMNames >(wbd, kFSM_Names_v, true) {} 
	};

	/** WB Ptr Class: FilteredGoalSighting @brief Class that contains the Kalman filtered goal objects after sighting from vision */ 

        class FilteredGoalSighting_t: public generic_whiteboard_object<class FilteredArrayOneDimObjects > { 
	public: 
		/** Constructor: FilteredGoalSighting */ 
		FilteredGoalSighting_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FilteredArrayOneDimObjects >(wbd, kFilteredGoalSighting_v, false) {} 
	};

	/** WB Ptr Class: NAO_State @brief Stores the orientation of the robot as well as the chest button status (more to come). */ 

        class NAO_State_t: public generic_whiteboard_object<class NAO_State > { 
	public: 
		/** Constructor: NAO_State */ 
		NAO_State_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NAO_State >(wbd, kNAO_State_v, false) {} 
	};

	/** WB Ptr Class: UDPRN @brief game state notfication from the UDP receiver. */ 

        class UDPRN_t: public generic_whiteboard_object<class GCGameState > { 
	public: 
		/** Constructor: UDPRN */ 
		UDPRN_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class GCGameState >(wbd, kUDPRN_v, false) {} 
	};

	/** WB Ptr Class: PlayerNumber @brief what player number is this robot wearing at RoboCup in its back, retrieved from data/playernumber and posted by the UDPreceiver */ 
        class PlayerNumber_t: public generic_whiteboard_object<int > { 
	public: 
		/** Constructor: PlayerNumber */ 
		PlayerNumber_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kPlayerNumber_v, false) {}
		/** Constructor: PlayerNumber */ 
		PlayerNumber_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kPlayerNumber_v, wbd, false) {} 
	};

	/** WB Ptr Class: ManuallyPenalized @brief what player number is this robot wearing at RoboCup in its back whn manually penalized, from GameController FSM sent to the UDPreceiver to forward to the JAVA referee */ 
        class ManuallyPenalized_t: public generic_whiteboard_object<int > { 
	public: 
		/** Constructor: ManuallyPenalized */ 
		ManuallyPenalized_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kManuallyPenalized_v, false) {}
		/** Constructor: ManuallyPenalized */ 
		ManuallyPenalized_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kManuallyPenalized_v, wbd, false) {} 
	};

	/** WB Ptr Class: Vision_Control @brief control various attributes of the vision pipeline. */ 

        class Vision_Control_t: public generic_whiteboard_object<class VisionControlStatus > { 
	public: 
		/** Constructor: Vision_Control */ 
		Vision_Control_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionControlStatus >(wbd, kVision_Control_v, false) {} 
	};

	/** WB Ptr Class: Vision_Status @brief message sent by vision that contains the current status of */ 

        class Vision_Status_t: public generic_whiteboard_object<class VisionControlStatus > { 
	public: 
		/** Constructor: Vision_Status */ 
		Vision_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionControlStatus >(wbd, kVision_Status_v, false) {} 
	};

	/** WB Ptr Class: FFTStatus @brief stereo channel RMS and list of dominant frequencies from FFT */ 

        class FFTStatus_t: public generic_whiteboard_object<class FFTStatus > { 
	public: 
		/** Constructor: FFTStatus */ 
		FFTStatus_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FFTStatus >(wbd, kFFTStatus_v, false) {} 
	};

	/** WB Ptr Class: FSOsighting @brief Class that contains the Karman filtered  SONAR objects after a sighting */ 

        class FSOsighting_t: public generic_whiteboard_object<class FilteredArrayOneDimSonar > { 
	public: 
		/** Constructor: FSOsighting */ 
		FSOsighting_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FilteredArrayOneDimSonar >(wbd, kFSOsighting_v, false) {} 
	};

	/** WB Ptr Class: TopParticles @brief Class that contains the top particles for possible robot positions */ 

        class TopParticles_t: public generic_whiteboard_object<class TopParticles > { 
	public: 
		/** Constructor: TopParticles */ 
		TopParticles_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class TopParticles >(wbd, kTopParticles_v, false) {} 
	};

	/** WB Ptr Class: FilteredBallSighting @brief Class that contains the Kalman filtered top and bottom ball objects after sighting from vision */ 

        class FilteredBallSighting_t: public generic_whiteboard_object<class FilteredArrayOneDimBall > { 
	public: 
		/** Constructor: FilteredBallSighting */ 
		FilteredBallSighting_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FilteredArrayOneDimBall >(wbd, kFilteredBallSighting_v, false) {} 
	};

	/** WB Ptr Class: PF_ControlStatus_Modes @brief what to post in the whiteboard to cause the Particle Filetr to reset, but running has no effect, it is the PF response */ 
        class PF_ControlStatus_Modes_t: public generic_whiteboard_object<int > { 
	public: 
		/** Constructor: PF_ControlStatus_Modes */ 
		PF_ControlStatus_Modes_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kPF_ControlStatus_Modes_v, false) {}
		/** Constructor: PF_ControlStatus_Modes */ 
		PF_ControlStatus_Modes_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kPF_ControlStatus_Modes_v, wbd, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_bridge @brief WIP Class that contains a command for WEBOTS or NXt trough a bridge */ 

        class WEBOTS_NXT_bridge_t: public generic_whiteboard_object<class WEBOTS_NXT_bridge > { 
	public: 
		/** Constructor: WEBOTS_NXT_bridge */ 
		WEBOTS_NXT_bridge_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_bridge >(wbd, kWEBOTS_NXT_bridge_v, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_encoders @brief Class that contains data from encoders all for WEBOTS or NXt trough a bridge */ 

        class WEBOTS_NXT_encoders_t: public generic_whiteboard_object<class WEBOTS_NXT_encoders > { 
	public: 
		/** Constructor: WEBOTS_NXT_encoders */ 
		WEBOTS_NXT_encoders_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_encoders >(wbd, kWEBOTS_NXT_encoders_v, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_camera @brief Class that contains data from cameta channels of  WEBOTS trough a bridge */ 

        class WEBOTS_NXT_camera_t: public generic_whiteboard_object<class WEBOTS_NXT_camera > { 
	public: 
		/** Constructor: WEBOTS_NXT_camera */ 
		WEBOTS_NXT_camera_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_camera >(wbd, kWEBOTS_NXT_camera_v, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_walk_isRunning @brief Class that contains boolean for checking if motion walks is running in  WEBOTS trough a bridge */ 

        class WEBOTS_NXT_walk_isRunning_t: public generic_whiteboard_object<class WEBOTS_NXT_walk_isRunning > { 
	public: 
		/** Constructor: WEBOTS_NXT_walk_isRunning */ 
		WEBOTS_NXT_walk_isRunning_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_walk_isRunning >(wbd, kWEBOTS_NXT_walk_isRunning_v, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_deadReakoning_walk @brief Class for dead reckoning walks in  WEBOTS trough a bridge */ 

        class WEBOTS_NXT_deadReakoning_walk_t: public generic_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk > { 
	public: 
		/** Constructor: WEBOTS_NXT_deadReakoning_walk */ 
		WEBOTS_NXT_deadReakoning_walk_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk >(wbd, kWEBOTS_NXT_deadReakoning_walk_v, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_colorLine_walk @brief Class for commands followign a line in  WEBOTS trough a bridge */ 

        class WEBOTS_NXT_colorLine_walk_t: public generic_whiteboard_object<class WEBOTS_NXT_colorLine_walk > { 
	public: 
		/** Constructor: WEBOTS_NXT_colorLine_walk */ 
		WEBOTS_NXT_colorLine_walk_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_colorLine_walk >(wbd, kWEBOTS_NXT_colorLine_walk_v, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_gridMotions @brief Class for walks on a grid of colored lines for WEBOTS trough a bridge */ 

        class WEBOTS_NXT_gridMotions_t: public generic_whiteboard_object<class WEBOTS_NXT_gridMotions > { 
	public: 
		/** Constructor: WEBOTS_NXT_gridMotions */ 
		WEBOTS_NXT_gridMotions_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_gridMotions >(wbd, kWEBOTS_NXT_gridMotions_v, false) {} 
	};

	/** WB Ptr Class: VisionBall @brief Class that reports the ball that vision sees. */ 

        class VisionBall_t: public generic_whiteboard_object<class VisionBall > { 
	public: 
		/** Constructor: VisionBall */ 
		VisionBall_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionBall >(wbd, kVisionBall_v, false) {} 
	};

	/** WB Ptr Class: VisionGoals @brief Class that reports the goals that vision sees. */ 

        class VisionGoals_t: public generic_whiteboard_object<class VisionGoals > { 
	public: 
		/** Constructor: VisionGoals */ 
		VisionGoals_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionGoals >(wbd, kVisionGoals_v, false) {} 
	};

	/** WB Ptr Class: WalkData @brief Class to report Walk Data. */ 

        class WalkData_t: public generic_whiteboard_object<class WalkData > { 
	public: 
		/** Constructor: WalkData */ 
		WalkData_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WalkData >(wbd, kWalkData_v, false) {} 
	};

	/** WB Ptr Class: TeleoperationControlStatus @brief Class for sending teleoperation commands */ 

        class TeleoperationControlStatus_t: public generic_whiteboard_object<class TeleoperationControlStatus > { 
	public: 
		/** Constructor: TeleoperationControlStatus */ 
		TeleoperationControlStatus_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class TeleoperationControlStatus >(wbd, kTeleoperationControlStatus_v, false) {} 
	};

	/** WB Ptr Class: TeleoperationConnection @brief "Integer indication which remote whiteboard teleoperation instructions are on" */ 
        class TeleoperationConnection_t: public generic_whiteboard_object<int > { 
	public: 
		/** Constructor: TeleoperationConnection */ 
		TeleoperationConnection_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kTeleoperationConnection_v, false) {}
		/** Constructor: TeleoperationConnection */ 
		TeleoperationConnection_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kTeleoperationConnection_v, wbd, false) {} 
	};

	/** WB Ptr Class: UDPWBNumber @brief "ID number being used to broadcast udp whiteboard" */ 
        class UDPWBNumber_t: public generic_whiteboard_object<int > { 
	public: 
		/** Constructor: UDPWBNumber */ 
		UDPWBNumber_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kUDPWBNumber_v, false) {}
		/** Constructor: UDPWBNumber */ 
		UDPWBNumber_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kUDPWBNumber_v, wbd, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_bumper @brief Class that contains data from 2 rouch sensors in an NXT bumper by the bridge */ 

        class WEBOTS_NXT_bumper_t: public generic_whiteboard_object<class WEBOTS_NXT_bumper > { 
	public: 
		/** Constructor: WEBOTS_NXT_bumper */ 
		WEBOTS_NXT_bumper_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_bumper >(wbd, kWEBOTS_NXT_bumper_v, false) {} 
	};

	/** WB Ptr Class: WEBOTS_NXT_vector_bridge @brief Class that will define actuators for the Diferential motor bridge */ 

        class WEBOTS_NXT_vector_bridge_t: public generic_whiteboard_object<class WEBOTS_NXT_vector_bridge > { 
	public: 
		/** Constructor: WEBOTS_NXT_vector_bridge */ 
		WEBOTS_NXT_vector_bridge_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WEBOTS_NXT_vector_bridge >(wbd, kWEBOTS_NXT_vector_bridge_v, false) {} 
	};

	/** WB Ptr Class: VisionLines @brief Class that reports the lines that vision sees. */ 

        class VisionLines_t: public generic_whiteboard_object<class VisionLines > { 
	public: 
		/** Constructor: VisionLines */ 
		VisionLines_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class VisionLines >(wbd, kVisionLines_v, false) {} 
	};

	/** WB Ptr Class: DifferentialRobotStatus @brief Class that reads differential robot status */ 

        class DifferentialRobotStatus_t: public generic_whiteboard_object<class DifferentialRobotControlStatus > { 
	public: 
		/** Constructor: DifferentialRobotStatus */ 
		DifferentialRobotStatus_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class DifferentialRobotControlStatus >(wbd, kDifferentialRobotStatus_v, false) {} 
	};

	/** WB Ptr Class: DifferentialRobotControl @brief Class that sends commands to the robot from the whiteboard */ 

        class DifferentialRobotControl_t: public generic_whiteboard_object<class DifferentialRobotControlStatus > { 
	public: 
		/** Constructor: DifferentialRobotControl */ 
		DifferentialRobotControl_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class DifferentialRobotControlStatus >(wbd, kDifferentialRobotControl_v, false) {} 
	};

	/** WB Ptr Class: XEyesPos @brief Just a hook for an xeyes interface */ 

        class XEyesPos_t: public generic_whiteboard_object<class Point2D > { 
	public: 
		/** Constructor: XEyesPos */ 
		XEyesPos_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Point2D >(wbd, kXEyesPos_v, true) {} 
	};

	/** WB Ptr Class: VisionFace @brief Face seen by Vision */ 
        class VisionFace_t: public generic_whiteboard_object<std::vector<int> > { 
	public: 
		/** Constructor: VisionFace */ 
		VisionFace_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::vector<int> >(wbd, kVisionFace_v, true) {}
		/** Constructor: VisionFace */ 
		VisionFace_t(std::vector<int> value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::vector<int> >(value, kVisionFace_v, wbd, true) {} 
	};

	/** WB Ptr Class: Draw @brief Used by the half made GUDraw module in posix */ 
        class Draw_t: public generic_whiteboard_object<std::string > { 
	public: 
		/** Constructor: Draw */ 
		Draw_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(wbd, kDraw_v, true) {}
		/** Constructor: Draw */ 
		Draw_t(std::string value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<std::string >(value, kDraw_v, wbd, true) {} 
	};

	/** WB Ptr Class: FSM_States @brief Idempotent Message publicising the state -about to be executed- (0-254) of up-to the first 128 machines (0-127).  State -INVALDMACHINE- (255) is posted for MachineIDs that are not currently loaded. */ 

        class FSM_States_t: public generic_whiteboard_object<class FSMState > { 
	public: 
		/** Constructor: FSM_States */ 
		FSM_States_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class FSMState >(wbd, kFSM_States_v, true) {} 
	};

	/** WB Ptr Class: Giraff_Interface_Status @brief Serial interface for the main motor and sensor board of the giraff */ 

        class Giraff_Interface_Status_t: public generic_whiteboard_object<class Giraff_MainSerialInterface > { 
	public: 
		/** Constructor: Giraff_Interface_Status */ 
		Giraff_Interface_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Giraff_MainSerialInterface >(wbd, kGiraff_Interface_Status_v, false) {} 
	};

	/** WB Ptr Class: Giraff_Interface_Command @brief Serial interface for the main motor and sensor board of the giraff */ 

        class Giraff_Interface_Command_t: public generic_whiteboard_object<class Giraff_MainSerialInterface > { 
	public: 
		/** Constructor: Giraff_Interface_Command */ 
		Giraff_Interface_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Giraff_MainSerialInterface >(wbd, kGiraff_Interface_Command_v, false) {} 
	};

	/** WB Ptr Class: NXT_Status @brief Contains sensor data as well as motor encoder data from the objects attached to an NXT */ 

        class NXT_Status_t: public generic_whiteboard_object<class NXT_Interface > { 
	public: 
		/** Constructor: NXT_Status */ 
		NXT_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NXT_Interface >(wbd, kNXT_Status_v, false) {} 
	};

	/** WB Ptr Class: NXT_Command @brief Can issue commands to set the motors of an NXT and reset the encoders */ 

        class NXT_Command_t: public generic_whiteboard_object<class NXT_Interface > { 
	public: 
		/** Constructor: NXT_Command */ 
		NXT_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NXT_Interface >(wbd, kNXT_Command_v, false) {} 
	};

	/** WB Ptr Class: APM_Status @brief Contains sensor data from an APM */ 

        class APM_Status_t: public generic_whiteboard_object<class APM_Interface > { 
	public: 
		/** Constructor: APM_Status */ 
		APM_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class APM_Interface >(wbd, kAPM_Status_v, false) {} 
	};

	/** WB Ptr Class: APM_Command @brief Can issue commands to an APM */ 

        class APM_Command_t: public generic_whiteboard_object<class APM_Interface > { 
	public: 
		/** Constructor: APM_Command */ 
		APM_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class APM_Interface >(wbd, kAPM_Command_v, false) {} 
	};

	/** WB Ptr Class: WALK2014_Command @brief Class used to control the 2014 walk engine (UNSW) */ 

        class WALK2014_Command_t: public generic_whiteboard_object<class WALK2014_ControlStatus > { 
	public: 
		/** Constructor: WALK2014_Command */ 
		WALK2014_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WALK2014_ControlStatus >(wbd, kWALK2014_Command_v, false) {} 
	};

	/** WB Ptr Class: WALK2014_Status @brief Class used to check the status of the 2014 walk engine (UNSW) */ 

        class WALK2014_Status_t: public generic_whiteboard_object<class WALK2014_ControlStatus > { 
	public: 
		/** Constructor: WALK2014_Status */ 
		WALK2014_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class WALK2014_ControlStatus >(wbd, kWALK2014_Status_v, false) {} 
	};

	/** WB Ptr Class: CBall @brief Status Message for the color of the ball */ 
        class CBall_t: public generic_whiteboard_object<int > { 
	public: 
		/** Constructor: CBall */ 
		CBall_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(wbd, kCBall_v, true) {}
		/** Constructor: CBall */ 
		CBall_t(int value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<int >(value, kCBall_v, wbd, true) {} 
	};

	/** WB Ptr Class: OculusPrime_Command @brief Class used to control the Oculus Prime movements, controls etc. */ 

        class OculusPrime_Command_t: public generic_whiteboard_object<class OculusPrimeInterface > { 
	public: 
		/** Constructor: OculusPrime_Command */ 
		OculusPrime_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class OculusPrimeInterface >(wbd, kOculusPrime_Command_v, false) {} 
	};

	/** WB Ptr Class: Input3D @brief for 3d input devices such as the leap or a joystick */ 

        class Input3D_t: public generic_whiteboard_object<class Input3D > { 
	public: 
		/** Constructor: Input3D */ 
		Input3D_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Input3D >(wbd, kInput3D_v, false) {} 
	};

	/** WB Ptr Class: Oculus_Prime_Command @brief Serial interface for the main motor and sensor board of the oculus prime */ 

        class Oculus_Prime_Command_t: public generic_whiteboard_object<class Oculus_PrimeSerialInterface > { 
	public: 
		/** Constructor: Oculus_Prime_Command */ 
		Oculus_Prime_Command_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Oculus_PrimeSerialInterface >(wbd, kOculus_Prime_Command_v, false) {} 
	};

	/** WB Ptr Class: IOPins @brief Arduino-style I/O pins */ 

        class IOPins_t: public generic_whiteboard_object<class IOPins > { 
	public: 
		/** Constructor: IOPins */ 
		IOPins_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class IOPins >(wbd, kIOPins_v, false) {} 
	};

	/** WB Ptr Class: NXT_Two_Touch_Status @brief Class that reads NXT's two buttons */ 

        class NXT_Two_Touch_Status_t: public generic_whiteboard_object<class NXT_Two_Touch_Status > { 
	public: 
		/** Constructor: NXT_Two_Touch_Status */ 
		NXT_Two_Touch_Status_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NXT_Two_Touch_Status >(wbd, kNXT_Two_Touch_Status_v, false) {} 
	};

	/** WB Ptr Class: NXT_Sound_Control @brief Class that produces NXT's sounds */ 

        class NXT_Sound_Control_t: public generic_whiteboard_object<class NXT_Sound_Control > { 
	public: 
		/** Constructor: NXT_Sound_Control */ 
		NXT_Sound_Control_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NXT_Sound_Control >(wbd, kNXT_Sound_Control_v, false) {} 
	};

	/** WB Ptr Class: NXT_Lights_Control @brief Class that places power in NXT's for lights */ 

        class NXT_Lights_Control_t: public generic_whiteboard_object<class NXT_Lights_Control > { 
	public: 
		/** Constructor: NXT_Lights_Control */ 
		NXT_Lights_Control_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class NXT_Lights_Control >(wbd, kNXT_Lights_Control_v, false) {} 
	};

	/** WB Ptr Class: Clocks @brief Class for keeping track of time */ 

        class Clocks_t: public generic_whiteboard_object<class Clocks > { 
	public: 
		/** Constructor: Clocks */ 
		Clocks_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Clocks >(wbd, kClocks_v, false) {} 
	};

	/** WB Ptr Class: Channels @brief UPPAAL-Style synchronisation channels */ 

        class Channels_t: public generic_whiteboard_object<class Channels > { 
	public: 
		/** Constructor: Channels */ 
		Channels_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class Channels >(wbd, kChannels_v, false) {} 
	};

	/** WB Ptr Class: SwitchSubsumption @brief class:SwitchSubsumption, nonatomic, SwitchSubsumption, "SwitchSubsumption" */ 

        class SwitchSubsumption_t: public generic_whiteboard_object<class SwitchSubsumption > { 
	public: 
		/** Constructor: SwitchSubsumption */ 
		SwitchSubsumption_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class SwitchSubsumption >(wbd, kSwitchSubsumption_v, false) {} 
	};

	/** WB Ptr Class: TotoDoingMotion @brief class:TotoDoingMotion, nonatomic, TotoDoingMotion, "TotoDoingMotion" */ 

        class TotoDoingMotion_t: public generic_whiteboard_object<class TotoDoingMotion > { 
	public: 
		/** Constructor: TotoDoingMotion */ 
		TotoDoingMotion_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class TotoDoingMotion >(wbd, kTotoDoingMotion_v, false) {} 
	};

	/** WB Ptr Class: Count @brief class:wb_count, nonatomic, Count, "A Simple Integer" */ 

        class Count_t: public generic_whiteboard_object<class wb_count > { 
	public: 
		/** Constructor: Count */ 
		Count_t(gu_simple_whiteboard_descriptor *wbd = NULL) : generic_whiteboard_object<class wb_count >(wbd, kCount_v, false) {} 
	};

	/** WB Ptr Class: GreenEWon @brief status of the EWgreen light */ 
        class GreenEWon_t: public generic_whiteboard_object<bool > { 
	public: 
		/** Constructor: GreenEWon */ 
		GreenEWon_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kGreenEWon_v, false) {}
		/** Constructor: GreenEWon */ 
		GreenEWon_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kGreenEWon_v, wbd, false) {} 
	};

	/** WB Ptr Class: WarnEW @brief status of the recommendaiton of the EW light */ 
        class WarnEW_t: public generic_whiteboard_object<bool > { 
	public: 
		/** Constructor: WarnEW */ 
		WarnEW_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kWarnEW_v, false) {}
		/** Constructor: WarnEW */ 
		WarnEW_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kWarnEW_v, wbd, false) {} 
	};

	/** WB Ptr Class: TimeGTthirty @brief status of the timer with respect to 30 */ 
        class TimeGTthirty_t: public generic_whiteboard_object<bool > { 
	public: 
		/** Constructor: TimeGTthirty */ 
		TimeGTthirty_t(gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(wbd, kTimeGTthirty_v, false) {}
		/** Constructor: TimeGTthirty */ 
		TimeGTthirty_t(bool value, gu_simple_whiteboard_descriptor *wbd = NULL): generic_whiteboard_object<bool >(value, kTimeGTthirty_v, wbd, false) {} 
	};

}

#pragma clang diagnostic pop

#endif
