/*
 * file wb_nao_walk_command.h
 *
 * This file was generated by classgenerator from naoWalkCommand.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 11:38, 27/10/2017.
 * Copyright © 2017 Carl Lusty. All rights reserved.
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
 *        This product includes software developed by Carl Lusty.
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

#ifndef wb_nao_walk_command_h
#define wb_nao_walk_command_h

#include "gu_util.h"

/*
extern struct wb_nao_walk_command;

wb_nao_walk_command NaoWalkCommand_walk(int16_t forward, int16_t left, int8_t turn) {
    wb_nao_walk_command cmd;
    cmd.walkEngineOn = true;
    cmd.forward = forward;
    cmd.left = left;
    cmd.turn = turn;
    return cmd;
}

wb_nao_walk_command NaoWalkCommand_walkPrecisely(int16_t forward, int16_t left, int8_t turn) {
    wb_nao_walk_command cmd = NaoWalkCommand_walk(forward, left, turn);
    cmd.exactStepsRequested = true;
    return cmd;
}

wb_nao_walk_command NaoWalkCommand_stop() {
    wb_nao_walk_command cmd;
    cmd.walkEngineOn = true;
    cmd.forward = 0;
    cmd.left = 0;
    cmd.turn = 0;
    return cmd;
}

wb_nao_walk_command NaoWalkCommand_standWithStiffness() {
    wb_nao_walk_command cmd = NaoWalkCommand_stop();
    cmd.walkEngineOn = true;
    cmd.bend = 1
    return cmd;
}

wb_nao_walk_command NaoWalkCommand_standWithMinimalStiffness() {
    wb_nao_walk_command cmd = NaoWalkCommand_stop()
    cmd.walkEngineOn = true;
    cmd.bend = 0
    return cmd;
}

wb_nao_walk_command NaoWalkCommand_disconnectWalk() {
    wb_nao_walk_command cmd;
    cmd.walkEngineOn = false;
    return cmd;
}

wb_nao_walk_command NaoWalkCommand_resetOdometry() {
    wb_nao_walk_command cmd;
    cmd.odometryResetCounter++;
    return cmd;
}
*/

#define NAOWALKCOMMAND_NUMBER_OF_VARIABLES 14

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define NAOWALKCOMMAND_DESC_BUFFER_SIZE 239
#define NAOWALKCOMMAND_TO_STRING_BUFFER_SIZE 90
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Control message for sending commands to the walk engine created by UNSW.
 * LICENSE:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/blob/master/LICENSE
 * Source:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/blob/master/robot/motion/generator/Walk2014Generator.cpp
 * Some of their documentation:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/wiki/Motion#walk2014-generator
 */
struct wb_nao_walk_command
{

    /**
     * connects the dcm callbacks. Essentially turning the walk on. When enabled, the walk engine controls all joint values except the head pitch and yaw.
     */
    PROPERTY(bool, walkEngineOn)

    /**
     * [-300 - 300] step-size(mm) per second, limited to +/- 300mm/step
     */
    PROPERTY(int16_t, forward)

    /**
     * [-200 - 200] step-size(mm) per second, limited to +/- 200mm/step
     */
    PROPERTY(int16_t, left)

    /**
     * [-85 - 85] step-size(mm) per second, limited to +/- 85deg/step
     */
    PROPERTY(int8_t, turn)

    /**
     * No ratcheting, no speed 'buildup', just full step sizes. This is good for exact movements, like walk 23cm forward for a kick.
     */
    PROPERTY(bool, exactStepsRequested)

    /**
     * [0 - 100] modifier for forward etc.. when using exactStepsRequested = true
     */
    PROPERTY(uint8_t, speed)

    /**
     * Odometry will reset any time this is changed or incremented.
     */
    PROPERTY(uint8_t, odometryResetCounter)

    /**
     * for kicks. True results in a 'Jab'/rapid kick.
     */
    PROPERTY(bool, isFast)

    /**
     * which foot to use for kicking
     */
    PROPERTY(bool, kickWithLeftFoot)

    /**
     * limits the step height so the robot 'shuffles' instead of taking larger steps. Good for walking near other robots or small obstacles that could trip the robot, if it tried to step onto it.
     */
    PROPERTY(bool, useShuffle)

    /**
     * lower stiffness in the arms when walking, allows the arm to move a little more. This is for robot collisions to allow the arm to absorb some of the collision instead of rigidly transferring the force to the whole body.
     */
    PROPERTY(bool, leftArmLimp)

    /**
     * lower stiffness in the arms when walking, allows the arm to move a little more. This is for robot collisions to allow the arm to absorb some of the collision instead of rigidly transferring the force to the whole body.
     */
    PROPERTY(bool, rightArmLimp)

    /**
     * [0 - 100] stiffness, auto set to minimum needed values. Advanced pararm! don't alter this without knowledge of exactly what it does.
     */
    PROPERTY(uint8_t, power)

    /**
     * [0 - 1] controls what the robot does when stopped, 0 == STAND and lower stiffness, 1 == stay in READY, crouched and ready to walk immediately.
     */
    PROPERTY(uint8_t, bend)

};

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Convert to a description string.
 */
const char* wb_nao_walk_command_description(const struct wb_nao_walk_command* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_nao_walk_command_to_string(const struct wb_nao_walk_command* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_nao_walk_command* wb_nao_walk_command_from_string(struct wb_nao_walk_command* self, const char* str);

#ifdef __cplusplus
}
#endif

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

#endif /// wb_nao_walk_command_h
