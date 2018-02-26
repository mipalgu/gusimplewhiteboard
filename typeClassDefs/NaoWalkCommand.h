/*
 * file NaoWalkCommand.h
 *
 * This file was generated by classgenerator from naoWalkCommand.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 03:10, 26/02/2018.
 * Copyright © 2018 Carl Lusty. All rights reserved.
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

#ifndef NaoWalkCommand_DEFINED
#define NaoWalkCommand_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include "gu_util.h"
#include "wb_nao_walk_command.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_nao_walk_command`.
     */
    class NaoWalkCommand: public wb_nao_walk_command {

    public:

        /**
         * Create a new `NaoWalkCommand`.
         */
        NaoWalkCommand(bool walkEngineOn = false, int16_t forward = 0, int16_t left = 0, int8_t turn = 0, bool exactStepsRequested = false, uint8_t speed = 100, uint8_t odometryResetCounter = 0, bool isFast = false, bool kickWithLeftFoot = true, bool useShuffle = false, bool leftArmLimp = true, bool rightArmLimp = true, uint8_t power = 0, uint8_t bend = 0) {
            set_walkEngineOn(walkEngineOn);
            set_forward(forward);
            set_left(left);
            set_turn(turn);
            set_exactStepsRequested(exactStepsRequested);
            set_speed(speed);
            set_odometryResetCounter(odometryResetCounter);
            set_isFast(isFast);
            set_kickWithLeftFoot(kickWithLeftFoot);
            set_useShuffle(useShuffle);
            set_leftArmLimp(leftArmLimp);
            set_rightArmLimp(rightArmLimp);
            set_power(power);
            set_bend(bend);
        }

        /**
         * Copy Constructor.
         */
        NaoWalkCommand(const NaoWalkCommand &other): wb_nao_walk_command() {
            set_walkEngineOn(other.walkEngineOn());
            set_forward(other.forward());
            set_left(other.left());
            set_turn(other.turn());
            set_exactStepsRequested(other.exactStepsRequested());
            set_speed(other.speed());
            set_odometryResetCounter(other.odometryResetCounter());
            set_isFast(other.isFast());
            set_kickWithLeftFoot(other.kickWithLeftFoot());
            set_useShuffle(other.useShuffle());
            set_leftArmLimp(other.leftArmLimp());
            set_rightArmLimp(other.rightArmLimp());
            set_power(other.power());
            set_bend(other.bend());
        }

        /**
         * Copy Assignment Operator.
         */
        NaoWalkCommand &operator = (const NaoWalkCommand &other) {
            set_walkEngineOn(other.walkEngineOn());
            set_forward(other.forward());
            set_left(other.left());
            set_turn(other.turn());
            set_exactStepsRequested(other.exactStepsRequested());
            set_speed(other.speed());
            set_odometryResetCounter(other.odometryResetCounter());
            set_isFast(other.isFast());
            set_kickWithLeftFoot(other.kickWithLeftFoot());
            set_useShuffle(other.useShuffle());
            set_leftArmLimp(other.leftArmLimp());
            set_rightArmLimp(other.rightArmLimp());
            set_power(other.power());
            set_bend(other.bend());
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        NaoWalkCommand(const std::string &str) { wb_nao_walk_command_from_string(this, str.c_str()); }

        std::string description() {
#ifdef USE_WB_NAO_WALK_COMMAND_C_CONVERSION
            char buffer[NAOWALKCOMMAND_DESC_BUFFER_SIZE];
            wb_nao_walk_command_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "walkEngineOn=" << (this->walkEngineOn() ? "true" : "false");
            ss << ", ";
            ss << "forward=" << static_cast<signed>(this->forward());
            ss << ", ";
            ss << "left=" << static_cast<signed>(this->left());
            ss << ", ";
            ss << "turn=" << static_cast<signed>(this->turn());
            ss << ", ";
            ss << "exactStepsRequested=" << (this->exactStepsRequested() ? "true" : "false");
            ss << ", ";
            ss << "speed=" << static_cast<unsigned>(this->speed());
            ss << ", ";
            ss << "odometryResetCounter=" << static_cast<unsigned>(this->odometryResetCounter());
            ss << ", ";
            ss << "isFast=" << (this->isFast() ? "true" : "false");
            ss << ", ";
            ss << "kickWithLeftFoot=" << (this->kickWithLeftFoot() ? "true" : "false");
            ss << ", ";
            ss << "useShuffle=" << (this->useShuffle() ? "true" : "false");
            ss << ", ";
            ss << "leftArmLimp=" << (this->leftArmLimp() ? "true" : "false");
            ss << ", ";
            ss << "rightArmLimp=" << (this->rightArmLimp() ? "true" : "false");
            ss << ", ";
            ss << "power=" << static_cast<unsigned>(this->power());
            ss << ", ";
            ss << "bend=" << static_cast<unsigned>(this->bend());
            return ss.str();
#endif /// USE_WB_NAO_WALK_COMMAND_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_NAO_WALK_COMMAND_C_CONVERSION
            char buffer[NAOWALKCOMMAND_TO_STRING_BUFFER_SIZE];
            wb_nao_walk_command_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << (this->walkEngineOn() ? "true" : "false");
            ss << ", ";
            ss << static_cast<signed>(this->forward());
            ss << ", ";
            ss << static_cast<signed>(this->left());
            ss << ", ";
            ss << static_cast<signed>(this->turn());
            ss << ", ";
            ss << (this->exactStepsRequested() ? "true" : "false");
            ss << ", ";
            ss << static_cast<unsigned>(this->speed());
            ss << ", ";
            ss << static_cast<unsigned>(this->odometryResetCounter());
            ss << ", ";
            ss << (this->isFast() ? "true" : "false");
            ss << ", ";
            ss << (this->kickWithLeftFoot() ? "true" : "false");
            ss << ", ";
            ss << (this->useShuffle() ? "true" : "false");
            ss << ", ";
            ss << (this->leftArmLimp() ? "true" : "false");
            ss << ", ";
            ss << (this->rightArmLimp() ? "true" : "false");
            ss << ", ";
            ss << static_cast<unsigned>(this->power());
            ss << ", ";
            ss << static_cast<unsigned>(this->bend());
            return ss.str();
#endif /// USE_WB_NAO_WALK_COMMAND_C_CONVERSION
        }

        void from_string(const std::string &str) {
#ifdef USE_WB_NAOWALKCOMMAND_C_CONVERSION
            wb_nao_walk_command_from_string(this, str.c_str());
#else
            char var[255];
            unsigned long walkEngineOn_index = str.find("walkEngineOn=");
            if (walkEngineOn_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(walkEngineOn_index, str.length()).c_str(), "walkEngineOn = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_walkEngineOn(value.compare("true") == 0 || value.compare("1") == 0 ? true : false);
                }
            }
            unsigned long forward_index = str.find(" forward=");
            if (forward_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(forward_index + 1, str.length()).c_str(), "forward = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_forward(static_cast<int16_t>(atoi(value.c_str())));
                }
            }
            unsigned long left_index = str.find(" left=");
            if (left_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(left_index + 1, str.length()).c_str(), "left = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_left(static_cast<int16_t>(atoi(value.c_str())));
                }
            }
            unsigned long turn_index = str.find(" turn=");
            if (turn_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(turn_index + 1, str.length()).c_str(), "turn = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_turn(static_cast<int8_t>(atoi(value.c_str())));
                }
            }
            unsigned long exactStepsRequested_index = str.find(" exactStepsRequested=");
            if (exactStepsRequested_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(exactStepsRequested_index + 1, str.length()).c_str(), "exactStepsRequested = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_exactStepsRequested(value.compare("true") == 0 || value.compare("1") == 0 ? true : false);
                }
            }
            unsigned long speed_index = str.find(" speed=");
            if (speed_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(speed_index + 1, str.length()).c_str(), "speed = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_speed(static_cast<uint8_t>(atoi(value.c_str())));
                }
            }
            unsigned long odometryResetCounter_index = str.find(" odometryResetCounter=");
            if (odometryResetCounter_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(odometryResetCounter_index + 1, str.length()).c_str(), "odometryResetCounter = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_odometryResetCounter(static_cast<uint8_t>(atoi(value.c_str())));
                }
            }
            unsigned long isFast_index = str.find(" isFast=");
            if (isFast_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(isFast_index + 1, str.length()).c_str(), "isFast = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_isFast(value.compare("true") == 0 || value.compare("1") == 0 ? true : false);
                }
            }
            unsigned long kickWithLeftFoot_index = str.find(" kickWithLeftFoot=");
            if (kickWithLeftFoot_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(kickWithLeftFoot_index + 1, str.length()).c_str(), "kickWithLeftFoot = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_kickWithLeftFoot(value.compare("true") == 0 || value.compare("1") == 0 ? true : false);
                }
            }
            unsigned long useShuffle_index = str.find(" useShuffle=");
            if (useShuffle_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(useShuffle_index + 1, str.length()).c_str(), "useShuffle = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_useShuffle(value.compare("true") == 0 || value.compare("1") == 0 ? true : false);
                }
            }
            unsigned long leftArmLimp_index = str.find(" leftArmLimp=");
            if (leftArmLimp_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(leftArmLimp_index + 1, str.length()).c_str(), "leftArmLimp = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_leftArmLimp(value.compare("true") == 0 || value.compare("1") == 0 ? true : false);
                }
            }
            unsigned long rightArmLimp_index = str.find(" rightArmLimp=");
            if (rightArmLimp_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(rightArmLimp_index + 1, str.length()).c_str(), "rightArmLimp = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_rightArmLimp(value.compare("true") == 0 || value.compare("1") == 0 ? true : false);
                }
            }
            unsigned long power_index = str.find(" power=");
            if (power_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(power_index + 1, str.length()).c_str(), "power = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_power(static_cast<uint8_t>(atoi(value.c_str())));
                }
            }
            unsigned long bend_index = str.find(" bend=");
            if (bend_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                if (sscanf(str.substr(bend_index + 1, str.length()).c_str(), "bend = %[^,]", var) == 1) {
                    std::string value = std::string(var);
                    set_bend(static_cast<uint8_t>(atoi(value.c_str())));
                }
            }
#endif /// USE_WB_NAOWALKCOMMAND_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

        public:

        /**
         * Convenience function to make the nao walk.
         * @param forward see struct documentation.
         * @param left see struct documentation.
         * @param turn see struct documentation.
         * @return A NaoWalkCommand instance
         */
        static NaoWalkCommand walk(int16_t forward, int16_t left, int8_t turn) {
            NaoWalkCommand cmd = NaoWalkCommand();
            cmd.set_walkEngineOn(true);
            cmd.set_forward(forward);
            cmd.set_left(left);
            cmd.set_turn(turn);
            cmd.set_bend(1);
            return cmd;
        }

        /**
         * Convenience function to make the nao walk, with precise step distances. There is no speed buildup with this method, it uses a consistent step size and speed. This is good for small accurate movements, like lining up a kick.
         * @param forward see struct documentation.
         * @param left see struct documentation.
         * @param turn see struct documentation.
         * @return A NaoWalkCommand instance
         */
        static NaoWalkCommand walkPrecisely(int16_t forward, int16_t left, int8_t turn) {
            NaoWalkCommand cmd = walk(forward, left, turn);
            cmd.set_exactStepsRequested(true);
            return cmd;
        }

        /**
         * Convenience function to make the nao stop walking. The robot will slow down and stop, remaining in the 'walking' position (slightly crouched). 
         * @return A NaoWalkCommand instance
         */
        static NaoWalkCommand stop() {
            NaoWalkCommand cmd = NaoWalkCommand();
            cmd.set_walkEngineOn(true);
            cmd.set_forward(0);
            cmd.set_left(0);
            cmd.set_turn(0);
            cmd.set_bend(1);
            return cmd;
        }

        /**
         * Convenience function to make the nao stand in the 'walk' position (slightly crouched), ready to immediately start walking again. This is handy for returning from the STANDING position, reached via 'standWithMinimalStiffness'.
         * @return A NaoWalkCommand instance
         */
        static NaoWalkCommand standWithStiffness() {
            NaoWalkCommand cmd = stop();
            cmd.set_walkEngineOn(true);
            cmd.set_bend(1);
            return cmd;
        }

        /**
         * Convenience function to make the nao stand in the 'STANDING' position, upright with minimal stiffness. Good for longer pauses in movement, to save on battery and motor wear. You should always return to the CROUCH position before giving up control of the DCM with a 'disconnectWalk'. If you don't return to that position, other motion activities like the MotionPlayer may 'jerk' when activated. You do not need to return to the CROUCH position when you issue walk commands, it will be done automatically.
         * @return A NaoWalkCommand instance
         */
        static NaoWalkCommand standWithMinimalStiffness() {
            NaoWalkCommand cmd = stop();
            cmd.set_walkEngineOn(true);
            cmd.set_bend(0);
            return cmd;
        }

        /**
         * Convenience function to disconnect the walk engine from the DCM. This must be done in order to give control of the joints to another module, like the Motion Player. You should return to the CROUCH position via 'standWithStiffness' or 'stop' before doing this, to ensure a smooth motion control transition.
         * @return A NaoWalkCommand instance
         */
        static NaoWalkCommand disconnectWalk() {
            NaoWalkCommand cmd = NaoWalkCommand();
            cmd.set_walkEngineOn(false);
            return cmd;
        }
    };

} /// namespace guWhiteboard
#endif /// NaoWalkCommand_DEFINED
