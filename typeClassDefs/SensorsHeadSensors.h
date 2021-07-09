/*
 * file SensorsHeadSensors.h
 *
 * This file was generated by classgenerator from sensors_head_sensors.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2021 Dimitri Joukoff. All rights reserved.
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

#ifndef guWhiteboard_SensorsHeadSensors_h
#define guWhiteboard_SensorsHeadSensors_h

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_sensors_head_sensors.h"

#undef guWhiteboard_SensorsHeadSensors_DEFINED
#define guWhiteboard_SensorsHeadSensors_DEFINED

#undef SensorsHeadSensors_DEFINED
#define SensorsHeadSensors_DEFINED

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_sensors_head_sensors`.
     */
    class SensorsHeadSensors: public wb_sensors_head_sensors {

    private:

        /**
         * Set the members of the class.
         */
        void init(bool t_Head_Touch_Front = true, bool t_Head_Touch_Middle = true, bool t_Head_Touch_Rear = true) {
            set_Head_Touch_Front(t_Head_Touch_Front);
            set_Head_Touch_Middle(t_Head_Touch_Middle);
            set_Head_Touch_Rear(t_Head_Touch_Rear);
        }

    public:

        /**
         * Create a new `SensorsHeadSensors`.
         */
        SensorsHeadSensors(bool t_Head_Touch_Front = true, bool t_Head_Touch_Middle = true, bool t_Head_Touch_Rear = true) {
            this->init(t_Head_Touch_Front, t_Head_Touch_Middle, t_Head_Touch_Rear);
        }

        /**
         * Copy Constructor.
         */
        SensorsHeadSensors(const SensorsHeadSensors &t_other): wb_sensors_head_sensors() {
            this->init(t_other.Head_Touch_Front(), t_other.Head_Touch_Middle(), t_other.Head_Touch_Rear());
        }

        /**
         * Copy Constructor.
         */
        SensorsHeadSensors(const struct wb_sensors_head_sensors &t_other): wb_sensors_head_sensors() {
            this->init(t_other.Head_Touch_Front, t_other.Head_Touch_Middle, t_other.Head_Touch_Rear);
        }

        /**
         * Copy Assignment Operator.
         */
        SensorsHeadSensors &operator = (const SensorsHeadSensors &t_other) {
            this->init(t_other.Head_Touch_Front(), t_other.Head_Touch_Middle(), t_other.Head_Touch_Rear());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        SensorsHeadSensors &operator = (const struct wb_sensors_head_sensors &t_other) {
            this->init(t_other.Head_Touch_Front, t_other.Head_Touch_Middle, t_other.Head_Touch_Rear);
            return *this;
        }

        bool operator ==(const SensorsHeadSensors &t_other) const
        {
            return Head_Touch_Front() == t_other.Head_Touch_Front()
                && Head_Touch_Middle() == t_other.Head_Touch_Middle()
                && Head_Touch_Rear() == t_other.Head_Touch_Rear();
        }

        bool operator !=(const SensorsHeadSensors &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_sensors_head_sensors &t_other) const
        {
            return *this == SensorsHeadSensors(t_other);
        }

        bool operator !=(const wb_sensors_head_sensors &t_other) const
        {
            return !(*this == t_other);
        }

        bool & Head_Touch_Front()
        {
            return wb_sensors_head_sensors::Head_Touch_Front;
        }

        const bool & Head_Touch_Front() const
        {
            return wb_sensors_head_sensors::Head_Touch_Front;
        }

        void set_Head_Touch_Front(const bool &t_newValue)
        {
            wb_sensors_head_sensors::Head_Touch_Front = t_newValue;
        }

        bool & Head_Touch_Middle()
        {
            return wb_sensors_head_sensors::Head_Touch_Middle;
        }

        const bool & Head_Touch_Middle() const
        {
            return wb_sensors_head_sensors::Head_Touch_Middle;
        }

        void set_Head_Touch_Middle(const bool &t_newValue)
        {
            wb_sensors_head_sensors::Head_Touch_Middle = t_newValue;
        }

        bool & Head_Touch_Rear()
        {
            return wb_sensors_head_sensors::Head_Touch_Rear;
        }

        const bool & Head_Touch_Rear() const
        {
            return wb_sensors_head_sensors::Head_Touch_Rear;
        }

        void set_Head_Touch_Rear(const bool &t_newValue)
        {
            wb_sensors_head_sensors::Head_Touch_Rear = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        SensorsHeadSensors(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_SENSORS_HEAD_SENSORS_C_CONVERSION
            char buffer[WB_SENSORS_HEAD_SENSORS_DESC_BUFFER_SIZE];
            wb_sensors_head_sensors_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "Head_Touch_Front=" << (this->Head_Touch_Front() ? "true" : "false");
            ss << ", ";
            ss << "Head_Touch_Middle=" << (this->Head_Touch_Middle() ? "true" : "false");
            ss << ", ";
            ss << "Head_Touch_Rear=" << (this->Head_Touch_Rear() ? "true" : "false");
            return ss.str();
#endif /// USE_WB_SENSORS_HEAD_SENSORS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_SENSORS_HEAD_SENSORS_C_CONVERSION
            char buffer[WB_SENSORS_HEAD_SENSORS_TO_STRING_BUFFER_SIZE];
            wb_sensors_head_sensors_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << (this->Head_Touch_Front() ? "true" : "false");
            ss << ", ";
            ss << (this->Head_Touch_Middle() ? "true" : "false");
            ss << ", ";
            ss << (this->Head_Touch_Rear() ? "true" : "false");
            return ss.str();
#endif /// USE_WB_SENSORS_HEAD_SENSORS_C_CONVERSION
        }

#ifdef USE_WB_SENSORS_HEAD_SENSORS_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_sensors_head_sensors_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > WB_SENSORS_HEAD_SENSORS_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[WB_SENSORS_HEAD_SENSORS_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("Head_Touch_Front", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("Head_Touch_Middle", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("Head_Touch_Rear", key)) {
                        varIndex = 2;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_Head_Touch_Front(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 1:
                    {
                        this->set_Head_Touch_Middle(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 2:
                    {
                        this->set_Head_Touch_Rear(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_SENSORS_HEAD_SENSORS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// guWhiteboard_SensorsHeadSensors_h
