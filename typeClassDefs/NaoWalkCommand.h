/*
 * file NaoWalkCommand.h
 *
 * This file was generated by classgenerator from naoWalkCommand.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Carl Lusty. All rights reserved.
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

#include <gu_util.h>
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
        NaoWalkCommand(bool walkEngineOn = false, int16_t forward = 0, int16_t left = 0, int8_t turn = 0, bool exactStepsRequested = false, uint8_t speed = 100, uint8_t odometryResetCounter = 0, bool isFast = false, bool kickWithLeftFoot = true, bool useShuffle = true, bool leftArmLimp = false, bool rightArmLimp = false, uint8_t power = 0, uint8_t bend = 0) {
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
         * Copy Constructor.
         */
        NaoWalkCommand(const struct wb_nao_walk_command &other): wb_nao_walk_command() {
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

        /**
         * Copy Assignment Operator.
         */
        NaoWalkCommand &operator = (const struct wb_nao_walk_command &other) {
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
        NaoWalkCommand(const std::string &str) {
            this->from_string(str);
        }

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

#ifdef USE_WB_NAOWALKCOMMAND_C_CONVERSION
        void from_string(const std::string &str) {
            wb_nao_walk_command_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1) {
                return;
            }
            char var_str_buffer[NAOWALKCOMMAND_TO_STRING_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[21];
            char* key = &key_buffer[0];
            int bracecount = 0;
            int startVar = 0;
            int index = 0;
            int startKey = 0;
            int endKey = 0;
            int varIndex = 0;
            if (index == 0 && str_cstr[0] == '{') {
                index = 1;
            }
            startVar = index;
            startKey = startVar;
            do {
                for (int i = index; i < length; i++) {
                    index = i + 1;
                    if (bracecount == 0 && str_cstr[i] == '=') {
                        endKey = i - 1;
                        startVar = index;
                        continue;
                    }
                    if (bracecount == 0 && isspace(str_cstr[i])) {
                        startVar = index;
                        if (endKey == -1) {
                            startKey = index;
                        }
                        continue;
                    }
                    if (bracecount == 0 && str_cstr[i] == ',') {
                        index = i - 1;
                        break;
                    }
                    if (str_cstr[i] == '{') {
                        bracecount++;
                        continue;
                    }
                    if (str_cstr[i] == '}') {
                        bracecount--;
                        if (bracecount < 0) {
                            index = i - 1;
                            break;
                        }
                    }
                    if (i == length - 1) {
                        index = i;
                    }
                }
                if (endKey >= startKey && endKey - startKey < length) {
                    strncpy(key, str_cstr + startKey, (endKey - startKey) + 1);
                    key[(endKey - startKey) + 1] = 0;
                } else {
                    key[0] = 0;
                }
                strncpy(var_str, str_cstr + startVar, (index - startVar) + 1);
                var_str[(index - startVar) + 1] = 0;
                bracecount = 0;
                index += 2;
                startVar = index;
                startKey = startVar;
                endKey = -1;
                if (key != NULLPTR) {
                    if (0 == strcmp("walkEngineOn", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("forward", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("left", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("turn", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("exactStepsRequested", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("speed", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("odometryResetCounter", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("isFast", key)) {
                        varIndex = 7;
                    } else if (0 == strcmp("kickWithLeftFoot", key)) {
                        varIndex = 8;
                    } else if (0 == strcmp("useShuffle", key)) {
                        varIndex = 9;
                    } else if (0 == strcmp("leftArmLimp", key)) {
                        varIndex = 10;
                    } else if (0 == strcmp("rightArmLimp", key)) {
                        varIndex = 11;
                    } else if (0 == strcmp("power", key)) {
                        varIndex = 12;
                    } else if (0 == strcmp("bend", key)) {
                        varIndex = 13;
                    }
                }
                switch (varIndex) {
                    case 0:
                    {
                        this->set_walkEngineOn(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 1:
                    {
                        this->set_forward(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_left(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_turn(static_cast<int8_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_exactStepsRequested(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 5:
                    {
                        this->set_speed(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_odometryResetCounter(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 7:
                    {
                        this->set_isFast(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 8:
                    {
                        this->set_kickWithLeftFoot(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 9:
                    {
                        this->set_useShuffle(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 10:
                    {
                        this->set_leftArmLimp(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 11:
                    {
                        this->set_rightArmLimp(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 12:
                    {
                        this->set_power(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 13:
                    {
                        this->set_bend(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                }
                varIndex++;
            } while(index < length);
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
