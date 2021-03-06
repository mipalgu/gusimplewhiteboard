/*
 * file SENSORSArmJointSensors.hpp
 *
 * This file was generated by classgenerator from SENSORS_ArmJointSensors.txt.
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

#ifndef guWhiteboard_SENSORSArmJointSensors_h
#define guWhiteboard_SENSORSArmJointSensors_h

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_sensors_armjointsensors.h"
#include <float.h>

#undef guWhiteboard_SENSORSArmJointSensors_DEFINED
#define guWhiteboard_SENSORSArmJointSensors_DEFINED

#undef SENSORSArmJointSensors_DEFINED
#define SENSORSArmJointSensors_DEFINED

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_sensors_armjointsensors`.
     */
    class SENSORSArmJointSensors: public wb_sensors_armjointsensors {

    private:

        /**
         * Set the members of the class.
         */
        void init(float t_LShoulderPitch = 0.0f, float t_LShoulderRoll = 0.0f, float t_LElbowRoll = 0.0f, float t_LElbowYaw = 0.0f, float t_RShoulderPitch = 0.0f, float t_RShoulderRoll = 0.0f, float t_RElbowRoll = 0.0f, float t_RElbowYaw = 0.0f, float t_LWristYaw = 0.0f, float t_RWristYaw = 0.0f) {
            set_LShoulderPitch(t_LShoulderPitch);
            set_LShoulderRoll(t_LShoulderRoll);
            set_LElbowRoll(t_LElbowRoll);
            set_LElbowYaw(t_LElbowYaw);
            set_RShoulderPitch(t_RShoulderPitch);
            set_RShoulderRoll(t_RShoulderRoll);
            set_RElbowRoll(t_RElbowRoll);
            set_RElbowYaw(t_RElbowYaw);
            set_LWristYaw(t_LWristYaw);
            set_RWristYaw(t_RWristYaw);
        }

    public:

        /**
         * Create a new `SENSORSArmJointSensors`.
         */
        SENSORSArmJointSensors(float t_LShoulderPitch = 0.0f, float t_LShoulderRoll = 0.0f, float t_LElbowRoll = 0.0f, float t_LElbowYaw = 0.0f, float t_RShoulderPitch = 0.0f, float t_RShoulderRoll = 0.0f, float t_RElbowRoll = 0.0f, float t_RElbowYaw = 0.0f, float t_LWristYaw = 0.0f, float t_RWristYaw = 0.0f) {
            this->init(t_LShoulderPitch, t_LShoulderRoll, t_LElbowRoll, t_LElbowYaw, t_RShoulderPitch, t_RShoulderRoll, t_RElbowRoll, t_RElbowYaw, t_LWristYaw, t_RWristYaw);
        }

        /**
         * Copy Constructor.
         */
        SENSORSArmJointSensors(const SENSORSArmJointSensors &t_other): wb_sensors_armjointsensors() {
            this->init(t_other.LShoulderPitch(), t_other.LShoulderRoll(), t_other.LElbowRoll(), t_other.LElbowYaw(), t_other.RShoulderPitch(), t_other.RShoulderRoll(), t_other.RElbowRoll(), t_other.RElbowYaw(), t_other.LWristYaw(), t_other.RWristYaw());
        }

        /**
         * Copy Constructor.
         */
        SENSORSArmJointSensors(const struct wb_sensors_armjointsensors &t_other): wb_sensors_armjointsensors() {
            this->init(t_other.LShoulderPitch, t_other.LShoulderRoll, t_other.LElbowRoll, t_other.LElbowYaw, t_other.RShoulderPitch, t_other.RShoulderRoll, t_other.RElbowRoll, t_other.RElbowYaw, t_other.LWristYaw, t_other.RWristYaw);
        }

        /**
         * Copy Assignment Operator.
         */
        SENSORSArmJointSensors &operator = (const SENSORSArmJointSensors &t_other) {
            this->init(t_other.LShoulderPitch(), t_other.LShoulderRoll(), t_other.LElbowRoll(), t_other.LElbowYaw(), t_other.RShoulderPitch(), t_other.RShoulderRoll(), t_other.RElbowRoll(), t_other.RElbowYaw(), t_other.LWristYaw(), t_other.RWristYaw());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        SENSORSArmJointSensors &operator = (const struct wb_sensors_armjointsensors &t_other) {
            this->init(t_other.LShoulderPitch, t_other.LShoulderRoll, t_other.LElbowRoll, t_other.LElbowYaw, t_other.RShoulderPitch, t_other.RShoulderRoll, t_other.RElbowRoll, t_other.RElbowYaw, t_other.LWristYaw, t_other.RWristYaw);
            return *this;
        }

        bool operator ==(const SENSORSArmJointSensors &t_other) const
        {
            return fabsf(LShoulderPitch() - t_other.LShoulderPitch()) < FLT_EPSILON
                && fabsf(LShoulderRoll() - t_other.LShoulderRoll()) < FLT_EPSILON
                && fabsf(LElbowRoll() - t_other.LElbowRoll()) < FLT_EPSILON
                && fabsf(LElbowYaw() - t_other.LElbowYaw()) < FLT_EPSILON
                && fabsf(RShoulderPitch() - t_other.RShoulderPitch()) < FLT_EPSILON
                && fabsf(RShoulderRoll() - t_other.RShoulderRoll()) < FLT_EPSILON
                && fabsf(RElbowRoll() - t_other.RElbowRoll()) < FLT_EPSILON
                && fabsf(RElbowYaw() - t_other.RElbowYaw()) < FLT_EPSILON
                && fabsf(LWristYaw() - t_other.LWristYaw()) < FLT_EPSILON
                && fabsf(RWristYaw() - t_other.RWristYaw()) < FLT_EPSILON;
        }

        bool operator !=(const SENSORSArmJointSensors &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_sensors_armjointsensors &t_other) const
        {
            return *this == SENSORSArmJointSensors(t_other);
        }

        bool operator !=(const wb_sensors_armjointsensors &t_other) const
        {
            return !(*this == t_other);
        }

        float & LShoulderPitch()
        {
            return wb_sensors_armjointsensors::LShoulderPitch;
        }

        const float & LShoulderPitch() const
        {
            return wb_sensors_armjointsensors::LShoulderPitch;
        }

        void set_LShoulderPitch(const float &t_newValue)
        {
            wb_sensors_armjointsensors::LShoulderPitch = t_newValue;
        }

        float & LShoulderRoll()
        {
            return wb_sensors_armjointsensors::LShoulderRoll;
        }

        const float & LShoulderRoll() const
        {
            return wb_sensors_armjointsensors::LShoulderRoll;
        }

        void set_LShoulderRoll(const float &t_newValue)
        {
            wb_sensors_armjointsensors::LShoulderRoll = t_newValue;
        }

        float & LElbowRoll()
        {
            return wb_sensors_armjointsensors::LElbowRoll;
        }

        const float & LElbowRoll() const
        {
            return wb_sensors_armjointsensors::LElbowRoll;
        }

        void set_LElbowRoll(const float &t_newValue)
        {
            wb_sensors_armjointsensors::LElbowRoll = t_newValue;
        }

        float & LElbowYaw()
        {
            return wb_sensors_armjointsensors::LElbowYaw;
        }

        const float & LElbowYaw() const
        {
            return wb_sensors_armjointsensors::LElbowYaw;
        }

        void set_LElbowYaw(const float &t_newValue)
        {
            wb_sensors_armjointsensors::LElbowYaw = t_newValue;
        }

        float & RShoulderPitch()
        {
            return wb_sensors_armjointsensors::RShoulderPitch;
        }

        const float & RShoulderPitch() const
        {
            return wb_sensors_armjointsensors::RShoulderPitch;
        }

        void set_RShoulderPitch(const float &t_newValue)
        {
            wb_sensors_armjointsensors::RShoulderPitch = t_newValue;
        }

        float & RShoulderRoll()
        {
            return wb_sensors_armjointsensors::RShoulderRoll;
        }

        const float & RShoulderRoll() const
        {
            return wb_sensors_armjointsensors::RShoulderRoll;
        }

        void set_RShoulderRoll(const float &t_newValue)
        {
            wb_sensors_armjointsensors::RShoulderRoll = t_newValue;
        }

        float & RElbowRoll()
        {
            return wb_sensors_armjointsensors::RElbowRoll;
        }

        const float & RElbowRoll() const
        {
            return wb_sensors_armjointsensors::RElbowRoll;
        }

        void set_RElbowRoll(const float &t_newValue)
        {
            wb_sensors_armjointsensors::RElbowRoll = t_newValue;
        }

        float & RElbowYaw()
        {
            return wb_sensors_armjointsensors::RElbowYaw;
        }

        const float & RElbowYaw() const
        {
            return wb_sensors_armjointsensors::RElbowYaw;
        }

        void set_RElbowYaw(const float &t_newValue)
        {
            wb_sensors_armjointsensors::RElbowYaw = t_newValue;
        }

        float & LWristYaw()
        {
            return wb_sensors_armjointsensors::LWristYaw;
        }

        const float & LWristYaw() const
        {
            return wb_sensors_armjointsensors::LWristYaw;
        }

        void set_LWristYaw(const float &t_newValue)
        {
            wb_sensors_armjointsensors::LWristYaw = t_newValue;
        }

        float & RWristYaw()
        {
            return wb_sensors_armjointsensors::RWristYaw;
        }

        const float & RWristYaw() const
        {
            return wb_sensors_armjointsensors::RWristYaw;
        }

        void set_RWristYaw(const float &t_newValue)
        {
            wb_sensors_armjointsensors::RWristYaw = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        SENSORSArmJointSensors(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
            char buffer[SENSORS_ARMJOINTSENSORS_DESC_BUFFER_SIZE];
            wb_sensors_armjointsensors_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "LShoulderPitch=" << this->LShoulderPitch();
            ss << ", ";
            ss << "LShoulderRoll=" << this->LShoulderRoll();
            ss << ", ";
            ss << "LElbowRoll=" << this->LElbowRoll();
            ss << ", ";
            ss << "LElbowYaw=" << this->LElbowYaw();
            ss << ", ";
            ss << "RShoulderPitch=" << this->RShoulderPitch();
            ss << ", ";
            ss << "RShoulderRoll=" << this->RShoulderRoll();
            ss << ", ";
            ss << "RElbowRoll=" << this->RElbowRoll();
            ss << ", ";
            ss << "RElbowYaw=" << this->RElbowYaw();
            ss << ", ";
            ss << "LWristYaw=" << this->LWristYaw();
            ss << ", ";
            ss << "RWristYaw=" << this->RWristYaw();
            return ss.str();
#endif /// USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
            char buffer[SENSORS_ARMJOINTSENSORS_TO_STRING_BUFFER_SIZE];
            wb_sensors_armjointsensors_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->LShoulderPitch();
            ss << ", ";
            ss << this->LShoulderRoll();
            ss << ", ";
            ss << this->LElbowRoll();
            ss << ", ";
            ss << this->LElbowYaw();
            ss << ", ";
            ss << this->RShoulderPitch();
            ss << ", ";
            ss << this->RShoulderRoll();
            ss << ", ";
            ss << this->RElbowRoll();
            ss << ", ";
            ss << this->RElbowYaw();
            ss << ", ";
            ss << this->LWristYaw();
            ss << ", ";
            ss << this->RWristYaw();
            return ss.str();
#endif /// USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
        }

#ifdef USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_sensors_armjointsensors_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > SENSORS_ARMJOINTSENSORS_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[SENSORS_ARMJOINTSENSORS_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("LShoulderPitch", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("LShoulderRoll", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("LElbowRoll", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("LElbowYaw", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("RShoulderPitch", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("RShoulderRoll", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("RElbowRoll", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("RElbowYaw", key)) {
                        varIndex = 7;
                    } else if (0 == strcmp("LWristYaw", key)) {
                        varIndex = 8;
                    } else if (0 == strcmp("RWristYaw", key)) {
                        varIndex = 9;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_LShoulderPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_LShoulderRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_LElbowRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_LElbowYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_RShoulderPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_RShoulderRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_RElbowRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 7:
                    {
                        this->set_RElbowYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 8:
                    {
                        this->set_LWristYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 9:
                    {
                        this->set_RWristYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// guWhiteboard_SENSORSArmJointSensors_h
