/*
 * file SensorsFootSensors.h
 *
 * This file was generated by classgenerator from sensors_foot_sensors.gen.
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

#ifndef SensorsFootSensors_DEFINED
#define SensorsFootSensors_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_sensors_foot_sensors.h"
#include <float.h>

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_sensors_foot_sensors`.
     */
    class SensorsFootSensors: public wb_sensors_foot_sensors {

    private:

        /**
         * Set the members of the class.
         */
        void init(float LFoot_FSR_FrontLeft = 0.0f, float LFoot_FSR_FrontRight = 0.0f, float LFoot_FSR_RearLeft = 0.0f, float LFoot_FSR_RearRight = 0.0f, float LFoot_FSR_CenterOfPressure_X = 0.0f, float LFoot_FSR_CenterOfPressure_Y = 0.0f, float LFoot_FSR_TotalWeight = 0.0f, float RFoot_FSR_FrontLeft = 0.0f, float RFoot_FSR_FrontRight = 0.0f, float RFoot_FSR_RearLeft = 0.0f, float RFoot_FSR_RearRight = 0.0f, float RFoot_FSR_CenterOfPressure_X = 0.0f, float RFoot_FSR_CenterOfPressure_Y = 0.0f, float RFoot_FSR_TotalWeight = 0.0f, bool LFoot_Bumper_Left = true, bool LFoot_Bumper_Right = true, bool RFoot_Bumper_Left = true, bool RFoot_Bumper_Right = true) {
            set_LFoot_FSR_FrontLeft(LFoot_FSR_FrontLeft);
            set_LFoot_FSR_FrontRight(LFoot_FSR_FrontRight);
            set_LFoot_FSR_RearLeft(LFoot_FSR_RearLeft);
            set_LFoot_FSR_RearRight(LFoot_FSR_RearRight);
            set_LFoot_FSR_CenterOfPressure_X(LFoot_FSR_CenterOfPressure_X);
            set_LFoot_FSR_CenterOfPressure_Y(LFoot_FSR_CenterOfPressure_Y);
            set_LFoot_FSR_TotalWeight(LFoot_FSR_TotalWeight);
            set_RFoot_FSR_FrontLeft(RFoot_FSR_FrontLeft);
            set_RFoot_FSR_FrontRight(RFoot_FSR_FrontRight);
            set_RFoot_FSR_RearLeft(RFoot_FSR_RearLeft);
            set_RFoot_FSR_RearRight(RFoot_FSR_RearRight);
            set_RFoot_FSR_CenterOfPressure_X(RFoot_FSR_CenterOfPressure_X);
            set_RFoot_FSR_CenterOfPressure_Y(RFoot_FSR_CenterOfPressure_Y);
            set_RFoot_FSR_TotalWeight(RFoot_FSR_TotalWeight);
            set_LFoot_Bumper_Left(LFoot_Bumper_Left);
            set_LFoot_Bumper_Right(LFoot_Bumper_Right);
            set_RFoot_Bumper_Left(RFoot_Bumper_Left);
            set_RFoot_Bumper_Right(RFoot_Bumper_Right);
        }

    public:

        /**
         * Create a new `SensorsFootSensors`.
         */
        SensorsFootSensors(float LFoot_FSR_FrontLeft = 0.0f, float LFoot_FSR_FrontRight = 0.0f, float LFoot_FSR_RearLeft = 0.0f, float LFoot_FSR_RearRight = 0.0f, float LFoot_FSR_CenterOfPressure_X = 0.0f, float LFoot_FSR_CenterOfPressure_Y = 0.0f, float LFoot_FSR_TotalWeight = 0.0f, float RFoot_FSR_FrontLeft = 0.0f, float RFoot_FSR_FrontRight = 0.0f, float RFoot_FSR_RearLeft = 0.0f, float RFoot_FSR_RearRight = 0.0f, float RFoot_FSR_CenterOfPressure_X = 0.0f, float RFoot_FSR_CenterOfPressure_Y = 0.0f, float RFoot_FSR_TotalWeight = 0.0f, bool LFoot_Bumper_Left = true, bool LFoot_Bumper_Right = true, bool RFoot_Bumper_Left = true, bool RFoot_Bumper_Right = true) {
            this->init(LFoot_FSR_FrontLeft, LFoot_FSR_FrontRight, LFoot_FSR_RearLeft, LFoot_FSR_RearRight, LFoot_FSR_CenterOfPressure_X, LFoot_FSR_CenterOfPressure_Y, LFoot_FSR_TotalWeight, RFoot_FSR_FrontLeft, RFoot_FSR_FrontRight, RFoot_FSR_RearLeft, RFoot_FSR_RearRight, RFoot_FSR_CenterOfPressure_X, RFoot_FSR_CenterOfPressure_Y, RFoot_FSR_TotalWeight, LFoot_Bumper_Left, LFoot_Bumper_Right, RFoot_Bumper_Left, RFoot_Bumper_Right);
        }

        /**
         * Copy Constructor.
         */
        SensorsFootSensors(const SensorsFootSensors &other): wb_sensors_foot_sensors() {
            this->init(other.LFoot_FSR_FrontLeft(), other.LFoot_FSR_FrontRight(), other.LFoot_FSR_RearLeft(), other.LFoot_FSR_RearRight(), other.LFoot_FSR_CenterOfPressure_X(), other.LFoot_FSR_CenterOfPressure_Y(), other.LFoot_FSR_TotalWeight(), other.RFoot_FSR_FrontLeft(), other.RFoot_FSR_FrontRight(), other.RFoot_FSR_RearLeft(), other.RFoot_FSR_RearRight(), other.RFoot_FSR_CenterOfPressure_X(), other.RFoot_FSR_CenterOfPressure_Y(), other.RFoot_FSR_TotalWeight(), other.LFoot_Bumper_Left(), other.LFoot_Bumper_Right(), other.RFoot_Bumper_Left(), other.RFoot_Bumper_Right());
        }

        /**
         * Copy Constructor.
         */
        SensorsFootSensors(const struct wb_sensors_foot_sensors &other): wb_sensors_foot_sensors() {
            this->init(other.LFoot_FSR_FrontLeft(), other.LFoot_FSR_FrontRight(), other.LFoot_FSR_RearLeft(), other.LFoot_FSR_RearRight(), other.LFoot_FSR_CenterOfPressure_X(), other.LFoot_FSR_CenterOfPressure_Y(), other.LFoot_FSR_TotalWeight(), other.RFoot_FSR_FrontLeft(), other.RFoot_FSR_FrontRight(), other.RFoot_FSR_RearLeft(), other.RFoot_FSR_RearRight(), other.RFoot_FSR_CenterOfPressure_X(), other.RFoot_FSR_CenterOfPressure_Y(), other.RFoot_FSR_TotalWeight(), other.LFoot_Bumper_Left(), other.LFoot_Bumper_Right(), other.RFoot_Bumper_Left(), other.RFoot_Bumper_Right());
        }

        /**
         * Copy Assignment Operator.
         */
        SensorsFootSensors &operator = (const SensorsFootSensors &other) {
            this->init(other.LFoot_FSR_FrontLeft(), other.LFoot_FSR_FrontRight(), other.LFoot_FSR_RearLeft(), other.LFoot_FSR_RearRight(), other.LFoot_FSR_CenterOfPressure_X(), other.LFoot_FSR_CenterOfPressure_Y(), other.LFoot_FSR_TotalWeight(), other.RFoot_FSR_FrontLeft(), other.RFoot_FSR_FrontRight(), other.RFoot_FSR_RearLeft(), other.RFoot_FSR_RearRight(), other.RFoot_FSR_CenterOfPressure_X(), other.RFoot_FSR_CenterOfPressure_Y(), other.RFoot_FSR_TotalWeight(), other.LFoot_Bumper_Left(), other.LFoot_Bumper_Right(), other.RFoot_Bumper_Left(), other.RFoot_Bumper_Right());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        SensorsFootSensors &operator = (const struct wb_sensors_foot_sensors &other) {
            this->init(other.LFoot_FSR_FrontLeft(), other.LFoot_FSR_FrontRight(), other.LFoot_FSR_RearLeft(), other.LFoot_FSR_RearRight(), other.LFoot_FSR_CenterOfPressure_X(), other.LFoot_FSR_CenterOfPressure_Y(), other.LFoot_FSR_TotalWeight(), other.RFoot_FSR_FrontLeft(), other.RFoot_FSR_FrontRight(), other.RFoot_FSR_RearLeft(), other.RFoot_FSR_RearRight(), other.RFoot_FSR_CenterOfPressure_X(), other.RFoot_FSR_CenterOfPressure_Y(), other.RFoot_FSR_TotalWeight(), other.LFoot_Bumper_Left(), other.LFoot_Bumper_Right(), other.RFoot_Bumper_Left(), other.RFoot_Bumper_Right());
            return *this;
        }

        bool operator ==(const SensorsFootSensors &other) const
        {
            return fabsf(LFoot_FSR_FrontLeft() - other.LFoot_FSR_FrontLeft()) < FLT_EPSILON
                && fabsf(LFoot_FSR_FrontRight() - other.LFoot_FSR_FrontRight()) < FLT_EPSILON
                && fabsf(LFoot_FSR_RearLeft() - other.LFoot_FSR_RearLeft()) < FLT_EPSILON
                && fabsf(LFoot_FSR_RearRight() - other.LFoot_FSR_RearRight()) < FLT_EPSILON
                && fabsf(LFoot_FSR_CenterOfPressure_X() - other.LFoot_FSR_CenterOfPressure_X()) < FLT_EPSILON
                && fabsf(LFoot_FSR_CenterOfPressure_Y() - other.LFoot_FSR_CenterOfPressure_Y()) < FLT_EPSILON
                && fabsf(LFoot_FSR_TotalWeight() - other.LFoot_FSR_TotalWeight()) < FLT_EPSILON
                && fabsf(RFoot_FSR_FrontLeft() - other.RFoot_FSR_FrontLeft()) < FLT_EPSILON
                && fabsf(RFoot_FSR_FrontRight() - other.RFoot_FSR_FrontRight()) < FLT_EPSILON
                && fabsf(RFoot_FSR_RearLeft() - other.RFoot_FSR_RearLeft()) < FLT_EPSILON
                && fabsf(RFoot_FSR_RearRight() - other.RFoot_FSR_RearRight()) < FLT_EPSILON
                && fabsf(RFoot_FSR_CenterOfPressure_X() - other.RFoot_FSR_CenterOfPressure_X()) < FLT_EPSILON
                && fabsf(RFoot_FSR_CenterOfPressure_Y() - other.RFoot_FSR_CenterOfPressure_Y()) < FLT_EPSILON
                && fabsf(RFoot_FSR_TotalWeight() - other.RFoot_FSR_TotalWeight()) < FLT_EPSILON
                && LFoot_Bumper_Left() == other.LFoot_Bumper_Left()
                && LFoot_Bumper_Right() == other.LFoot_Bumper_Right()
                && RFoot_Bumper_Left() == other.RFoot_Bumper_Left()
                && RFoot_Bumper_Right() == other.RFoot_Bumper_Right();
        }

        bool operator !=(const SensorsFootSensors &other) const
        {
            return !(*this == other);
        }

        bool operator ==(const wb_sensors_foot_sensors &other) const
        {
            return *this == SensorsFootSensors(other);
        }

        bool operator !=(const wb_sensors_foot_sensors &other) const
        {
            return !(*this == other);
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        SensorsFootSensors(const std::string &str) {
            this->init();
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_SENSORS_FOOT_SENSORS_C_CONVERSION
            char buffer[SENSORS_FOOT_SENSORS_DESC_BUFFER_SIZE];
            wb_sensors_foot_sensors_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "LFoot_FSR_FrontLeft=" << this->LFoot_FSR_FrontLeft();
            ss << ", ";
            ss << "LFoot_FSR_FrontRight=" << this->LFoot_FSR_FrontRight();
            ss << ", ";
            ss << "LFoot_FSR_RearLeft=" << this->LFoot_FSR_RearLeft();
            ss << ", ";
            ss << "LFoot_FSR_RearRight=" << this->LFoot_FSR_RearRight();
            ss << ", ";
            ss << "LFoot_FSR_CenterOfPressure_X=" << this->LFoot_FSR_CenterOfPressure_X();
            ss << ", ";
            ss << "LFoot_FSR_CenterOfPressure_Y=" << this->LFoot_FSR_CenterOfPressure_Y();
            ss << ", ";
            ss << "LFoot_FSR_TotalWeight=" << this->LFoot_FSR_TotalWeight();
            ss << ", ";
            ss << "RFoot_FSR_FrontLeft=" << this->RFoot_FSR_FrontLeft();
            ss << ", ";
            ss << "RFoot_FSR_FrontRight=" << this->RFoot_FSR_FrontRight();
            ss << ", ";
            ss << "RFoot_FSR_RearLeft=" << this->RFoot_FSR_RearLeft();
            ss << ", ";
            ss << "RFoot_FSR_RearRight=" << this->RFoot_FSR_RearRight();
            ss << ", ";
            ss << "RFoot_FSR_CenterOfPressure_X=" << this->RFoot_FSR_CenterOfPressure_X();
            ss << ", ";
            ss << "RFoot_FSR_CenterOfPressure_Y=" << this->RFoot_FSR_CenterOfPressure_Y();
            ss << ", ";
            ss << "RFoot_FSR_TotalWeight=" << this->RFoot_FSR_TotalWeight();
            ss << ", ";
            ss << "LFoot_Bumper_Left=" << (this->LFoot_Bumper_Left() ? "true" : "false");
            ss << ", ";
            ss << "LFoot_Bumper_Right=" << (this->LFoot_Bumper_Right() ? "true" : "false");
            ss << ", ";
            ss << "RFoot_Bumper_Left=" << (this->RFoot_Bumper_Left() ? "true" : "false");
            ss << ", ";
            ss << "RFoot_Bumper_Right=" << (this->RFoot_Bumper_Right() ? "true" : "false");
            return ss.str();
#endif /// USE_WB_SENSORS_FOOT_SENSORS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_SENSORS_FOOT_SENSORS_C_CONVERSION
            char buffer[SENSORS_FOOT_SENSORS_TO_STRING_BUFFER_SIZE];
            wb_sensors_foot_sensors_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->LFoot_FSR_FrontLeft();
            ss << ", ";
            ss << this->LFoot_FSR_FrontRight();
            ss << ", ";
            ss << this->LFoot_FSR_RearLeft();
            ss << ", ";
            ss << this->LFoot_FSR_RearRight();
            ss << ", ";
            ss << this->LFoot_FSR_CenterOfPressure_X();
            ss << ", ";
            ss << this->LFoot_FSR_CenterOfPressure_Y();
            ss << ", ";
            ss << this->LFoot_FSR_TotalWeight();
            ss << ", ";
            ss << this->RFoot_FSR_FrontLeft();
            ss << ", ";
            ss << this->RFoot_FSR_FrontRight();
            ss << ", ";
            ss << this->RFoot_FSR_RearLeft();
            ss << ", ";
            ss << this->RFoot_FSR_RearRight();
            ss << ", ";
            ss << this->RFoot_FSR_CenterOfPressure_X();
            ss << ", ";
            ss << this->RFoot_FSR_CenterOfPressure_Y();
            ss << ", ";
            ss << this->RFoot_FSR_TotalWeight();
            ss << ", ";
            ss << (this->LFoot_Bumper_Left() ? "true" : "false");
            ss << ", ";
            ss << (this->LFoot_Bumper_Right() ? "true" : "false");
            ss << ", ";
            ss << (this->RFoot_Bumper_Left() ? "true" : "false");
            ss << ", ";
            ss << (this->RFoot_Bumper_Right() ? "true" : "false");
            return ss.str();
#endif /// USE_WB_SENSORS_FOOT_SENSORS_C_CONVERSION
        }

#ifdef USE_WB_SENSORS_FOOT_SENSORS_C_CONVERSION
        void from_string(const std::string &str) {
            wb_sensors_foot_sensors_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > SENSORS_FOOT_SENSORS_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[SENSORS_FOOT_SENSORS_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[29];
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
                    if (0 == strcmp("LFoot_FSR_FrontLeft", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("LFoot_FSR_FrontRight", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("LFoot_FSR_RearLeft", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("LFoot_FSR_RearRight", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("LFoot_FSR_CenterOfPressure_X", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("LFoot_FSR_CenterOfPressure_Y", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("LFoot_FSR_TotalWeight", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("RFoot_FSR_FrontLeft", key)) {
                        varIndex = 7;
                    } else if (0 == strcmp("RFoot_FSR_FrontRight", key)) {
                        varIndex = 8;
                    } else if (0 == strcmp("RFoot_FSR_RearLeft", key)) {
                        varIndex = 9;
                    } else if (0 == strcmp("RFoot_FSR_RearRight", key)) {
                        varIndex = 10;
                    } else if (0 == strcmp("RFoot_FSR_CenterOfPressure_X", key)) {
                        varIndex = 11;
                    } else if (0 == strcmp("RFoot_FSR_CenterOfPressure_Y", key)) {
                        varIndex = 12;
                    } else if (0 == strcmp("RFoot_FSR_TotalWeight", key)) {
                        varIndex = 13;
                    } else if (0 == strcmp("LFoot_Bumper_Left", key)) {
                        varIndex = 14;
                    } else if (0 == strcmp("LFoot_Bumper_Right", key)) {
                        varIndex = 15;
                    } else if (0 == strcmp("RFoot_Bumper_Left", key)) {
                        varIndex = 16;
                    } else if (0 == strcmp("RFoot_Bumper_Right", key)) {
                        varIndex = 17;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_LFoot_FSR_FrontLeft(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_LFoot_FSR_FrontRight(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_LFoot_FSR_RearLeft(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_LFoot_FSR_RearRight(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_LFoot_FSR_CenterOfPressure_X(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_LFoot_FSR_CenterOfPressure_Y(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_LFoot_FSR_TotalWeight(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 7:
                    {
                        this->set_RFoot_FSR_FrontLeft(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 8:
                    {
                        this->set_RFoot_FSR_FrontRight(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 9:
                    {
                        this->set_RFoot_FSR_RearLeft(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 10:
                    {
                        this->set_RFoot_FSR_RearRight(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 11:
                    {
                        this->set_RFoot_FSR_CenterOfPressure_X(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 12:
                    {
                        this->set_RFoot_FSR_CenterOfPressure_Y(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 13:
                    {
                        this->set_RFoot_FSR_TotalWeight(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 14:
                    {
                        this->set_LFoot_Bumper_Left(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 15:
                    {
                        this->set_LFoot_Bumper_Right(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 16:
                    {
                        this->set_RFoot_Bumper_Left(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 17:
                    {
                        this->set_RFoot_Bumper_Right(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_SENSORS_FOOT_SENSORS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// SensorsFootSensors_DEFINED
