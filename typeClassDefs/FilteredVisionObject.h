/*
 * file FilteredVisionObject.h
 *
 * This file was generated by classgenerator from Filtered_Vision_Object.txt.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2020 Vlad Estivill-Castro. All rights reserved.
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
 *        This product includes software developed by Vlad Estivill-Castro.
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

#ifndef FilteredVisionObject_DEFINED
#define FilteredVisionObject_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_filtered_vision_object.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_filtered_vision_object`.
     */
    class FilteredVisionObject: public wb_filtered_vision_object {

    private:

        /**
         * Set the members of the class.
         */
        void init(uint64_t t_visibilityHistory = 0, int32_t t_frameCounter = 0, int16_t t_distance = 0, int16_t t_x = 0, int16_t t_y = 0, int16_t t_yaw = 0, int16_t t_ray_angle = 0, bool t_isVisible = true, bool t_pad1 = true) {
            set_visibilityHistory(t_visibilityHistory);
            set_frameCounter(t_frameCounter);
            set_distance(t_distance);
            set_x(t_x);
            set_y(t_y);
            set_yaw(t_yaw);
            set_ray_angle(t_ray_angle);
            set_isVisible(t_isVisible);
            set_pad1(t_pad1);
        }

    public:

        /**
         * Create a new `FilteredVisionObject`.
         */
        FilteredVisionObject(uint64_t t_visibilityHistory = 0, int32_t t_frameCounter = 0, int16_t t_distance = 0, int16_t t_x = 0, int16_t t_y = 0, int16_t t_yaw = 0, int16_t t_ray_angle = 0, bool t_isVisible = true, bool t_pad1 = true) {
            this->init(t_visibilityHistory, t_frameCounter, t_distance, t_x, t_y, t_yaw, t_ray_angle, t_isVisible, t_pad1);
        }

        /**
         * Copy Constructor.
         */
        FilteredVisionObject(const FilteredVisionObject &t_other): wb_filtered_vision_object() {
            this->init(t_other.visibilityHistory(), t_other.frameCounter(), t_other.distance(), t_other.x(), t_other.y(), t_other.yaw(), t_other.ray_angle(), t_other.isVisible(), t_other.pad1());
        }

        /**
         * Copy Constructor.
         */
        FilteredVisionObject(const struct wb_filtered_vision_object &t_other): wb_filtered_vision_object() {
            this->init(t_other.visibilityHistory, t_other.frameCounter, t_other.distance, t_other.x, t_other.y, t_other.yaw, t_other.ray_angle, t_other.isVisible, t_other.pad1);
        }

        /**
         * Copy Assignment Operator.
         */
        FilteredVisionObject &operator = (const FilteredVisionObject &t_other) {
            this->init(t_other.visibilityHistory(), t_other.frameCounter(), t_other.distance(), t_other.x(), t_other.y(), t_other.yaw(), t_other.ray_angle(), t_other.isVisible(), t_other.pad1());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        FilteredVisionObject &operator = (const struct wb_filtered_vision_object &t_other) {
            this->init(t_other.visibilityHistory, t_other.frameCounter, t_other.distance, t_other.x, t_other.y, t_other.yaw, t_other.ray_angle, t_other.isVisible, t_other.pad1);
            return *this;
        }

        bool operator ==(const FilteredVisionObject &t_other) const
        {
            return visibilityHistory() == t_other.visibilityHistory()
                && frameCounter() == t_other.frameCounter()
                && distance() == t_other.distance()
                && x() == t_other.x()
                && y() == t_other.y()
                && yaw() == t_other.yaw()
                && ray_angle() == t_other.ray_angle()
                && isVisible() == t_other.isVisible()
                && pad1() == t_other.pad1();
        }

        bool operator !=(const FilteredVisionObject &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_filtered_vision_object &t_other) const
        {
            return *this == FilteredVisionObject(t_other);
        }

        bool operator !=(const wb_filtered_vision_object &t_other) const
        {
            return !(*this == t_other);
        }

        uint64_t & visibilityHistory()
        {
            return wb_filtered_vision_object::visibilityHistory;
        }

        const uint64_t & visibilityHistory() const
        {
            return wb_filtered_vision_object::visibilityHistory;
        }

        void set_visibilityHistory(const uint64_t &t_newValue)
        {
            wb_filtered_vision_object::visibilityHistory = t_newValue;
        }

        int32_t & frameCounter()
        {
            return wb_filtered_vision_object::frameCounter;
        }

        const int32_t & frameCounter() const
        {
            return wb_filtered_vision_object::frameCounter;
        }

        void set_frameCounter(const int32_t &t_newValue)
        {
            wb_filtered_vision_object::frameCounter = t_newValue;
        }

        int16_t & distance()
        {
            return wb_filtered_vision_object::distance;
        }

        const int16_t & distance() const
        {
            return wb_filtered_vision_object::distance;
        }

        void set_distance(const int16_t &t_newValue)
        {
            wb_filtered_vision_object::distance = t_newValue;
        }

        int16_t & x()
        {
            return wb_filtered_vision_object::x;
        }

        const int16_t & x() const
        {
            return wb_filtered_vision_object::x;
        }

        void set_x(const int16_t &t_newValue)
        {
            wb_filtered_vision_object::x = t_newValue;
        }

        int16_t & y()
        {
            return wb_filtered_vision_object::y;
        }

        const int16_t & y() const
        {
            return wb_filtered_vision_object::y;
        }

        void set_y(const int16_t &t_newValue)
        {
            wb_filtered_vision_object::y = t_newValue;
        }

        int16_t & yaw()
        {
            return wb_filtered_vision_object::yaw;
        }

        const int16_t & yaw() const
        {
            return wb_filtered_vision_object::yaw;
        }

        void set_yaw(const int16_t &t_newValue)
        {
            wb_filtered_vision_object::yaw = t_newValue;
        }

        int16_t & ray_angle()
        {
            return wb_filtered_vision_object::ray_angle;
        }

        const int16_t & ray_angle() const
        {
            return wb_filtered_vision_object::ray_angle;
        }

        void set_ray_angle(const int16_t &t_newValue)
        {
            wb_filtered_vision_object::ray_angle = t_newValue;
        }

        bool & isVisible()
        {
            return wb_filtered_vision_object::isVisible;
        }

        const bool & isVisible() const
        {
            return wb_filtered_vision_object::isVisible;
        }

        void set_isVisible(const bool &t_newValue)
        {
            wb_filtered_vision_object::isVisible = t_newValue;
        }

        bool & pad1()
        {
            return wb_filtered_vision_object::pad1;
        }

        const bool & pad1() const
        {
            return wb_filtered_vision_object::pad1;
        }

        void set_pad1(const bool &t_newValue)
        {
            wb_filtered_vision_object::pad1 = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        FilteredVisionObject(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_FILTERED_VISION_OBJECT_C_CONVERSION
            char buffer[FILTERED_VISION_OBJECT_DESC_BUFFER_SIZE];
            wb_filtered_vision_object_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "visibilityHistory=" << this->visibilityHistory();
            ss << ", ";
            ss << "frameCounter=" << static_cast<signed>(this->frameCounter());
            ss << ", ";
            ss << "distance=" << static_cast<signed>(this->distance());
            ss << ", ";
            ss << "x=" << static_cast<signed>(this->x());
            ss << ", ";
            ss << "y=" << static_cast<signed>(this->y());
            ss << ", ";
            ss << "yaw=" << static_cast<signed>(this->yaw());
            ss << ", ";
            ss << "ray_angle=" << static_cast<signed>(this->ray_angle());
            ss << ", ";
            ss << "isVisible=" << (this->isVisible() ? "true" : "false");
            ss << ", ";
            ss << "pad1=" << (this->pad1() ? "true" : "false");
            return ss.str();
#endif /// USE_WB_FILTERED_VISION_OBJECT_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_FILTERED_VISION_OBJECT_C_CONVERSION
            char buffer[FILTERED_VISION_OBJECT_TO_STRING_BUFFER_SIZE];
            wb_filtered_vision_object_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->visibilityHistory();
            ss << ", ";
            ss << static_cast<signed>(this->frameCounter());
            ss << ", ";
            ss << static_cast<signed>(this->distance());
            ss << ", ";
            ss << static_cast<signed>(this->x());
            ss << ", ";
            ss << static_cast<signed>(this->y());
            ss << ", ";
            ss << static_cast<signed>(this->yaw());
            ss << ", ";
            ss << static_cast<signed>(this->ray_angle());
            ss << ", ";
            ss << (this->isVisible() ? "true" : "false");
            ss << ", ";
            ss << (this->pad1() ? "true" : "false");
            return ss.str();
#endif /// USE_WB_FILTERED_VISION_OBJECT_C_CONVERSION
        }

#ifdef USE_WB_FILTERED_VISION_OBJECT_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_filtered_vision_object_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > FILTERED_VISION_OBJECT_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[FILTERED_VISION_OBJECT_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("visibilityHistory", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("frameCounter", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("distance", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("x", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("y", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("yaw", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("ray_angle", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("isVisible", key)) {
                        varIndex = 7;
                    } else if (0 == strcmp("pad1", key)) {
                        varIndex = 8;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
#ifdef __APPLE__
                        this->set_visibilityHistory(static_cast<uint64_t>(atoll(var_str)));
#else
                        this->set_visibilityHistory(static_cast<uint64_t>(atol(var_str)));
#endif
                        break;
                    }
                    case 1:
                    {
                        this->set_frameCounter(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_distance(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_x(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_y(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_yaw(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_ray_angle(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 7:
                    {
                        this->set_isVisible(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 8:
                    {
                        this->set_pad1(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_FILTERED_VISION_OBJECT_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// FilteredVisionObject_DEFINED
