/*
 * file TeleoperationControl.h
 *
 * This file was generated by classgenerator from teleoperationControl.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2021 Carl Lusty. All rights reserved.
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

#ifndef TeleoperationControl_DEFINED
#define TeleoperationControl_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_teleoperation_control.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_teleoperation_control`.
     */
    class TeleoperationControl: public wb_teleoperation_control {

    private:

        /**
         * Set the members of the class.
         */
        void init(uint8_t t_ip = 0, int32_t t_action = 0, int32_t t_stance = 0, int32_t t_streamType = 0, int32_t t_selectedCamera = 0, std::string t_sayString = "") {
            set_ip(t_ip);
            set_action(t_action);
            set_stance(t_stance);
            set_streamType(t_streamType);
            set_selectedCamera(t_selectedCamera);
            gu_strlcpy(const_cast<char *>(this->sayString()), t_sayString.c_str(), 30);
        }

    public:

        /**
         * Create a new `TeleoperationControl`.
         */
        TeleoperationControl(uint8_t t_ip = 0, int32_t t_action = 0, int32_t t_stance = 0, int32_t t_streamType = 0, int32_t t_selectedCamera = 0, std::string t_sayString = "") {
            this->init(t_ip, t_action, t_stance, t_streamType, t_selectedCamera, t_sayString);
        }

        /**
         * Copy Constructor.
         */
        TeleoperationControl(const TeleoperationControl &t_other): wb_teleoperation_control() {
            this->init(t_other.ip(), t_other.action(), t_other.stance(), t_other.streamType(), t_other.selectedCamera(), t_other.sayString());
        }

        /**
         * Copy Constructor.
         */
        TeleoperationControl(const struct wb_teleoperation_control &t_other): wb_teleoperation_control() {
            this->init(t_other.ip, t_other.action, t_other.stance, t_other.streamType, t_other.selectedCamera, t_other.sayString);
        }

        /**
         * Copy Assignment Operator.
         */
        TeleoperationControl &operator = (const TeleoperationControl &t_other) {
            this->init(t_other.ip(), t_other.action(), t_other.stance(), t_other.streamType(), t_other.selectedCamera(), t_other.sayString());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        TeleoperationControl &operator = (const struct wb_teleoperation_control &t_other) {
            this->init(t_other.ip, t_other.action, t_other.stance, t_other.streamType, t_other.selectedCamera, t_other.sayString);
            return *this;
        }

        bool operator ==(const TeleoperationControl &t_other) const
        {
            return ip() == t_other.ip()
                && action() == t_other.action()
                && stance() == t_other.stance()
                && streamType() == t_other.streamType()
                && selectedCamera() == t_other.selectedCamera()
                && 0 == strncmp(sayString(), t_other.sayString(), 30);
        }

        bool operator !=(const TeleoperationControl &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_teleoperation_control &t_other) const
        {
            return *this == TeleoperationControl(t_other);
        }

        bool operator !=(const wb_teleoperation_control &t_other) const
        {
            return !(*this == t_other);
        }

        uint8_t & ip()
        {
            return wb_teleoperation_control::ip;
        }

        const uint8_t & ip() const
        {
            return wb_teleoperation_control::ip;
        }

        void set_ip(const uint8_t &t_newValue)
        {
            wb_teleoperation_control::ip = t_newValue;
        }

        int32_t & action()
        {
            return wb_teleoperation_control::action;
        }

        const int32_t & action() const
        {
            return wb_teleoperation_control::action;
        }

        void set_action(const int32_t &t_newValue)
        {
            wb_teleoperation_control::action = t_newValue;
        }

        int32_t & stance()
        {
            return wb_teleoperation_control::stance;
        }

        const int32_t & stance() const
        {
            return wb_teleoperation_control::stance;
        }

        void set_stance(const int32_t &t_newValue)
        {
            wb_teleoperation_control::stance = t_newValue;
        }

        int32_t & streamType()
        {
            return wb_teleoperation_control::streamType;
        }

        const int32_t & streamType() const
        {
            return wb_teleoperation_control::streamType;
        }

        void set_streamType(const int32_t &t_newValue)
        {
            wb_teleoperation_control::streamType = t_newValue;
        }

        int32_t & selectedCamera()
        {
            return wb_teleoperation_control::selectedCamera;
        }

        const int32_t & selectedCamera() const
        {
            return wb_teleoperation_control::selectedCamera;
        }

        void set_selectedCamera(const int32_t &t_newValue)
        {
            wb_teleoperation_control::selectedCamera = t_newValue;
        }

        const char * sayString() const
        {
            return &(wb_teleoperation_control::sayString[0]);
        }

        size_t sayString_size() const
        {
            return 30;
        }

        char & sayString(int t_i)
        {
            return wb_teleoperation_control::sayString[t_i];
        }

        const char & sayString(int t_i) const
        {
            return wb_teleoperation_control::sayString[t_i];
        }

        void set_sayString(const char *t_newValue)
        {
            strncpy(wb_teleoperation_control::sayString, t_newValue, 30);
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        TeleoperationControl(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_TELEOPERATION_CONTROL_C_CONVERSION
            char buffer[TELEOPERATIONCONTROL_DESC_BUFFER_SIZE];
            wb_teleoperation_control_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "ip=" << static_cast<unsigned>(this->ip());
            ss << ", ";
            ss << "action=" << static_cast<signed>(this->action());
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
            return ss.str();
#endif /// USE_WB_TELEOPERATION_CONTROL_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_TELEOPERATION_CONTROL_C_CONVERSION
            char buffer[TELEOPERATIONCONTROL_TO_STRING_BUFFER_SIZE];
            wb_teleoperation_control_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << static_cast<unsigned>(this->ip());
            ss << ", ";
            ss << static_cast<signed>(this->action());
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
            return ss.str();
#endif /// USE_WB_TELEOPERATION_CONTROL_C_CONVERSION
        }

#ifdef USE_WB_TELEOPERATIONCONTROL_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_teleoperation_control_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > TELEOPERATIONCONTROL_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[TELEOPERATIONCONTROL_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("ip", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("action", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("stance", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("streamType", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("selectedCamera", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("sayString", key)) {
                        varIndex = 5;
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
                        this->set_stance(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_streamType(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_selectedCamera(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 5:
                    {
                        strncpy(wb_teleoperation_control::sayString, var_str, 30);
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_TELEOPERATIONCONTROL_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// TeleoperationControl_DEFINED
