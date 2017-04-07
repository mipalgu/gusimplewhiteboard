/**                                                                     
 *  /file wb_hal_armtarget.h
 *                                                                      
 *  Created by Dimitri Joukoff 2016.
 *  Copyright (c) 2016 Dimitri Joukoff
 *  All rights reserved.                                                
 */                                                                     

#ifndef wb_hal_armtarget_h
#define wb_hal_armtarget_h

#include <gu_util.h>

#define LEFT_ARM 0
#define RIGHT_ARM 1

/** Issued Commands that exceed the movement limits given below
 *  are treated as NO-OP.  I.e. the pose of the joint is not altered
 *  by the command.
 */

/** Limits expressed in degrees */
#define SHOULDER_PITCH_LIMIT_DOWN_DEG 119.5f
#define SHOULDER_PITCH_LIMIT_UP_DEG -SHOULDER_PITCH_LIMIT_DOWN_DEG

#define LEFT_SHOULDER_ROLL_OUT_DEG 76.0f
#define LEFT_SHOULDER_ROLL_IN_DEG -18.0f
#define RIGHT_SHOULDER_ROLL_OUT_DEG -LEFT_SHOULDER_ROLL_OUT_DEG
#define RIGHT_SHOULDER_ROLL_IN_DEG -LEFT_SHOULDER_ROLL_IN_DEG

#define LEFT_ELBOW_ROLL_STRAIGHT_DEG -2.0f
#define LEFT_ELBOW_ROLL_BENT_DEG -88.5f
#define RIGHT_ELBOW_ROLL_STRAIGHT_DEG -LEFT_ELBOW_ROLL_STRAIGHT_DEG
#define RIGHT_ELBOW_ROLL_BENT_DEG -LEFT_ELBOW_ROLL_BENT_DEG

#define LEFT_ELBOW_YAW_RIGHT_DEG 119.5f
#define LEFT_ELBOW_YAW_LEFT_DEG -LEFT_ELBOW_YAW_RIGHT_DEG
#define RIGHT_ELBOW_YAW_RIGHT_DEG LEFT_ELBOW_YAW_RIGHT_DEG
#define RIGHT_ELBOW_YAW_LEFT_DEG -LEFT_ELBOW_YAW_RIGHT_DEG

#define LEFT_WRIST_YAW_RIGHT_DEG 104.5f
#define LEFT_WRIST_YAW_LEFT_DEG -LEFT_WRIST_YAW_RIGHT_DEG
#define RIGHT_WRIST_YAW_RIGHT_DEG LEFT_WRIST_YAW_RIGHT_DEG
#define RIGHT_WRIST_YAW_LEFT_DEG -LEFT_WRIST_YAW_RIGHT_DEG

/** Limits expressed in radians */
#define SHOULDER_PITCH_LIMIT_DOWN_RAD 2.0857f
#define SHOULDER_PITCH_LIMIT_UP_RAD -SHOULDER_PITCH_LIMIT_DOWN_RAD

#define LEFT_SHOULDER_ROLL_OUT_RAD 1.3265f
#define LEFT_SHOULDER_ROLL_IN_RAD -0.3142f
#define RIGHT_SHOULDER_ROLL_OUT_RAD -LEFT_SHOULDER_ROLL_OUT_RAD
#define RIGHT_SHOULDER_ROLL_IN_RAD -LEFT_SHOULDER_ROLL_IN_RAD

#define LEFT_ELBOW_ROLL_STRAIGHT_RAD -0.0349f
#define LEFT_ELBOW_ROLL_BENT_RAD -1.5446f
#define RIGHT_ELBOW_ROLL_STRAIGHT_RAD -LEFT_ELBOW_ROLL_STRAIGHT_RAD
#define RIGHT_ELBOW_ROLL_BENT_RAD -LEFT_ELBOW_ROLL_BENT_RAD

#define LEFT_ELBOW_YAW_RIGHT_RAD 2.0857f
#define LEFT_ELBOW_YAW_LEFT_RAD -LEFT_ELBOW_YAW_RIGHT_RAD
#define RIGHT_ELBOW_YAW_RIGHT_RAD LEFT_ELBOW_YAW_RIGHT_RAD
#define RIGHT_ELBOW_YAW_LEFT_RAD -LEFT_ELBOW_YAW_RIGHT_RAD

#define LEFT_WRIST_YAW_RIGHT_RAD 1.8238f
#define LEFT_WRIST_YAW_LEFT_RAD -LEFT_WRIST_YAW_RIGHT_RAD
#define RIGHT_WRIST_YAW_RIGHT_RAD LEFT_WRIST_YAW_RIGHT_RAD
#define RIGHT_WRIST_YAW_LEFT_RAD -LEFT_WRIST_YAW_RIGHT_RAD


/**
 * HAL_ArmTarget c struct
 *
 * The struct is designed around a single arm,
 * allowing independent control of the NAO's arms.
 *
 * **** IMPORTANT NOTE: ****
 * This class only provides for movement limit detection.
 * There is no built in collision detection.
 * Care must be taken to ensure the forearm does not collide with the
 * chest, thigh, or the other forearm.
 *
 */
struct wb_hal_armtarget
{
    /** target arm number */
    PROPERTY(uint8_t, target_arm)

    /** target shoulder pitch angle in radians */
    PROPERTY(float, target_shoulderpitch)

    /** target shoulder roll angle in radians */
    PROPERTY(float, target_shoulderroll)

    /** target elbow roll angle in radians */
    PROPERTY(float, target_elbowroll)

    /** target elbow yaw angle in radians */
    PROPERTY(float, target_elbowyaw)

    /** target wrist yaw in radians */
    PROPERTY(float, target_wristyaw)

    /** target shoulder pitch stiffness */
    PROPERTY(float, target_shoulderpitchstiffness)
    
    /** target shoulder roll stiffness */
    PROPERTY(float, target_shoulderrollstiffness)
    
    /** target elbow roll stiffness */
    PROPERTY(float, target_elbowrollstiffness)
    
    /** target elbow yaw stiffness */
    PROPERTY(float, target_elbowyawstiffness)
    
    /** target wrist yaw stiffness */
    PROPERTY(float, target_wristyawstiffness)
    
    /** The elapsed time in which the movement should be completed.
     *  Stored in micro seconds.
     */
    PROPERTY(int, target_movement_time) 

    /** Should the current motion be stopped (if setting)
     *    or
     *  has the arm stopped (if a status message)
     */
    BIT_PROPERTY(arm_stopped)

    /** Should the command be processed again by the motion module?
     *  When changes are made, this bit is set to true.
     *  Motion sets this back to false when the command has been processed. */
    BIT_PROPERTY(arm_cmd_mask)


#ifdef __cplusplus
    /**
    * constructor for the stuct of HAL_ArmTarget. this is the data that is placed on the Whiteboard
    * @param target_shoulderpitch desired shoulder pitch
    * @param target_shoulderroll  desired shoulder roll
    * @param target_elbowroll     desired elbow roll
    * @param target_elbowyaw      desired elbow yaw
    * @param target_wristyaw      desired wrist yaw
    * @param target_movement_time time to take
    * @param arm_stopped          should the arm stop
    */       
    wb_hal_armtarget(uint8_t target_arm = LEFT_ARM,
                     float target_shoulderpitch = 0,
                     float target_shoulderroll = 0,
                     float target_elbowroll = 0,
                     float target_elbowyaw = 0,
                     float target_wristyaw = 0,
                     float target_shoulderpitchstiffness = 0,
                     float target_shoulderrollstiffness = 0,
                     float target_elbowrollstiffness = 0,
                     float target_elbowyawstiffness = 0,
                     float target_wristyawstiffness = 0,
                     int target_movement_time = 1000000,
                     bool arm_stopped = true)
    {
        set_target_arm(target_arm);
        set_target_shoulderpitch(target_shoulderpitch);
        set_target_shoulderroll(target_shoulderroll);
        set_target_elbowroll(target_elbowroll);
        set_target_elbowyaw(target_elbowyaw);
        set_target_wristyaw(target_wristyaw);
        set_target_shoulderpitchstiffness(target_shoulderpitchstiffness);
        set_target_shoulderrollstiffness(target_shoulderrollstiffness);
        set_target_elbowrollstiffness(target_elbowrollstiffness);
        set_target_elbowyawstiffness(target_elbowyawstiffness);
        set_target_wristyawstiffness(target_wristyawstiffness);
        set_target_movement_time(target_movement_time);
        set_arm_stopped(arm_stopped);
        set_arm_cmd_mask(false);
    }
    
    bool operator == (const wb_hal_armtarget &rhs) {
        if (
            target_arm() == rhs.target_arm() &&
            target_shoulderpitch() == rhs.target_shoulderpitch() &&
            target_shoulderroll() == rhs.target_shoulderroll() &&
            target_elbowroll() == rhs.target_elbowroll() &&
            target_elbowyaw() == rhs.target_elbowyaw() &&
            target_wristyaw() == rhs.target_wristyaw() &&
            target_shoulderpitchstiffness() == rhs.target_shoulderpitchstiffness() &&
            target_shoulderrollstiffness() == rhs.target_shoulderrollstiffness() &&
            target_elbowrollstiffness() == rhs.target_elbowrollstiffness() &&
            target_elbowyawstiffness() == rhs.target_elbowyawstiffness() &&
            target_wristyawstiffness() == rhs.target_wristyawstiffness() &&
            target_movement_time() == rhs.target_movement_time() &&
            arm_stopped() == rhs.arm_stopped() &&
            arm_cmd_mask() == rhs.arm_cmd_mask()
            )
        {
            return true;
        } else {
            return false;
        }
    }

#endif
};

#endif //wb_hal_armtarget_h