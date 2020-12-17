/*
 * file SENSORSLegJointSensors.h
 *
 * This file was generated by classgenerator from SENSORS_LegJointSensors.txt.
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

#ifndef SENSORSLegJointSensors_DEFINED
#define SENSORSLegJointSensors_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_sensors_legjointsensors.h"
#include <float.h>

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_sensors_legjointsensors`.
     */
    class SENSORSLegJointSensors: public wb_sensors_legjointsensors {

    private:

        /**
         * Set the members of the class.
         */
        void init(float t_LKneePitch = 0.0f, float t_LAnklePitch = 0.0f, float t_LAnkleRoll = 0.0f, float t_RKneePitch = 0.0f, float t_RAnklePitch = 0.0f, float t_RAnkleRoll = 0.0f, float t_LHipYawPitch = 0.0f, float t_LHipRoll = 0.0f, float t_LHipPitch = 0.0f, float t_RHipYawPitch = 0.0f, float t_RHipRoll = 0.0f, float t_RHipPitch = 0.0f) {
            set_LKneePitch(t_LKneePitch);
            set_LAnklePitch(t_LAnklePitch);
            set_LAnkleRoll(t_LAnkleRoll);
            set_RKneePitch(t_RKneePitch);
            set_RAnklePitch(t_RAnklePitch);
            set_RAnkleRoll(t_RAnkleRoll);
            set_LHipYawPitch(t_LHipYawPitch);
            set_LHipRoll(t_LHipRoll);
            set_LHipPitch(t_LHipPitch);
            set_RHipYawPitch(t_RHipYawPitch);
            set_RHipRoll(t_RHipRoll);
            set_RHipPitch(t_RHipPitch);
        }

    public:

        /**
         * Create a new `SENSORSLegJointSensors`.
         */
        SENSORSLegJointSensors(float t_LKneePitch = 0.0f, float t_LAnklePitch = 0.0f, float t_LAnkleRoll = 0.0f, float t_RKneePitch = 0.0f, float t_RAnklePitch = 0.0f, float t_RAnkleRoll = 0.0f, float t_LHipYawPitch = 0.0f, float t_LHipRoll = 0.0f, float t_LHipPitch = 0.0f, float t_RHipYawPitch = 0.0f, float t_RHipRoll = 0.0f, float t_RHipPitch = 0.0f) {
            this->init(t_LKneePitch, t_LAnklePitch, t_LAnkleRoll, t_RKneePitch, t_RAnklePitch, t_RAnkleRoll, t_LHipYawPitch, t_LHipRoll, t_LHipPitch, t_RHipYawPitch, t_RHipRoll, t_RHipPitch);
        }

        /**
         * Copy Constructor.
         */
        SENSORSLegJointSensors(const SENSORSLegJointSensors &t_other): wb_sensors_legjointsensors() {
            this->init(t_other.LKneePitch(), t_other.LAnklePitch(), t_other.LAnkleRoll(), t_other.RKneePitch(), t_other.RAnklePitch(), t_other.RAnkleRoll(), t_other.LHipYawPitch(), t_other.LHipRoll(), t_other.LHipPitch(), t_other.RHipYawPitch(), t_other.RHipRoll(), t_other.RHipPitch());
        }

        /**
         * Copy Constructor.
         */
        SENSORSLegJointSensors(const struct wb_sensors_legjointsensors &t_other): wb_sensors_legjointsensors() {
            this->init(t_other.LKneePitch, t_other.LAnklePitch, t_other.LAnkleRoll, t_other.RKneePitch, t_other.RAnklePitch, t_other.RAnkleRoll, t_other.LHipYawPitch, t_other.LHipRoll, t_other.LHipPitch, t_other.RHipYawPitch, t_other.RHipRoll, t_other.RHipPitch);
        }

        /**
         * Copy Assignment Operator.
         */
        SENSORSLegJointSensors &operator = (const SENSORSLegJointSensors &t_other) {
            this->init(t_other.LKneePitch(), t_other.LAnklePitch(), t_other.LAnkleRoll(), t_other.RKneePitch(), t_other.RAnklePitch(), t_other.RAnkleRoll(), t_other.LHipYawPitch(), t_other.LHipRoll(), t_other.LHipPitch(), t_other.RHipYawPitch(), t_other.RHipRoll(), t_other.RHipPitch());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        SENSORSLegJointSensors &operator = (const struct wb_sensors_legjointsensors &t_other) {
            this->init(t_other.LKneePitch, t_other.LAnklePitch, t_other.LAnkleRoll, t_other.RKneePitch, t_other.RAnklePitch, t_other.RAnkleRoll, t_other.LHipYawPitch, t_other.LHipRoll, t_other.LHipPitch, t_other.RHipYawPitch, t_other.RHipRoll, t_other.RHipPitch);
            return *this;
        }

        bool operator ==(const SENSORSLegJointSensors &t_other) const
        {
            return fabsf(LKneePitch() - t_other.LKneePitch()) < FLT_EPSILON
                && fabsf(LAnklePitch() - t_other.LAnklePitch()) < FLT_EPSILON
                && fabsf(LAnkleRoll() - t_other.LAnkleRoll()) < FLT_EPSILON
                && fabsf(RKneePitch() - t_other.RKneePitch()) < FLT_EPSILON
                && fabsf(RAnklePitch() - t_other.RAnklePitch()) < FLT_EPSILON
                && fabsf(RAnkleRoll() - t_other.RAnkleRoll()) < FLT_EPSILON
                && fabsf(LHipYawPitch() - t_other.LHipYawPitch()) < FLT_EPSILON
                && fabsf(LHipRoll() - t_other.LHipRoll()) < FLT_EPSILON
                && fabsf(LHipPitch() - t_other.LHipPitch()) < FLT_EPSILON
                && fabsf(RHipYawPitch() - t_other.RHipYawPitch()) < FLT_EPSILON
                && fabsf(RHipRoll() - t_other.RHipRoll()) < FLT_EPSILON
                && fabsf(RHipPitch() - t_other.RHipPitch()) < FLT_EPSILON;
        }

        bool operator !=(const SENSORSLegJointSensors &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_sensors_legjointsensors &t_other) const
        {
            return *this == SENSORSLegJointSensors(t_other);
        }

        bool operator !=(const wb_sensors_legjointsensors &t_other) const
        {
            return !(*this == t_other);
        }

        float & LKneePitch()
        {
            return wb_sensors_legjointsensors::LKneePitch;
        }

        const float & LKneePitch() const
        {
            return wb_sensors_legjointsensors::LKneePitch;
        }

        void set_LKneePitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::LKneePitch = t_newValue;
        }

        float & LAnklePitch()
        {
            return wb_sensors_legjointsensors::LAnklePitch;
        }

        const float & LAnklePitch() const
        {
            return wb_sensors_legjointsensors::LAnklePitch;
        }

        void set_LAnklePitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::LAnklePitch = t_newValue;
        }

        float & LAnkleRoll()
        {
            return wb_sensors_legjointsensors::LAnkleRoll;
        }

        const float & LAnkleRoll() const
        {
            return wb_sensors_legjointsensors::LAnkleRoll;
        }

        void set_LAnkleRoll(const float &t_newValue)
        {
            wb_sensors_legjointsensors::LAnkleRoll = t_newValue;
        }

        float & RKneePitch()
        {
            return wb_sensors_legjointsensors::RKneePitch;
        }

        const float & RKneePitch() const
        {
            return wb_sensors_legjointsensors::RKneePitch;
        }

        void set_RKneePitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::RKneePitch = t_newValue;
        }

        float & RAnklePitch()
        {
            return wb_sensors_legjointsensors::RAnklePitch;
        }

        const float & RAnklePitch() const
        {
            return wb_sensors_legjointsensors::RAnklePitch;
        }

        void set_RAnklePitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::RAnklePitch = t_newValue;
        }

        float & RAnkleRoll()
        {
            return wb_sensors_legjointsensors::RAnkleRoll;
        }

        const float & RAnkleRoll() const
        {
            return wb_sensors_legjointsensors::RAnkleRoll;
        }

        void set_RAnkleRoll(const float &t_newValue)
        {
            wb_sensors_legjointsensors::RAnkleRoll = t_newValue;
        }

        float & LHipYawPitch()
        {
            return wb_sensors_legjointsensors::LHipYawPitch;
        }

        const float & LHipYawPitch() const
        {
            return wb_sensors_legjointsensors::LHipYawPitch;
        }

        void set_LHipYawPitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::LHipYawPitch = t_newValue;
        }

        float & LHipRoll()
        {
            return wb_sensors_legjointsensors::LHipRoll;
        }

        const float & LHipRoll() const
        {
            return wb_sensors_legjointsensors::LHipRoll;
        }

        void set_LHipRoll(const float &t_newValue)
        {
            wb_sensors_legjointsensors::LHipRoll = t_newValue;
        }

        float & LHipPitch()
        {
            return wb_sensors_legjointsensors::LHipPitch;
        }

        const float & LHipPitch() const
        {
            return wb_sensors_legjointsensors::LHipPitch;
        }

        void set_LHipPitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::LHipPitch = t_newValue;
        }

        float & RHipYawPitch()
        {
            return wb_sensors_legjointsensors::RHipYawPitch;
        }

        const float & RHipYawPitch() const
        {
            return wb_sensors_legjointsensors::RHipYawPitch;
        }

        void set_RHipYawPitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::RHipYawPitch = t_newValue;
        }

        float & RHipRoll()
        {
            return wb_sensors_legjointsensors::RHipRoll;
        }

        const float & RHipRoll() const
        {
            return wb_sensors_legjointsensors::RHipRoll;
        }

        void set_RHipRoll(const float &t_newValue)
        {
            wb_sensors_legjointsensors::RHipRoll = t_newValue;
        }

        float & RHipPitch()
        {
            return wb_sensors_legjointsensors::RHipPitch;
        }

        const float & RHipPitch() const
        {
            return wb_sensors_legjointsensors::RHipPitch;
        }

        void set_RHipPitch(const float &t_newValue)
        {
            wb_sensors_legjointsensors::RHipPitch = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        SENSORSLegJointSensors(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_SENSORS_LEGJOINTSENSORS_C_CONVERSION
            char buffer[SENSORS_LEGJOINTSENSORS_DESC_BUFFER_SIZE];
            wb_sensors_legjointsensors_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "LKneePitch=" << this->LKneePitch();
            ss << ", ";
            ss << "LAnklePitch=" << this->LAnklePitch();
            ss << ", ";
            ss << "LAnkleRoll=" << this->LAnkleRoll();
            ss << ", ";
            ss << "RKneePitch=" << this->RKneePitch();
            ss << ", ";
            ss << "RAnklePitch=" << this->RAnklePitch();
            ss << ", ";
            ss << "RAnkleRoll=" << this->RAnkleRoll();
            ss << ", ";
            ss << "LHipYawPitch=" << this->LHipYawPitch();
            ss << ", ";
            ss << "LHipRoll=" << this->LHipRoll();
            ss << ", ";
            ss << "LHipPitch=" << this->LHipPitch();
            ss << ", ";
            ss << "RHipYawPitch=" << this->RHipYawPitch();
            ss << ", ";
            ss << "RHipRoll=" << this->RHipRoll();
            ss << ", ";
            ss << "RHipPitch=" << this->RHipPitch();
            return ss.str();
#endif /// USE_WB_SENSORS_LEGJOINTSENSORS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_SENSORS_LEGJOINTSENSORS_C_CONVERSION
            char buffer[SENSORS_LEGJOINTSENSORS_TO_STRING_BUFFER_SIZE];
            wb_sensors_legjointsensors_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->LKneePitch();
            ss << ", ";
            ss << this->LAnklePitch();
            ss << ", ";
            ss << this->LAnkleRoll();
            ss << ", ";
            ss << this->RKneePitch();
            ss << ", ";
            ss << this->RAnklePitch();
            ss << ", ";
            ss << this->RAnkleRoll();
            ss << ", ";
            ss << this->LHipYawPitch();
            ss << ", ";
            ss << this->LHipRoll();
            ss << ", ";
            ss << this->LHipPitch();
            ss << ", ";
            ss << this->RHipYawPitch();
            ss << ", ";
            ss << this->RHipRoll();
            ss << ", ";
            ss << this->RHipPitch();
            return ss.str();
#endif /// USE_WB_SENSORS_LEGJOINTSENSORS_C_CONVERSION
        }

#ifdef USE_WB_SENSORS_LEGJOINTSENSORS_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_sensors_legjointsensors_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > SENSORS_LEGJOINTSENSORS_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[SENSORS_LEGJOINTSENSORS_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[13];
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
                    if (0 == strcmp("LKneePitch", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("LAnklePitch", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("LAnkleRoll", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("RKneePitch", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("RAnklePitch", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("RAnkleRoll", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("LHipYawPitch", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("LHipRoll", key)) {
                        varIndex = 7;
                    } else if (0 == strcmp("LHipPitch", key)) {
                        varIndex = 8;
                    } else if (0 == strcmp("RHipYawPitch", key)) {
                        varIndex = 9;
                    } else if (0 == strcmp("RHipRoll", key)) {
                        varIndex = 10;
                    } else if (0 == strcmp("RHipPitch", key)) {
                        varIndex = 11;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_LKneePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_LAnklePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_LAnkleRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_RKneePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_RAnklePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_RAnkleRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_LHipYawPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 7:
                    {
                        this->set_LHipRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 8:
                    {
                        this->set_LHipPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 9:
                    {
                        this->set_RHipYawPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 10:
                    {
                        this->set_RHipRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 11:
                    {
                        this->set_RHipPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_SENSORS_LEGJOINTSENSORS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// SENSORSLegJointSensors_DEFINED
