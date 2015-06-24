/**                                                                     
 *  /file guwhiteboardtypelist_c_generated.h                            
 *                                                                      
 *  Created by Carl Lusty in 2013.                                      
 *  Copyright (c) 2013 Carl Lusty                                       
 *  All rights reserved.                                                
 */                                                                     


#ifndef GUWHITEBOARD_TYPELIST_C_H_
#define GUWHITEBOARD_TYPELIST_C_H_


#define WANT_WB_STRINGS

#define GSW_NUM_TYPES_DEFINED 68

#if GSW_NUM_TYPES_DEFINED > GSW_NUM_RESERVED
#error *** Error: gusimplewhiteboard: The number of defined types exceeds the total number of reserved types allowed. Increase GSW_NUM_RESERVED to solve this.
#endif
//Generated on: Mon Jun 22 14:46:52 2015
//Generated by user: rh

       /** All the message 'types' for the class based whiteboard */
       typedef enum wb_types      
        {                                                               
                kwb_reserved_SubscribeToAllTypes_v = 0,	///< Global subscription type. Do not add content to this type, it is for global subscriptions only
                kPrint_v = 1,	///< print to stdout
                kSay_v = 2,	///< speech output message
                kSpeech_v = 3,	///< debug speech message
                kQSay_v = 4,	///< speech output message (queued)
                kQSpeech_v = 5,	///< debug speech message (queued)
                kSpeechOutput_v = 6,	///< toggle, treat speech messages as silent output unless this is turned on
                kGCGameState_v = 7,	///< game state as posted by the game controller state machine
                kWALK_Command_v = 8,	///< Class used to control the walk engine (UNSW)
                kWALK_Status_v = 9,	///< Class used to check the status of the walk engine (UNSW)
                kMOTION_Commands_v = 10,	///< WB interface for sending motion commands
                kMOTION_Status_v = 11,	///< WB interface for checking the status of commands sent
                kHAL_HeadTarget_v = 12,	///< Used to alter the head position via the DCM
                kSENSORS_FootSensors_v = 13,	///< Posts the sensor information for the feet via the DCM loop (read only)
                kSENSORS_BodySensors_v = 14,	///< Posts the sensor information for the body via the DCM loop (read only)
                kSENSORS_LedsSensors_v = 15,	///< Posts the current LEDs info, can be modified. (read/write)
                kSENSORS_LegJointTemps_v = 16,	///< Posts the temperature of the leg joints via the DCM loop (read only)
                kSENSORS_TorsoJointTemps_v = 17,	///< Posts the temperature of the torso joints via the DCM loop (read only)
                kSENSORS_LegJointSensors_v = 18,	///< Posts the joint angles of the legs via the DCM loop (read only)
                kSENSORS_TorsoJointSensors_v = 19,	///< Posts the joint angles of the torso via the DCM loop (read only)
                kSENSORS_SonarSensors_v = 20,	///< Posts the sonar readings via the DCM loop (read only)
                kFSM_Control_v = 21,	///< Suspend, Resume, or Restart a finite state machine (clfsm)
                kFSM_Status_v = 22,	///< Current status indicating the suspended state of all FSMs.  The highest bit that is always set is the number of machines plus one.
                kFSM_Names_v = 23,	///< Request or return the names of the currently loaded FSMs.  End of list is denoted by an empty string.  Requests need to put an empty string into the first FSM name;
                kSoloTypeExample_v = 24,	///< This is an example of a type definition that does not generate anything other than a wb type
                kFilteredGoalSighting_v = 25,	///< Class that contains the Kalman filtered goal objects after sighting from vision
                kNAO_State_v = 26,	///< Stores the orientation of the robot as well as the chest button status (more to come).
                kUDPRN_v = 27,	///< game state notfication from the UDP receiver.
                kPlayerNumber_v = 28,	///< what player number is this robot wearing at RoboCup in its back, retrieved from data/playernumber and posted by the UDPreceiver
                kManuallyPenalized_v = 29,	///< what player number is this robot wearing at RoboCup in its back whn manually penalized, from GameController FSM sent to the UDPreceiver to forward to the JAVA referee
                kVision_Control_v = 30,	///< control various attributes of the vision pipeline.
                kVision_Status_v = 31,	///< message sent by vision that contains the current status of
                kFFTStatus_v = 32,	///< stereo channel RMS and list of dominant frequencies from FFT
                kFSOsighting_v = 33,	///< Class that contains the Karman filtered  SONAR objects after a sighting
                kTopParticles_v = 34,	///< Class that contains the top particles for possible robot positions
                kFilteredBallSighting_v = 35,	///< Class that contains the Kalman filtered top and bottom ball objects after sighting from vision
                kPF_ControlStatus_Modes_v = 36,	///< what to post in the whiteboard to cause the Particle Filetr to reset, but running has no effect, it is the PF response
                kWEBOTS_NXT_bridge_v = 37,	///< WIP Class that contains a command for WEBOTS or NXt trough a bridge
                kWEBOTS_NXT_encoders_v = 38,	///< Class that contains data from encoders all for WEBOTS or NXt trough a bridge
                kWEBOTS_NXT_camera_v = 39,	///< Class that contains data from cameta channels of  WEBOTS trough a bridge
                kWEBOTS_NXT_walk_isRunning_v = 40,	///< Class that contains boolean for checking if motion walks is running in  WEBOTS trough a bridge
                kWEBOTS_NXT_deadReakoning_walk_v = 41,	///< Class for dead reckoning walks in  WEBOTS trough a bridge
                kWEBOTS_NXT_colorLine_walk_v = 42,	///< Class for commands followign a line in  WEBOTS trough a bridge
                kWEBOTS_NXT_gridMotions_v = 43,	///< Class for walks on a grid of colored lines for WEBOTS trough a bridge
                kVisionBall_v = 44,	///< Class that reports the ball that vision sees.
                kVisionGoals_v = 45,	///< Class that reports the goals that vision sees.
                kWalkData_v = 46,	///< Class to report Walk Data.
                kTeleoperationControlStatus_v = 47,	///< Class for sending teleoperation commands
                kTeleoperationConnection_v = 48,	///< "Integer indication which remote whiteboard teleoperation instructions are on"
                kUDPWBNumber_v = 49,	///< "ID number being used to broadcast udp whiteboard"
                kWEBOTS_NXT_bumper_v = 50,	///< Class that contains data from 2 rouch sensors in an NXT bumper by the bridge
                kWEBOTS_NXT_vector_bridge_v = 51,	///< Class that will define actuators for the Diferential motor bridge
                kVisionLines_v = 52,	///< Class that reports the lines that vision sees.
                kDifferentialRobotStatus_v = 53,	///< Class that reads differential robot status
                kDifferentialRobotControl_v = 54,	///< Class that sends commands to the robot from the whiteboard
                kXEyesPos_v = 55,	///< Just a hook for an xeyes interface
                kVisionFace_v = 56,	///< Face seen by Vision
                kDraw_v = 57,	///< Used by the half made GUDraw module in posix
                kFSM_States_v = 58,	///< Idempotent Message publicising the state -about to be executed- (0-254) of up-to the first 128 machines (0-127).  State -INVALDMACHINE- (255) is posted for MachineIDs that are not currently loaded.
                kGiraff_Interface_Status_v = 59,	///< Serial interface for the main motor and sensor board of the giraff
                kGiraff_Interface_Command_v = 60,	///< Serial interface for the main motor and sensor board of the giraff
                kNXT_Status_v = 61,	///< Contains sensor data as well as motor encoder data from the objects attached to an NXT
                kNXT_Command_v = 62,	///< Can issue commands to set the motors of an NXT and reset the encoders
                kAPM_Status_v = 63,	///< Contains sensor data from an APM
                kAPM_Command_v = 64,	///< Can issue commands to an APM
                kWALK2014_Command_v = 65,	///< Class used to control the 2014 walk engine (UNSW)
                kWALK2014_Status_v = 66,	///< Class used to check the status of the 2014 walk engine (UNSW)
                kCBall_v = 67	///< Status Message for the color of the ball
        } WBTypes; ///< All the message 'types' for the class based whiteboard 

        extern const char *WBTypes_stringValues[];
#endif
