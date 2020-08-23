/*
 * file MachineFilteredVision.h
 *
 * This file was generated by classgenerator from machine_filtered_vision.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2020 Carl Lusty. All rights reserved.
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

#ifndef MachineFilteredVision_DEFINED
#define MachineFilteredVision_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_machine_filtered_vision.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_machine_filtered_vision`.
     */
    class MachineFilteredVision: public wb_machine_filtered_vision {

    private:

        /**
         * Set the members of the class.
         */
        void init(int8_t ball_direction = 0, uint16_t ball_distance = 0, bool ball_visible = 0, int8_t goal_direction = 0, uint16_t goal_distance = 0, bool goal_visible = 0, enum GoalSightingType goal_sightingType = NoSightingType) {
            set_ball_direction(ball_direction);
            set_ball_distance(ball_distance);
            set_ball_visible(ball_visible);
            set_goal_direction(goal_direction);
            set_goal_distance(goal_distance);
            set_goal_visible(goal_visible);
            set_goal_sightingType(goal_sightingType);
        }

    public:

        /**
         * Create a new `MachineFilteredVision`.
         */
        MachineFilteredVision(int8_t ball_direction = 0, uint16_t ball_distance = 0, bool ball_visible = 0, int8_t goal_direction = 0, uint16_t goal_distance = 0, bool goal_visible = 0, enum GoalSightingType goal_sightingType = NoSightingType) {
            this->init(ball_direction, ball_distance, ball_visible, goal_direction, goal_distance, goal_visible, goal_sightingType);
        }

        /**
         * Copy Constructor.
         */
        MachineFilteredVision(const MachineFilteredVision &other): wb_machine_filtered_vision() {
            this->init(other.ball_direction(), other.ball_distance(), other.ball_visible(), other.goal_direction(), other.goal_distance(), other.goal_visible(), other.goal_sightingType());
        }

        /**
         * Copy Constructor.
         */
        MachineFilteredVision(const struct wb_machine_filtered_vision &other): wb_machine_filtered_vision() {
            this->init(other.ball_direction(), other.ball_distance(), other.ball_visible(), other.goal_direction(), other.goal_distance(), other.goal_visible(), other.goal_sightingType());
        }

        /**
         * Copy Assignment Operator.
         */
        MachineFilteredVision &operator = (const MachineFilteredVision &other) {
            this->init(other.ball_direction(), other.ball_distance(), other.ball_visible(), other.goal_direction(), other.goal_distance(), other.goal_visible(), other.goal_sightingType());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        MachineFilteredVision &operator = (const struct wb_machine_filtered_vision &other) {
            this->init(other.ball_direction(), other.ball_distance(), other.ball_visible(), other.goal_direction(), other.goal_distance(), other.goal_visible(), other.goal_sightingType());
            return *this;
        }

        bool operator ==(const MachineFilteredVision &other) const
        {
            return ball_direction() == other.ball_direction()
                && ball_distance() == other.ball_distance()
                && ball_visible() == other.ball_visible()
                && goal_direction() == other.goal_direction()
                && goal_distance() == other.goal_distance()
                && goal_visible() == other.goal_visible()
                && goal_sightingType() == other.goal_sightingType();
        }

        bool operator !=(const MachineFilteredVision &other) const
        {
            return !(*this == other);
        }

        bool operator ==(const wb_machine_filtered_vision &other) const
        {
            return *this == MachineFilteredVision(other);
        }

        bool operator !=(const wb_machine_filtered_vision &other) const
        {
            return !(*this == other);
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        MachineFilteredVision(const std::string &str) {
            this->init();
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_MACHINE_FILTERED_VISION_C_CONVERSION
            char buffer[MACHINE_FILTERED_VISION_DESC_BUFFER_SIZE];
            wb_machine_filtered_vision_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "ball_direction=" << static_cast<signed>(this->ball_direction());
            ss << ", ";
            ss << "ball_distance=" << static_cast<unsigned>(this->ball_distance());
            ss << ", ";
            ss << "ball_visible=" << (this->ball_visible() ? "true" : "false");
            ss << ", ";
            ss << "goal_direction=" << static_cast<signed>(this->goal_direction());
            ss << ", ";
            ss << "goal_distance=" << static_cast<unsigned>(this->goal_distance());
            ss << ", ";
            ss << "goal_visible=" << (this->goal_visible() ? "true" : "false");
            ss << ", ";
            switch (this->goal_sightingType()) {
                case GoalSightingType:
                {
                    ss << "goal_sightingType=" << "GoalSightingType";
                    break;
                }
                case LeftPostSightingType:
                {
                    ss << "goal_sightingType=" << "LeftPostSightingType";
                    break;
                }
                case NoSightingType:
                {
                    ss << "goal_sightingType=" << "NoSightingType";
                    break;
                }
                case RightPostSightingType:
                {
                    ss << "goal_sightingType=" << "RightPostSightingType";
                    break;
                }
            }
            return ss.str();
#endif /// USE_WB_MACHINE_FILTERED_VISION_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_MACHINE_FILTERED_VISION_C_CONVERSION
            char buffer[MACHINE_FILTERED_VISION_TO_STRING_BUFFER_SIZE];
            wb_machine_filtered_vision_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << static_cast<signed>(this->ball_direction());
            ss << ", ";
            ss << static_cast<unsigned>(this->ball_distance());
            ss << ", ";
            ss << (this->ball_visible() ? "true" : "false");
            ss << ", ";
            ss << static_cast<signed>(this->goal_direction());
            ss << ", ";
            ss << static_cast<unsigned>(this->goal_distance());
            ss << ", ";
            ss << (this->goal_visible() ? "true" : "false");
            ss << ", ";
            switch (this->goal_sightingType()) {
                case GoalSightingType:
                {
                    ss << "GoalSightingType";
                    break;
                }
                case LeftPostSightingType:
                {
                    ss << "LeftPostSightingType";
                    break;
                }
                case NoSightingType:
                {
                    ss << "NoSightingType";
                    break;
                }
                case RightPostSightingType:
                {
                    ss << "RightPostSightingType";
                    break;
                }
            }
            return ss.str();
#endif /// USE_WB_MACHINE_FILTERED_VISION_C_CONVERSION
        }

#ifdef USE_WB_MACHINE_FILTERED_VISION_C_CONVERSION
        void from_string(const std::string &str) {
            wb_machine_filtered_vision_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > MACHINE_FILTERED_VISION_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[MACHINE_FILTERED_VISION_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[18];
            char* key = &key_buffer[0];
            int bracecount = 0;
            int startVar = 0;
            int index = 0;
            int startKey = 0;
            int endKey = -1;
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
                    strncpy(key, str_cstr + startKey, static_cast<size_t>((endKey - startKey) + 1));
                    key[(endKey - startKey) + 1] = 0;
                } else {
                    key[0] = 0;
                }
                strncpy(var_str, str_cstr + startVar, static_cast<size_t>((index - startVar) + 1));
                var_str[(index - startVar) + 1] = 0;
                bracecount = 0;
                index += 2;
                startVar = index;
                startKey = startVar;
                endKey = -1;
                if (strlen(key) > 0) {
                    if (0 == strcmp("ball_direction", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("ball_distance", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("ball_visible", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("goal_direction", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("goal_distance", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("goal_visible", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("goal_sightingType", key)) {
                        varIndex = 6;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_ball_direction(static_cast<int8_t>(atoi(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_ball_distance(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_ball_visible(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 3:
                    {
                        this->set_goal_direction(static_cast<int8_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_goal_distance(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_goal_visible(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 6:
                    {
                        if (strcmp("GoalSightingType", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_goal_sightingType(GoalSightingType);
#pragma clang diagnostic pop
                        } else if (strcmp("LeftPostSightingType", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_goal_sightingType(LeftPostSightingType);
#pragma clang diagnostic pop
                        } else if (strcmp("NoSightingType", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_goal_sightingType(NoSightingType);
#pragma clang diagnostic pop
                        } else if (strcmp("RightPostSightingType", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_goal_sightingType(RightPostSightingType);
#pragma clang diagnostic pop
                        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_goal_sightingType(static_cast<enum GoalSightingType>(atoi(var_str)));
#pragma clang diagnostic pop
                        }
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_MACHINE_FILTERED_VISION_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// MachineFilteredVision_DEFINED
