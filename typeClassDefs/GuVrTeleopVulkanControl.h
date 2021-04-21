/*
 * file GuVrTeleopVulkanControl.h
 *
 * This file was generated by classgenerator from gu_vr_teleop_vulkan_control.gen.
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

#ifndef GuVrTeleopVulkanControl_DEFINED
#define GuVrTeleopVulkanControl_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_gu_vr_teleop_vulkan_control.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_gu_vr_teleop_vulkan_control`.
     */
    class GuVrTeleopVulkanControl: public wb_gu_vr_teleop_vulkan_control {

    private:

        /**
         * Set the members of the class.
         */
        void init(enum VRControlMovementOptions t_movementOptions = VRResting, enum VRControlWalkingOptions t_walkingOptions = NUM_VR_CONTROL_WALKING_OPTIONS) {
            set_movementOptions(t_movementOptions);
            set_walkingOptions(t_walkingOptions);
        }

    public:

        /**
         * Create a new `GuVrTeleopVulkanControl`.
         */
        GuVrTeleopVulkanControl(enum VRControlMovementOptions t_movementOptions = VRResting, enum VRControlWalkingOptions t_walkingOptions = NUM_VR_CONTROL_WALKING_OPTIONS) {
            this->init(t_movementOptions, t_walkingOptions);
        }

        /**
         * Copy Constructor.
         */
        GuVrTeleopVulkanControl(const GuVrTeleopVulkanControl &t_other): wb_gu_vr_teleop_vulkan_control() {
            this->init(t_other.movementOptions(), t_other.walkingOptions());
        }

        /**
         * Copy Constructor.
         */
        GuVrTeleopVulkanControl(const struct wb_gu_vr_teleop_vulkan_control &t_other): wb_gu_vr_teleop_vulkan_control() {
            this->init(t_other.movementOptions, t_other.walkingOptions);
        }

        /**
         * Copy Assignment Operator.
         */
        GuVrTeleopVulkanControl &operator = (const GuVrTeleopVulkanControl &t_other) {
            this->init(t_other.movementOptions(), t_other.walkingOptions());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        GuVrTeleopVulkanControl &operator = (const struct wb_gu_vr_teleop_vulkan_control &t_other) {
            this->init(t_other.movementOptions, t_other.walkingOptions);
            return *this;
        }

        bool operator ==(const GuVrTeleopVulkanControl &t_other) const
        {
            return movementOptions() == t_other.movementOptions()
                && walkingOptions() == t_other.walkingOptions();
        }

        bool operator !=(const GuVrTeleopVulkanControl &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_gu_vr_teleop_vulkan_control &t_other) const
        {
            return *this == GuVrTeleopVulkanControl(t_other);
        }

        bool operator !=(const wb_gu_vr_teleop_vulkan_control &t_other) const
        {
            return !(*this == t_other);
        }

        enum VRControlMovementOptions & movementOptions()
        {
            return wb_gu_vr_teleop_vulkan_control::movementOptions;
        }

        const enum VRControlMovementOptions & movementOptions() const
        {
            return wb_gu_vr_teleop_vulkan_control::movementOptions;
        }

        void set_movementOptions(const enum VRControlMovementOptions &t_newValue)
        {
            wb_gu_vr_teleop_vulkan_control::movementOptions = t_newValue;
        }

        enum VRControlWalkingOptions & walkingOptions()
        {
            return wb_gu_vr_teleop_vulkan_control::walkingOptions;
        }

        const enum VRControlWalkingOptions & walkingOptions() const
        {
            return wb_gu_vr_teleop_vulkan_control::walkingOptions;
        }

        void set_walkingOptions(const enum VRControlWalkingOptions &t_newValue)
        {
            wb_gu_vr_teleop_vulkan_control::walkingOptions = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        GuVrTeleopVulkanControl(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_GU_VR_TELEOP_VULKAN_CONTROL_C_CONVERSION
            char buffer[GU_VR_TELEOP_VULKAN_CONTROL_DESC_BUFFER_SIZE];
            wb_gu_vr_teleop_vulkan_control_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            switch (this->movementOptions()) {
                case VRResting:
                {
                    ss << "movementOptions=" << "VRResting";
                    break;
                }
                case VRStanding:
                {
                    ss << "movementOptions=" << "VRStanding";
                    break;
                }
                case VRWalking:
                {
                    ss << "movementOptions=" << "VRWalking";
                    break;
                }
            }
            ss << ", ";
            switch (this->walkingOptions()) {
                case NUM_VR_CONTROL_WALKING_OPTIONS:
                {
                    ss << "walkingOptions=" << "NUM_VR_CONTROL_WALKING_OPTIONS";
                    break;
                }
                case VRMovementBack:
                {
                    ss << "walkingOptions=" << "VRMovementBack";
                    break;
                }
                case VRMovementForward:
                {
                    ss << "walkingOptions=" << "VRMovementForward";
                    break;
                }
                case VRMovementLeft:
                {
                    ss << "walkingOptions=" << "VRMovementLeft";
                    break;
                }
                case VRMovementRight:
                {
                    ss << "walkingOptions=" << "VRMovementRight";
                    break;
                }
                case VRMovementRotateLeft:
                {
                    ss << "walkingOptions=" << "VRMovementRotateLeft";
                    break;
                }
                case VRMovementRotateRight:
                {
                    ss << "walkingOptions=" << "VRMovementRotateRight";
                    break;
                }
            }
            return ss.str();
#endif /// USE_WB_GU_VR_TELEOP_VULKAN_CONTROL_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_GU_VR_TELEOP_VULKAN_CONTROL_C_CONVERSION
            char buffer[GU_VR_TELEOP_VULKAN_CONTROL_TO_STRING_BUFFER_SIZE];
            wb_gu_vr_teleop_vulkan_control_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            switch (this->movementOptions()) {
                case VRResting:
                {
                    ss << "VRResting";
                    break;
                }
                case VRStanding:
                {
                    ss << "VRStanding";
                    break;
                }
                case VRWalking:
                {
                    ss << "VRWalking";
                    break;
                }
            }
            ss << ", ";
            switch (this->walkingOptions()) {
                case NUM_VR_CONTROL_WALKING_OPTIONS:
                {
                    ss << "NUM_VR_CONTROL_WALKING_OPTIONS";
                    break;
                }
                case VRMovementBack:
                {
                    ss << "VRMovementBack";
                    break;
                }
                case VRMovementForward:
                {
                    ss << "VRMovementForward";
                    break;
                }
                case VRMovementLeft:
                {
                    ss << "VRMovementLeft";
                    break;
                }
                case VRMovementRight:
                {
                    ss << "VRMovementRight";
                    break;
                }
                case VRMovementRotateLeft:
                {
                    ss << "VRMovementRotateLeft";
                    break;
                }
                case VRMovementRotateRight:
                {
                    ss << "VRMovementRotateRight";
                    break;
                }
            }
            return ss.str();
#endif /// USE_WB_GU_VR_TELEOP_VULKAN_CONTROL_C_CONVERSION
        }

#ifdef USE_WB_GU_VR_TELEOP_VULKAN_CONTROL_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_gu_vr_teleop_vulkan_control_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > GU_VR_TELEOP_VULKAN_CONTROL_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[GU_VR_TELEOP_VULKAN_CONTROL_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[16];
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
                    if (0 == strcmp("movementOptions", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("walkingOptions", key)) {
                        varIndex = 1;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        if (strcmp("VRResting", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_movementOptions(VRResting);
#pragma clang diagnostic pop
                        } else if (strcmp("VRStanding", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_movementOptions(VRStanding);
#pragma clang diagnostic pop
                        } else if (strcmp("VRWalking", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_movementOptions(VRWalking);
#pragma clang diagnostic pop
                        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_movementOptions(static_cast<enum VRControlMovementOptions>(atoi(var_str)));
#pragma clang diagnostic pop
                        }
                        break;
                    }
                    case 1:
                    {
                        if (strcmp("NUM_VR_CONTROL_WALKING_OPTIONS", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(NUM_VR_CONTROL_WALKING_OPTIONS);
#pragma clang diagnostic pop
                        } else if (strcmp("VRMovementBack", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(VRMovementBack);
#pragma clang diagnostic pop
                        } else if (strcmp("VRMovementForward", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(VRMovementForward);
#pragma clang diagnostic pop
                        } else if (strcmp("VRMovementLeft", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(VRMovementLeft);
#pragma clang diagnostic pop
                        } else if (strcmp("VRMovementRight", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(VRMovementRight);
#pragma clang diagnostic pop
                        } else if (strcmp("VRMovementRotateLeft", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(VRMovementRotateLeft);
#pragma clang diagnostic pop
                        } else if (strcmp("VRMovementRotateRight", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(VRMovementRotateRight);
#pragma clang diagnostic pop
                        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkingOptions(static_cast<enum VRControlWalkingOptions>(atoi(var_str)));
#pragma clang diagnostic pop
                        }
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_GU_VR_TELEOP_VULKAN_CONTROL_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// GuVrTeleopVulkanControl_DEFINED
