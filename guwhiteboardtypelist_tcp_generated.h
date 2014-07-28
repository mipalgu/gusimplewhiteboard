/**                                                                    
*  /file guwhiteboardtypelist_tcp_generated.h                          
*                                                                      
*  Created by Carl Lusty in 2013.                                      
*  Copyright (c) 2013 Carl Lusty                                       
*  All rights reserved.                                                
*/                                                                     


#ifndef _GUWHITEBOARD_TCP_TYPELIST_H_                                  
#define _GUWHITEBOARD_TCP_TYPELIST_H_                                  

#include "gugenericwhiteboardobject.h"                                
#include "gutcpinjectionwhiteboardobject.h"                           

#pragma clang diagnostic push                                           
#pragma clang diagnostic ignored "-Wpadded"                           
#pragma clang diagnostic ignored "-Wold-style-cast"                   


//Generated on: Mon Jul 28 18:02:52 2014
//Generated by user: carl

namespace guWhiteboard                                                  
{                                                                       
                                                                        
extern "C"                                                            
{                                                                       
#include "guwhiteboardtypelist_c_generated.h"                         
}                                                                       
                                                                        
	/// print to stdout
        class Print_iTCP: public injection_whiteboard_object<std::string > { 
	public: 
		Print_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(hostname, kPrint_v, is_async) {}
		Print_iTCP(std::string value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(value, hostname, kPrint_v, is_async) {} 
	};

	/// speech output message
        class Say_iTCP: public injection_whiteboard_object<std::string > { 
	public: 
		Say_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(hostname, kSay_v, is_async) {}
		Say_iTCP(std::string value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(value, hostname, kSay_v, is_async) {} 
	};

	/// debug speech message
        class Speech_iTCP: public injection_whiteboard_object<std::string > { 
	public: 
		Speech_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(hostname, kSpeech_v, is_async) {}
		Speech_iTCP(std::string value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(value, hostname, kSpeech_v, is_async) {} 
	};

	/// speech output message (queued)
        class QSay_iTCP: public injection_whiteboard_object<std::string > { 
	public: 
		QSay_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(hostname, kQSay_v, is_async) {}
		QSay_iTCP(std::string value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(value, hostname, kQSay_v, is_async) {} 
	};

	/// debug speech message (queued)
        class QSpeech_iTCP: public injection_whiteboard_object<std::string > { 
	public: 
		QSpeech_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(hostname, kQSpeech_v, is_async) {}
		QSpeech_iTCP(std::string value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<std::string >(value, hostname, kQSpeech_v, is_async) {} 
	};

	/// toggle, treat speech messages as silent output unless this is turned on
        class SpeechOutput_iTCP: public injection_whiteboard_object<bool > { 
	public: 
		SpeechOutput_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<bool >(hostname, kSpeechOutput_v, is_async) {}
		SpeechOutput_iTCP(bool value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<bool >(value, hostname, kSpeechOutput_v, is_async) {} 
	};

	///game state as posted by the game controller state machine
        class GCGameState_iTCP: public injection_whiteboard_object<class GCGameState > { 
	public: 
		GCGameState_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class GCGameState >(hostname, kGCGameState_v, is_async) {} 
	};

	///Class used to control the walk engine (UNSW)
        class WALK_Command_iTCP: public injection_whiteboard_object<class WALK_ControlStatus > { 
	public: 
		WALK_Command_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WALK_ControlStatus >(hostname, kWALK_Command_v, is_async) {} 
	};

	///Class used to check the status of the walk engine (UNSW)
        class WALK_Status_iTCP: public injection_whiteboard_object<class WALK_ControlStatus > { 
	public: 
		WALK_Status_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WALK_ControlStatus >(hostname, kWALK_Status_v, is_async) {} 
	};

	///WB interface for sending motion commands
        class MOTION_Commands_iTCP: public injection_whiteboard_object<class MOTION_Commands > { 
	public: 
		MOTION_Commands_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class MOTION_Commands >(hostname, kMOTION_Commands_v, is_async) {} 
	};

	///WB interface for checking the status of commands sent
        class MOTION_Status_iTCP: public injection_whiteboard_object<class MOTION_Status > { 
	public: 
		MOTION_Status_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class MOTION_Status >(hostname, kMOTION_Status_v, is_async) {} 
	};

	///Used to alter the head position via the DCM
        class HAL_HeadTarget_iTCP: public injection_whiteboard_object<class HAL_HeadTarget > { 
	public: 
		HAL_HeadTarget_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class HAL_HeadTarget >(hostname, kHAL_HeadTarget_v, is_async) {} 
	};

	///Posts the sensor information for the feet via the DCM loop (read only)
        class SENSORS_FootSensors_iTCP: public injection_whiteboard_object<class SENSORS_FootSensors > { 
	public: 
		SENSORS_FootSensors_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_FootSensors >(hostname, kSENSORS_FootSensors_v, is_async) {} 
	};

	///Posts the sensor information for the body via the DCM loop (read only)
        class SENSORS_BodySensors_iTCP: public injection_whiteboard_object<class SENSORS_BodySensors > { 
	public: 
		SENSORS_BodySensors_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_BodySensors >(hostname, kSENSORS_BodySensors_v, is_async) {} 
	};

	///Posts the current LEDs info, can be modified. (read/write)
        class SENSORS_LedsSensors_iTCP: public injection_whiteboard_object<class SENSORS_LedsSensors > { 
	public: 
		SENSORS_LedsSensors_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_LedsSensors >(hostname, kSENSORS_LedsSensors_v, is_async) {} 
	};

	///Posts the temperature of the leg joints via the DCM loop (read only)
        class SENSORS_LegJointTemps_iTCP: public injection_whiteboard_object<class SENSORS_LegJointTemps > { 
	public: 
		SENSORS_LegJointTemps_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_LegJointTemps >(hostname, kSENSORS_LegJointTemps_v, is_async) {} 
	};

	///Posts the temperature of the torso joints via the DCM loop (read only)
        class SENSORS_TorsoJointTemps_iTCP: public injection_whiteboard_object<class SENSORS_TorsoJointTemps > { 
	public: 
		SENSORS_TorsoJointTemps_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_TorsoJointTemps >(hostname, kSENSORS_TorsoJointTemps_v, is_async) {} 
	};

	///Posts the joint angles of the legs via the DCM loop (read only)
        class SENSORS_LegJointSensors_iTCP: public injection_whiteboard_object<class SENSORS_LegJointSensors > { 
	public: 
		SENSORS_LegJointSensors_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_LegJointSensors >(hostname, kSENSORS_LegJointSensors_v, is_async) {} 
	};

	///Posts the joint angles of the torso via the DCM loop (read only)
        class SENSORS_TorsoJointSensors_iTCP: public injection_whiteboard_object<class SENSORS_TorsoJointSensors > { 
	public: 
		SENSORS_TorsoJointSensors_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_TorsoJointSensors >(hostname, kSENSORS_TorsoJointSensors_v, is_async) {} 
	};

	///Posts the sonar readings via the DCM loop (read only)
        class SENSORS_SonarSensors_iTCP: public injection_whiteboard_object<class SENSORS_SonarSensors > { 
	public: 
		SENSORS_SonarSensors_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class SENSORS_SonarSensors >(hostname, kSENSORS_SonarSensors_v, is_async) {} 
	};

	///Suspend, Resume, or Restart a finite state machine (clfsm)
        class FSM_Control_iTCP: public injection_whiteboard_object<class FSMControlStatus > { 
	public: 
		FSM_Control_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class FSMControlStatus >(hostname, kFSM_Control_v, is_async) {} 
	};

	///Current status indicating the suspended state of all FSMs.  The highest bit that is always set is the number of machines plus one.
        class FSM_Status_iTCP: public injection_whiteboard_object<class FSMControlStatus > { 
	public: 
		FSM_Status_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class FSMControlStatus >(hostname, kFSM_Status_v, is_async) {} 
	};

	///Request or return the names of the currently loaded FSMs.  End of list is denoted by an empty string.  Requests need to put an empty string into the first FSM name;
        class FSM_Names_iTCP: public injection_whiteboard_object<class FSMNames > { 
	public: 
		FSM_Names_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class FSMNames >(hostname, kFSM_Names_v, is_async) {} 
	};

	///Class that contains the Kalman filtered goal objects after sighting from vision
        class FilteredGoalSighting_iTCP: public injection_whiteboard_object<class FilteredArrayOneDimObjects > { 
	public: 
		FilteredGoalSighting_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class FilteredArrayOneDimObjects >(hostname, kFilteredGoalSighting_v, is_async) {} 
	};

	///Stores the orientation of the robot as well as the chest button status (more to come).
        class NAO_State_iTCP: public injection_whiteboard_object<class NAO_State > { 
	public: 
		NAO_State_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class NAO_State >(hostname, kNAO_State_v, is_async) {} 
	};

	///game state notfication from the UDP receiver.
        class UDPRN_iTCP: public injection_whiteboard_object<class GCGameState > { 
	public: 
		UDPRN_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class GCGameState >(hostname, kUDPRN_v, is_async) {} 
	};

	/// what player number is this robot wearing at RoboCup in its back, retrieved from data/playernumber and posted by the UDPreceiver
        class PlayerNumber_iTCP: public injection_whiteboard_object<int > { 
	public: 
		PlayerNumber_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(hostname, kPlayerNumber_v, is_async) {}
		PlayerNumber_iTCP(int value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(value, hostname, kPlayerNumber_v, is_async) {} 
	};

	/// what player number is this robot wearing at RoboCup in its back whn manually penalized, from GameController FSM sent to the UDPreceiver to forward to the JAVA referee
        class ManuallyPenalized_iTCP: public injection_whiteboard_object<int > { 
	public: 
		ManuallyPenalized_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(hostname, kManuallyPenalized_v, is_async) {}
		ManuallyPenalized_iTCP(int value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(value, hostname, kManuallyPenalized_v, is_async) {} 
	};

	///control various attributes of the vision pipeline.
        class Vision_Control_iTCP: public injection_whiteboard_object<class VisionControlStatus > { 
	public: 
		Vision_Control_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class VisionControlStatus >(hostname, kVision_Control_v, is_async) {} 
	};

	///message sent by vision that contains the current status of
        class Vision_Status_iTCP: public injection_whiteboard_object<class VisionControlStatus > { 
	public: 
		Vision_Status_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class VisionControlStatus >(hostname, kVision_Status_v, is_async) {} 
	};

	///stereo channel RMS and list of dominant frequencies from FFT
        class FFTStatus_iTCP: public injection_whiteboard_object<class FFTStatus > { 
	public: 
		FFTStatus_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class FFTStatus >(hostname, kFFTStatus_v, is_async) {} 
	};

	///Class that contains the Karman filtered  SONAR objects after a sighting
        class FSOsighting_iTCP: public injection_whiteboard_object<class FilteredArrayOneDimSonar > { 
	public: 
		FSOsighting_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class FilteredArrayOneDimSonar >(hostname, kFSOsighting_v, is_async) {} 
	};

	///Class that contains the top particles for possible robot positions
        class TopParticles_iTCP: public injection_whiteboard_object<class TopParticles > { 
	public: 
		TopParticles_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class TopParticles >(hostname, kTopParticles_v, is_async) {} 
	};

	///Class that contains the Kalman filtered top and bottom ball objects after sighting from vision
        class FilteredBallSighting_iTCP: public injection_whiteboard_object<class FilteredArrayOneDimBall > { 
	public: 
		FilteredBallSighting_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class FilteredArrayOneDimBall >(hostname, kFilteredBallSighting_v, is_async) {} 
	};

	/// what to post in the whiteboard to cause the Particle Filetr to reset, but running has no effect, it is the PF response
        class PF_ControlStatus_Modes_iTCP: public injection_whiteboard_object<int > { 
	public: 
		PF_ControlStatus_Modes_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(hostname, kPF_ControlStatus_Modes_v, is_async) {}
		PF_ControlStatus_Modes_iTCP(int value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(value, hostname, kPF_ControlStatus_Modes_v, is_async) {} 
	};

	///WIP Class that contains a command for WEBOTS or NXt trough a bridge
        class WEBOTS_NXT_bridge_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_bridge > { 
	public: 
		WEBOTS_NXT_bridge_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_bridge >(hostname, kWEBOTS_NXT_bridge_v, is_async) {} 
	};

	///Class that contains data from encoders all for WEBOTS or NXt trough a bridge
        class WEBOTS_NXT_encoders_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_encoders > { 
	public: 
		WEBOTS_NXT_encoders_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_encoders >(hostname, kWEBOTS_NXT_encoders_v, is_async) {} 
	};

	///Class that contains data from cameta channels of  WEBOTS trough a bridge
        class WEBOTS_NXT_camera_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_camera > { 
	public: 
		WEBOTS_NXT_camera_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_camera >(hostname, kWEBOTS_NXT_camera_v, is_async) {} 
	};

	///Class that contains boolean for checking if motion walks is running in  WEBOTS trough a bridge
        class WEBOTS_NXT_walk_isRunning_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_walk_isRunning > { 
	public: 
		WEBOTS_NXT_walk_isRunning_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_walk_isRunning >(hostname, kWEBOTS_NXT_walk_isRunning_v, is_async) {} 
	};

	///Class for dead reckoning walks in  WEBOTS trough a bridge
        class WEBOTS_NXT_deadReakoning_walk_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk > { 
	public: 
		WEBOTS_NXT_deadReakoning_walk_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_deadReakoning_walk >(hostname, kWEBOTS_NXT_deadReakoning_walk_v, is_async) {} 
	};

	///Class for commands followign a line in  WEBOTS trough a bridge
        class WEBOTS_NXT_colorLine_walk_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_colorLine_walk > { 
	public: 
		WEBOTS_NXT_colorLine_walk_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_colorLine_walk >(hostname, kWEBOTS_NXT_colorLine_walk_v, is_async) {} 
	};

	///Class for walks on a grid of colored lines for WEBOTS trough a bridge
        class WEBOTS_NXT_gridMotions_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_gridMotions > { 
	public: 
		WEBOTS_NXT_gridMotions_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_gridMotions >(hostname, kWEBOTS_NXT_gridMotions_v, is_async) {} 
	};

	///Class that reports the ball that vision sees.
        class VisionBall_iTCP: public injection_whiteboard_object<class VisionBall > { 
	public: 
		VisionBall_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class VisionBall >(hostname, kVisionBall_v, is_async) {} 
	};

	///Class that reports the goals that vision sees.
        class VisionGoals_iTCP: public injection_whiteboard_object<class VisionGoals > { 
	public: 
		VisionGoals_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class VisionGoals >(hostname, kVisionGoals_v, is_async) {} 
	};

	///Class to report Walk Data.
        class WalkData_iTCP: public injection_whiteboard_object<class WalkData > { 
	public: 
		WalkData_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WalkData >(hostname, kWalkData_v, is_async) {} 
	};

	///Class for sending teleoperation commands
        class TeleoperationControlStatus_iTCP: public injection_whiteboard_object<class TeleoperationControlStatus > { 
	public: 
		TeleoperationControlStatus_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class TeleoperationControlStatus >(hostname, kTeleoperationControlStatus_v, is_async) {} 
	};

	/// "Integer indication which remote whiteboard teleoperation instructions are on"
        class TeleoperationConnection_iTCP: public injection_whiteboard_object<int > { 
	public: 
		TeleoperationConnection_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(hostname, kTeleoperationConnection_v, is_async) {}
		TeleoperationConnection_iTCP(int value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(value, hostname, kTeleoperationConnection_v, is_async) {} 
	};

	/// "ID number being used to broadcast udp whiteboard"
        class UDPWBNumber_iTCP: public injection_whiteboard_object<int > { 
	public: 
		UDPWBNumber_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(hostname, kUDPWBNumber_v, is_async) {}
		UDPWBNumber_iTCP(int value, const char *hostname = (const char *)"localhost", bool is_async = true): injection_whiteboard_object<int >(value, hostname, kUDPWBNumber_v, is_async) {} 
	};

	///Class that contains data from 2 rouch sensors in an NXT bumper by the bridge
        class WEBOTS_NXT_bumper_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_bumper > { 
	public: 
		WEBOTS_NXT_bumper_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_bumper >(hostname, kWEBOTS_NXT_bumper_v, is_async) {} 
	};

	///Class that will define actuators for the Diferential motor bridge
        class WEBOTS_NXT_vector_bridge_iTCP: public injection_whiteboard_object<class WEBOTS_NXT_vector_bridge > { 
	public: 
		WEBOTS_NXT_vector_bridge_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class WEBOTS_NXT_vector_bridge >(hostname, kWEBOTS_NXT_vector_bridge_v, is_async) {} 
	};

	///Class that reports the lines that vision sees.
        class VisionLines_iTCP: public injection_whiteboard_object<class VisionLines > { 
	public: 
		VisionLines_iTCP(const char *hostname = (const char *)"localhost", bool is_async = true) : injection_whiteboard_object<class VisionLines >(hostname, kVisionLines_v, is_async) {} 
	};

}

#pragma clang diagnostic pop

#endif                          
