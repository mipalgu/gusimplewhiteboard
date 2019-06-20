/*
 * file wb_hal_arm_target.h
 *
 * This file was generated by classgenerator from hal_arm_target.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Dimitri Joukoff. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgement:
 *
 *        This product includes software developed by Dimitri Joukoff.
 *
 * 4. Neither the name of the author nor the names of contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * -----------------------------------------------------------------------
 * This program is free software; you can redistribute it and/or
 * modify it under the above terms or under the terms of the GNU
 * General Public License as published by the Free Software Foundation;
 * either version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see http://www.gnu.org/licenses/
 * or write to the Free Software Foundation, Inc., 51 Franklin Street,
 * Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#ifndef wb_hal_arm_target_h
#define wb_hal_arm_target_h

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#ifdef __linux
# ifndef _POSIX_SOURCE
#  define _POSIX_SOURCE 200112L
# endif
#endif
#ifndef _XOPEN_SOURCE
# define _XOPEN_SOURCE 700
#endif
#ifdef __APPLE__
# ifndef _DARWIN_C_SOURCE
#  define _DARWIN_C_SOURCE 200112L
# endif
# ifndef __DARWIN_C_LEVEL
#  define __DARWIN_C_LEVEL 200112L
# endif
#endif

#pragma clang diagnostic pop

#include <gu_util.h>
#include <stdint.h>

#ifdef __cplusplus
#define LEFT_ARM (static_cast<uint8_t>(0))
#define RIGHT_ARM (static_cast<uint8_t>(1))
#else
#define LEFT_ARM ((uint8_t)0)
#define RIGHT_ARM ((uint8_t)1)
#endif

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

#define HAL_ARM_TARGET_GENERATED 
#define HAL_ARM_TARGET_C_STRUCT wb_hal_arm_target 
#define HAL_ARM_TARGET_NUMBER_OF_VARIABLES 23

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define HAL_ARM_TARGET_DESC_BUFFER_SIZE 685
#define HAL_ARM_TARGET_TO_STRING_BUFFER_SIZE 201
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Classgenerator version
 */
struct wb_hal_arm_target
{

    /**
     * The elapsed time, in mSec, in which the movement should be completed. Status Message: Absolute time when the current action will complete. (Thus this is an int32_t.)
     */
    PROPERTY(int32_t, target_movement_time)

    /**
     * target shoulder pitch angle in 10ths of degrees
     */
    PROPERTY(int16_t, target_shoulderpitch)

    /**
     * target shoulder roll angle angle in 10ths of degrees
     */
    PROPERTY(int16_t, target_shoulderroll)

    /**
     * target elbow roll angle in 10ths of degrees
     */
    PROPERTY(int16_t, target_elbowroll)

    /**
     * target elbow yaw angle in 10ths of degrees
     */
    PROPERTY(int16_t, target_elbowyaw)

    /**
     * target wrist yaw angle in 10ths of degrees
     */
    PROPERTY(int16_t, target_wristyaw)

    /**
     * target arm number: This property is used strictly for accounting purposes when the struct is stored within an array and the robot has numerous  arms.
     */
    PROPERTY(uint8_t, target_arm)

    /**
     * target hand grasper opening as a percentage: 0   gripper will be clasped shut, 100 gripper will be fully openned
     */
    PROPERTY(uint8_t, target_hand)

    /**
     * target shoulder pitch stiffness as a percentage
     */
    PROPERTY(uint8_t, target_shoulderpitchstiffness)

    /**
     * target shoulder roll stiffness as a percentage
     */
    PROPERTY(uint8_t, target_shoulderrollstiffness)

    /**
     * target elbow roll stiffness as a percentage
     */
    PROPERTY(uint8_t, target_elbowrollstiffness)

    /**
     * target elbow yaw stiffness as a percentage
     */
    PROPERTY(uint8_t, target_elbowyawstiffness)

    /**
     * target wrist yaw stiffness as a percentage
     */
    PROPERTY(uint8_t, target_wristyawstiffness)

    /**
     * target hand grasper stiffness as a percentage
     */
    PROPERTY(uint8_t, target_handstiffness)

    /**
     * target arm's pliability when in Passive Mode. When the arm is passive, this value reduces the update frequency, thus making the arm more resistant to external forces. Use of values from 0 to 10 is recommended. When set to zero (0), the Arm, when fully extended out, will fall under its own weight. Higher values stiffen the arm and reduce responsiveness, the movement will become stepped.
     */
    PROPERTY(uint8_t, target_pliability)

    /**
     * Is the shoulderpitch Active (true[DEFAULT]) or Passive (false). Active :  The robot's DCM will prevent movement of the arm from the requested pose in accordance to the joint stiffness. (This is the normal behaviour of the robot.)  Passive:  Once the requested pose is achieved, the DCM will automatically update the requested pose according to deviations in the joints. The effect of this is that the robot's arm will be susceptible to gravity (and will fall slowly over time) as well as to externally applied forces (allowing it to be manipulated).
     */
    BIT_PROPERTY(target_shoulderpitch_active)

    /**
     * Is the shoulderroll Active (true[DEFAULT]) or Passive (false)
     */
    BIT_PROPERTY(target_shoulderroll_active)

    /**
     * Is the elbowroll Active (true[DEFAULT]) or Passive (false)
     */
    BIT_PROPERTY(target_elbowroll_active)

    /**
     * Is the elbowyaw Active (true[DEFAULT]) or Passive (false)
     */
    BIT_PROPERTY(target_elbowyaw_active)

    /**
     * Is the wrist Active (true[DEFAULT]) or Passive (false)
     */
    BIT_PROPERTY(target_wrist_active)

    /**
     * Is the hand Active (true[DEFAULT]) or Passive (false)
     */
    BIT_PROPERTY(target_hand_active)

    /**
     * Control Message: Not used. Status Message: Naoqiinterface reports that the goal location of all joints has been reached (within specified tolerance).
     */
    BIT_PROPERTY(target_arm_at_goal)

    /**
     * Control Message: Stop the arm at its current location. Status Message: Indicates if the last control message issued a STOP command.
     */
    BIT_PROPERTY(target_arm_stop)

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_hal_arm_target_description(const struct wb_hal_arm_target* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_hal_arm_target_to_string(const struct wb_hal_arm_target* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_hal_arm_target* wb_hal_arm_target_from_string(struct wb_hal_arm_target* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_hal_arm_target_to_network_serialised(const struct wb_hal_arm_target *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_hal_arm_target_from_network_serialised(const char *src, struct wb_hal_arm_target *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_hal_arm_target_h