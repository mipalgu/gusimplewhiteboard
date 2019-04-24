/*
 * file TeleoperationControlVR.h
 *
 * This file was generated by classgenerator from teleoperationControlVR.gen.
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

#ifndef TeleoperationControlVR_DEFINED
#define TeleoperationControlVR_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_teleoperation_control_v_r.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_teleoperation_control_v_r`.
     */
    class TeleoperationControlVR: public wb_teleoperation_control_v_r {

    private:

        /**
         * Set the members of the class.
         */
        void init(uint8_t ip = 0, int32_t action = 0, float HeadYaw = 0, float HeadPitch = 0, int32_t stance = 0, int32_t streamType = 0, int32_t selectedCamera = 0, std::string sayString = "", int32_t walk = 0, int32_t turn = 0, int32_t timestamp = 0) {
            set_ip(ip);
            set_action(action);
            set_HeadYaw(HeadYaw);
            set_HeadPitch(HeadPitch);
            set_stance(stance);
            set_streamType(streamType);
            set_selectedCamera(selectedCamera);
            gu_strlcpy(const_cast<char *>(this->sayString()), sayString.c_str(), 30);
            set_walk(walk);
            set_turn(turn);
            set_timestamp(timestamp);
        }

    public:

        /**
         * Create a new `TeleoperationControlVR`.
         */
        TeleoperationControlVR(uint8_t ip = 0, int32_t action = 0, float HeadYaw = 0, float HeadPitch = 0, int32_t stance = 0, int32_t streamType = 0, int32_t selectedCamera = 0, std::string sayString = "", int32_t walk = 0, int32_t turn = 0, int32_t timestamp = 0) {
            this->init(ip, action, HeadYaw, HeadPitch, stance, streamType, selectedCamera, sayString, walk, turn, timestamp);
        }

        /**
         * Copy Constructor.
         */
        TeleoperationControlVR(const TeleoperationControlVR &other): wb_teleoperation_control_v_r() {
            this->init(other.ip(), other.action(), other.HeadYaw(), other.HeadPitch(), other.stance(), other.streamType(), other.selectedCamera(), other.sayString(), other.walk(), other.turn(), other.timestamp());
        }

        /**
         * Copy Constructor.
         */
        TeleoperationControlVR(const struct wb_teleoperation_control_v_r &other): wb_teleoperation_control_v_r() {
            this->init(other.ip(), other.action(), other.HeadYaw(), other.HeadPitch(), other.stance(), other.streamType(), other.selectedCamera(), other.sayString(), other.walk(), other.turn(), other.timestamp());
        }

        /**
         * Copy Assignment Operator.
         */
        TeleoperationControlVR &operator = (const TeleoperationControlVR &other) {
            this->init(other.ip(), other.action(), other.HeadYaw(), other.HeadPitch(), other.stance(), other.streamType(), other.selectedCamera(), other.sayString(), other.walk(), other.turn(), other.timestamp());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        TeleoperationControlVR &operator = (const struct wb_teleoperation_control_v_r &other) {
            this->init(other.ip(), other.action(), other.HeadYaw(), other.HeadPitch(), other.stance(), other.streamType(), other.selectedCamera(), other.sayString(), other.walk(), other.turn(), other.timestamp());
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        TeleoperationControlVR(const std::string &str) {
            this->init();
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_TELEOPERATION_CONTROL_V_R_C_CONVERSION
            char buffer[TELEOPERATIONCONTROLVR_DESC_BUFFER_SIZE];
            wb_teleoperation_control_v_r_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "ip=" << static_cast<unsigned>(this->ip());
            ss << ", ";
            ss << "action=" << static_cast<signed>(this->action());
            ss << ", ";
            ss << "HeadYaw=" << this->HeadYaw();
            ss << ", ";
            ss << "HeadPitch=" << this->HeadPitch();
            ss << ", ";
            ss << "stance=" << static_cast<signed>(this->stance());
            ss << ", ";
            ss << "streamType=" << static_cast<signed>(this->streamType());
            ss << ", ";
            ss << "selectedCamera=" << static_cast<signed>(this->selectedCamera());
            ss << ", ";
            if (0 == strncmp("", this->sayString(), 1)) {
                ss << "sayString=" << "";
            } else {
                ss << "sayString=" << this->sayString();
            }
            ss << ", ";
            ss << "walk=" << static_cast<signed>(this->walk());
            ss << ", ";
            ss << "turn=" << static_cast<signed>(this->turn());
            ss << ", ";
            ss << "timestamp=" << static_cast<signed>(this->timestamp());
            return ss.str();
#endif /// USE_WB_TELEOPERATION_CONTROL_V_R_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_TELEOPERATION_CONTROL_V_R_C_CONVERSION
            char buffer[TELEOPERATIONCONTROLVR_TO_STRING_BUFFER_SIZE];
            wb_teleoperation_control_v_r_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << static_cast<unsigned>(this->ip());
            ss << ", ";
            ss << static_cast<signed>(this->action());
            ss << ", ";
            ss << this->HeadYaw();
            ss << ", ";
            ss << this->HeadPitch();
            ss << ", ";
            ss << static_cast<signed>(this->stance());
            ss << ", ";
            ss << static_cast<signed>(this->streamType());
            ss << ", ";
            ss << static_cast<signed>(this->selectedCamera());
            ss << ", ";
            if (0 == strncmp("", this->sayString(), 1)) {
                ss << "";
            } else {
                ss << this->sayString();
            }
            ss << ", ";
            ss << static_cast<signed>(this->walk());
            ss << ", ";
            ss << static_cast<signed>(this->turn());
            ss << ", ";
            ss << static_cast<signed>(this->timestamp());
            return ss.str();
#endif /// USE_WB_TELEOPERATION_CONTROL_V_R_C_CONVERSION
        }

#ifdef USE_WB_TELEOPERATIONCONTROLVR_C_CONVERSION
        void from_string(const std::string &str) {
            wb_teleoperation_control_v_r_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > TELEOPERATIONCONTROLVR_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[TELEOPERATIONCONTROLVR_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[15];
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
                if (strlen(key) > 0) {
                    if (0 == strcmp("ip", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("action", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("HeadYaw", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("HeadPitch", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("stance", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("streamType", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("selectedCamera", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("sayString", key)) {
                        varIndex = 7;
                    } else if (0 == strcmp("walk", key)) {
                        varIndex = 8;
                    } else if (0 == strcmp("turn", key)) {
                        varIndex = 9;
                    } else if (0 == strcmp("timestamp", key)) {
                        varIndex = 10;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_ip(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_action(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_HeadYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_HeadPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_stance(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_streamType(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_selectedCamera(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 7:
                    {
                        strncpy(this->sayString(), var_str, 30);
                        break;
                    }
                    case 8:
                    {
                        this->set_walk(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 9:
                    {
                        this->set_turn(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 10:
                    {
                        this->set_timestamp(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_TELEOPERATIONCONTROLVR_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard
#endif /// TeleoperationControlVR_DEFINED
