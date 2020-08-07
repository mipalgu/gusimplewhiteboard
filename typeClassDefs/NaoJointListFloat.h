/*
 * file NaoJointListFloat.h
 *
 * This file was generated by classgenerator from nao_joint_list_float.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2020 Dimitri Joukoff. All rights reserved.
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

#ifndef NaoJointListFloat_DEFINED
#define NaoJointListFloat_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_nao_joint_list_float.h"
#include <float.h>

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_nao_joint_list_float`.
     */
    class NaoJointListFloat: public wb_nao_joint_list_float {

    private:

        /**
         * Set the members of the class.
         */
        void init(float HeadYaw = 0.0f, float HeadPitch = 0.0f, float LShoulderPitch = 0.0f, float LShoulderRoll = 0.0f, float LElbowYaw = 0.0f, float LElbowRoll = 0.0f, float LWristYaw = 0.0f, float LHand = 0.0f, float RShoulderPitch = 0.0f, float RShoulderRoll = 0.0f, float RElbowYaw = 0.0f, float RElbowRoll = 0.0f, float RWristYaw = 0.0f, float RHand = 0.0f, float LHipYawPitch = 0.0f, float LHipRoll = 0.0f, float LHipPitch = 0.0f, float LKneePitch = 0.0f, float LAnklePitch = 0.0f, float LAnkleRoll = 0.0f, float RHipRoll = 0.0f, float RHipPitch = 0.0f, float RKneePitch = 0.0f, float RAnklePitch = 0.0f, float RAnkleRoll = 0.0f) {
            set_HeadYaw(HeadYaw);
            set_HeadPitch(HeadPitch);
            set_LShoulderPitch(LShoulderPitch);
            set_LShoulderRoll(LShoulderRoll);
            set_LElbowYaw(LElbowYaw);
            set_LElbowRoll(LElbowRoll);
            set_LWristYaw(LWristYaw);
            set_LHand(LHand);
            set_RShoulderPitch(RShoulderPitch);
            set_RShoulderRoll(RShoulderRoll);
            set_RElbowYaw(RElbowYaw);
            set_RElbowRoll(RElbowRoll);
            set_RWristYaw(RWristYaw);
            set_RHand(RHand);
            set_LHipYawPitch(LHipYawPitch);
            set_LHipRoll(LHipRoll);
            set_LHipPitch(LHipPitch);
            set_LKneePitch(LKneePitch);
            set_LAnklePitch(LAnklePitch);
            set_LAnkleRoll(LAnkleRoll);
            set_RHipRoll(RHipRoll);
            set_RHipPitch(RHipPitch);
            set_RKneePitch(RKneePitch);
            set_RAnklePitch(RAnklePitch);
            set_RAnkleRoll(RAnkleRoll);
        }

    public:

        /**
         * Create a new `NaoJointListFloat`.
         */
        NaoJointListFloat(float HeadYaw = 0.0f, float HeadPitch = 0.0f, float LShoulderPitch = 0.0f, float LShoulderRoll = 0.0f, float LElbowYaw = 0.0f, float LElbowRoll = 0.0f, float LWristYaw = 0.0f, float LHand = 0.0f, float RShoulderPitch = 0.0f, float RShoulderRoll = 0.0f, float RElbowYaw = 0.0f, float RElbowRoll = 0.0f, float RWristYaw = 0.0f, float RHand = 0.0f, float LHipYawPitch = 0.0f, float LHipRoll = 0.0f, float LHipPitch = 0.0f, float LKneePitch = 0.0f, float LAnklePitch = 0.0f, float LAnkleRoll = 0.0f, float RHipRoll = 0.0f, float RHipPitch = 0.0f, float RKneePitch = 0.0f, float RAnklePitch = 0.0f, float RAnkleRoll = 0.0f) {
            this->init(HeadYaw, HeadPitch, LShoulderPitch, LShoulderRoll, LElbowYaw, LElbowRoll, LWristYaw, LHand, RShoulderPitch, RShoulderRoll, RElbowYaw, RElbowRoll, RWristYaw, RHand, LHipYawPitch, LHipRoll, LHipPitch, LKneePitch, LAnklePitch, LAnkleRoll, RHipRoll, RHipPitch, RKneePitch, RAnklePitch, RAnkleRoll);
        }

        /**
         * Copy Constructor.
         */
        NaoJointListFloat(const NaoJointListFloat &other): wb_nao_joint_list_float() {
            this->init(other.HeadYaw(), other.HeadPitch(), other.LShoulderPitch(), other.LShoulderRoll(), other.LElbowYaw(), other.LElbowRoll(), other.LWristYaw(), other.LHand(), other.RShoulderPitch(), other.RShoulderRoll(), other.RElbowYaw(), other.RElbowRoll(), other.RWristYaw(), other.RHand(), other.LHipYawPitch(), other.LHipRoll(), other.LHipPitch(), other.LKneePitch(), other.LAnklePitch(), other.LAnkleRoll(), other.RHipRoll(), other.RHipPitch(), other.RKneePitch(), other.RAnklePitch(), other.RAnkleRoll());
        }

        /**
         * Copy Constructor.
         */
        NaoJointListFloat(const struct wb_nao_joint_list_float &other): wb_nao_joint_list_float() {
            this->init(other.HeadYaw(), other.HeadPitch(), other.LShoulderPitch(), other.LShoulderRoll(), other.LElbowYaw(), other.LElbowRoll(), other.LWristYaw(), other.LHand(), other.RShoulderPitch(), other.RShoulderRoll(), other.RElbowYaw(), other.RElbowRoll(), other.RWristYaw(), other.RHand(), other.LHipYawPitch(), other.LHipRoll(), other.LHipPitch(), other.LKneePitch(), other.LAnklePitch(), other.LAnkleRoll(), other.RHipRoll(), other.RHipPitch(), other.RKneePitch(), other.RAnklePitch(), other.RAnkleRoll());
        }

        /**
         * Copy Assignment Operator.
         */
        NaoJointListFloat &operator = (const NaoJointListFloat &other) {
            this->init(other.HeadYaw(), other.HeadPitch(), other.LShoulderPitch(), other.LShoulderRoll(), other.LElbowYaw(), other.LElbowRoll(), other.LWristYaw(), other.LHand(), other.RShoulderPitch(), other.RShoulderRoll(), other.RElbowYaw(), other.RElbowRoll(), other.RWristYaw(), other.RHand(), other.LHipYawPitch(), other.LHipRoll(), other.LHipPitch(), other.LKneePitch(), other.LAnklePitch(), other.LAnkleRoll(), other.RHipRoll(), other.RHipPitch(), other.RKneePitch(), other.RAnklePitch(), other.RAnkleRoll());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        NaoJointListFloat &operator = (const struct wb_nao_joint_list_float &other) {
            this->init(other.HeadYaw(), other.HeadPitch(), other.LShoulderPitch(), other.LShoulderRoll(), other.LElbowYaw(), other.LElbowRoll(), other.LWristYaw(), other.LHand(), other.RShoulderPitch(), other.RShoulderRoll(), other.RElbowYaw(), other.RElbowRoll(), other.RWristYaw(), other.RHand(), other.LHipYawPitch(), other.LHipRoll(), other.LHipPitch(), other.LKneePitch(), other.LAnklePitch(), other.LAnkleRoll(), other.RHipRoll(), other.RHipPitch(), other.RKneePitch(), other.RAnklePitch(), other.RAnkleRoll());
            return *this;
        }

        bool operator ==(const NaoJointListFloat &other) const
        {
            return fabsf(HeadYaw() - other.HeadYaw()) < FLT_EPSILON
                && fabsf(HeadPitch() - other.HeadPitch()) < FLT_EPSILON
                && fabsf(LShoulderPitch() - other.LShoulderPitch()) < FLT_EPSILON
                && fabsf(LShoulderRoll() - other.LShoulderRoll()) < FLT_EPSILON
                && fabsf(LElbowYaw() - other.LElbowYaw()) < FLT_EPSILON
                && fabsf(LElbowRoll() - other.LElbowRoll()) < FLT_EPSILON
                && fabsf(LWristYaw() - other.LWristYaw()) < FLT_EPSILON
                && fabsf(LHand() - other.LHand()) < FLT_EPSILON
                && fabsf(RShoulderPitch() - other.RShoulderPitch()) < FLT_EPSILON
                && fabsf(RShoulderRoll() - other.RShoulderRoll()) < FLT_EPSILON
                && fabsf(RElbowYaw() - other.RElbowYaw()) < FLT_EPSILON
                && fabsf(RElbowRoll() - other.RElbowRoll()) < FLT_EPSILON
                && fabsf(RWristYaw() - other.RWristYaw()) < FLT_EPSILON
                && fabsf(RHand() - other.RHand()) < FLT_EPSILON
                && fabsf(LHipYawPitch() - other.LHipYawPitch()) < FLT_EPSILON
                && fabsf(LHipRoll() - other.LHipRoll()) < FLT_EPSILON
                && fabsf(LHipPitch() - other.LHipPitch()) < FLT_EPSILON
                && fabsf(LKneePitch() - other.LKneePitch()) < FLT_EPSILON
                && fabsf(LAnklePitch() - other.LAnklePitch()) < FLT_EPSILON
                && fabsf(LAnkleRoll() - other.LAnkleRoll()) < FLT_EPSILON
                && fabsf(RHipRoll() - other.RHipRoll()) < FLT_EPSILON
                && fabsf(RHipPitch() - other.RHipPitch()) < FLT_EPSILON
                && fabsf(RKneePitch() - other.RKneePitch()) < FLT_EPSILON
                && fabsf(RAnklePitch() - other.RAnklePitch()) < FLT_EPSILON
                && fabsf(RAnkleRoll() - other.RAnkleRoll()) < FLT_EPSILON;
        }

        bool operator !=(const NaoJointListFloat &other) const
        {
            return !(*this == other);
        }

        bool operator ==(const wb_nao_joint_list_float &other) const
        {
            return *this == NaoJointListFloat(other);
        }

        bool operator !=(const wb_nao_joint_list_float &other) const
        {
            return !(*this == other);
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        NaoJointListFloat(const std::string &str) {
            this->init();
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_NAO_JOINT_LIST_FLOAT_C_CONVERSION
            char buffer[NAO_JOINT_LIST_FLOAT_DESC_BUFFER_SIZE];
            wb_nao_joint_list_float_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "HeadYaw=" << this->HeadYaw();
            ss << ", ";
            ss << "HeadPitch=" << this->HeadPitch();
            ss << ", ";
            ss << "LShoulderPitch=" << this->LShoulderPitch();
            ss << ", ";
            ss << "LShoulderRoll=" << this->LShoulderRoll();
            ss << ", ";
            ss << "LElbowYaw=" << this->LElbowYaw();
            ss << ", ";
            ss << "LElbowRoll=" << this->LElbowRoll();
            ss << ", ";
            ss << "LWristYaw=" << this->LWristYaw();
            ss << ", ";
            ss << "LHand=" << this->LHand();
            ss << ", ";
            ss << "RShoulderPitch=" << this->RShoulderPitch();
            ss << ", ";
            ss << "RShoulderRoll=" << this->RShoulderRoll();
            ss << ", ";
            ss << "RElbowYaw=" << this->RElbowYaw();
            ss << ", ";
            ss << "RElbowRoll=" << this->RElbowRoll();
            ss << ", ";
            ss << "RWristYaw=" << this->RWristYaw();
            ss << ", ";
            ss << "RHand=" << this->RHand();
            ss << ", ";
            ss << "LHipYawPitch=" << this->LHipYawPitch();
            ss << ", ";
            ss << "LHipRoll=" << this->LHipRoll();
            ss << ", ";
            ss << "LHipPitch=" << this->LHipPitch();
            ss << ", ";
            ss << "LKneePitch=" << this->LKneePitch();
            ss << ", ";
            ss << "LAnklePitch=" << this->LAnklePitch();
            ss << ", ";
            ss << "LAnkleRoll=" << this->LAnkleRoll();
            ss << ", ";
            ss << "RHipRoll=" << this->RHipRoll();
            ss << ", ";
            ss << "RHipPitch=" << this->RHipPitch();
            ss << ", ";
            ss << "RKneePitch=" << this->RKneePitch();
            ss << ", ";
            ss << "RAnklePitch=" << this->RAnklePitch();
            ss << ", ";
            ss << "RAnkleRoll=" << this->RAnkleRoll();
            return ss.str();
#endif /// USE_WB_NAO_JOINT_LIST_FLOAT_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_NAO_JOINT_LIST_FLOAT_C_CONVERSION
            char buffer[NAO_JOINT_LIST_FLOAT_TO_STRING_BUFFER_SIZE];
            wb_nao_joint_list_float_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->HeadYaw();
            ss << ", ";
            ss << this->HeadPitch();
            ss << ", ";
            ss << this->LShoulderPitch();
            ss << ", ";
            ss << this->LShoulderRoll();
            ss << ", ";
            ss << this->LElbowYaw();
            ss << ", ";
            ss << this->LElbowRoll();
            ss << ", ";
            ss << this->LWristYaw();
            ss << ", ";
            ss << this->LHand();
            ss << ", ";
            ss << this->RShoulderPitch();
            ss << ", ";
            ss << this->RShoulderRoll();
            ss << ", ";
            ss << this->RElbowYaw();
            ss << ", ";
            ss << this->RElbowRoll();
            ss << ", ";
            ss << this->RWristYaw();
            ss << ", ";
            ss << this->RHand();
            ss << ", ";
            ss << this->LHipYawPitch();
            ss << ", ";
            ss << this->LHipRoll();
            ss << ", ";
            ss << this->LHipPitch();
            ss << ", ";
            ss << this->LKneePitch();
            ss << ", ";
            ss << this->LAnklePitch();
            ss << ", ";
            ss << this->LAnkleRoll();
            ss << ", ";
            ss << this->RHipRoll();
            ss << ", ";
            ss << this->RHipPitch();
            ss << ", ";
            ss << this->RKneePitch();
            ss << ", ";
            ss << this->RAnklePitch();
            ss << ", ";
            ss << this->RAnkleRoll();
            return ss.str();
#endif /// USE_WB_NAO_JOINT_LIST_FLOAT_C_CONVERSION
        }

#ifdef USE_WB_NAO_JOINT_LIST_FLOAT_C_CONVERSION
        void from_string(const std::string &str) {
            wb_nao_joint_list_float_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > NAO_JOINT_LIST_FLOAT_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[NAO_JOINT_LIST_FLOAT_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("HeadYaw", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("HeadPitch", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("LShoulderPitch", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("LShoulderRoll", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("LElbowYaw", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("LElbowRoll", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("LWristYaw", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("LHand", key)) {
                        varIndex = 7;
                    } else if (0 == strcmp("RShoulderPitch", key)) {
                        varIndex = 8;
                    } else if (0 == strcmp("RShoulderRoll", key)) {
                        varIndex = 9;
                    } else if (0 == strcmp("RElbowYaw", key)) {
                        varIndex = 10;
                    } else if (0 == strcmp("RElbowRoll", key)) {
                        varIndex = 11;
                    } else if (0 == strcmp("RWristYaw", key)) {
                        varIndex = 12;
                    } else if (0 == strcmp("RHand", key)) {
                        varIndex = 13;
                    } else if (0 == strcmp("LHipYawPitch", key)) {
                        varIndex = 14;
                    } else if (0 == strcmp("LHipRoll", key)) {
                        varIndex = 15;
                    } else if (0 == strcmp("LHipPitch", key)) {
                        varIndex = 16;
                    } else if (0 == strcmp("LKneePitch", key)) {
                        varIndex = 17;
                    } else if (0 == strcmp("LAnklePitch", key)) {
                        varIndex = 18;
                    } else if (0 == strcmp("LAnkleRoll", key)) {
                        varIndex = 19;
                    } else if (0 == strcmp("RHipRoll", key)) {
                        varIndex = 20;
                    } else if (0 == strcmp("RHipPitch", key)) {
                        varIndex = 21;
                    } else if (0 == strcmp("RKneePitch", key)) {
                        varIndex = 22;
                    } else if (0 == strcmp("RAnklePitch", key)) {
                        varIndex = 23;
                    } else if (0 == strcmp("RAnkleRoll", key)) {
                        varIndex = 24;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_HeadYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_HeadPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_LShoulderPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_LShoulderRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_LElbowYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_LElbowRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_LWristYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 7:
                    {
                        this->set_LHand(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 8:
                    {
                        this->set_RShoulderPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 9:
                    {
                        this->set_RShoulderRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 10:
                    {
                        this->set_RElbowYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 11:
                    {
                        this->set_RElbowRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 12:
                    {
                        this->set_RWristYaw(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 13:
                    {
                        this->set_RHand(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 14:
                    {
                        this->set_LHipYawPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 15:
                    {
                        this->set_LHipRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 16:
                    {
                        this->set_LHipPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 17:
                    {
                        this->set_LKneePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 18:
                    {
                        this->set_LAnklePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 19:
                    {
                        this->set_LAnkleRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 20:
                    {
                        this->set_RHipRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 21:
                    {
                        this->set_RHipPitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 22:
                    {
                        this->set_RKneePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 23:
                    {
                        this->set_RAnklePitch(static_cast<float>(atof(var_str)));
                        break;
                    }
                    case 24:
                    {
                        this->set_RAnkleRoll(static_cast<float>(atof(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_NAO_JOINT_LIST_FLOAT_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// NaoJointListFloat_DEFINED
