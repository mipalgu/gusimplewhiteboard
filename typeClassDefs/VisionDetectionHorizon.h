/*
 * file VisionDetectionHorizon.h
 *
 * This file was generated by classgenerator from vision_detection_horizon.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 10:58, 27/07/2018.
 * Copyright © 2018 Carl Lusty. All rights reserved.
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

#ifndef VisionDetectionHorizon_DEFINED
#define VisionDetectionHorizon_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_vision_detection_horizon.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_vision_detection_horizon`.
     */
    class VisionDetectionHorizon: public wb_vision_detection_horizon {

    public:

        /**
         * Create a new `VisionDetectionHorizon`.
         */
        VisionDetectionHorizon(enum HorizonOptions horizonType = HorizonFailed, int16_t lhp_x = 0, int32_t lhp_y = 0, int16_t rhp_x = 0, int32_t rhp_y = 0, int16_t chp_x = 0, int32_t chp_y = 0) {
            set_horizonType(horizonType);
            set_lhp_x(lhp_x);
            set_lhp_y(lhp_y);
            set_rhp_x(rhp_x);
            set_rhp_y(rhp_y);
            set_chp_x(chp_x);
            set_chp_y(chp_y);
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionHorizon(const VisionDetectionHorizon &other): wb_vision_detection_horizon() {
            set_horizonType(other.horizonType());
            set_lhp_x(other.lhp_x());
            set_lhp_y(other.lhp_y());
            set_rhp_x(other.rhp_x());
            set_rhp_y(other.rhp_y());
            set_chp_x(other.chp_x());
            set_chp_y(other.chp_y());
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionHorizon(const struct wb_vision_detection_horizon &other): wb_vision_detection_horizon() {
            set_horizonType(other.horizonType());
            set_lhp_x(other.lhp_x());
            set_lhp_y(other.lhp_y());
            set_rhp_x(other.rhp_x());
            set_rhp_y(other.rhp_y());
            set_chp_x(other.chp_x());
            set_chp_y(other.chp_y());
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionHorizon &operator = (const VisionDetectionHorizon &other) {
            set_horizonType(other.horizonType());
            set_lhp_x(other.lhp_x());
            set_lhp_y(other.lhp_y());
            set_rhp_x(other.rhp_x());
            set_rhp_y(other.rhp_y());
            set_chp_x(other.chp_x());
            set_chp_y(other.chp_y());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionHorizon &operator = (const struct wb_vision_detection_horizon &other) {
            set_horizonType(other.horizonType());
            set_lhp_x(other.lhp_x());
            set_lhp_y(other.lhp_y());
            set_rhp_x(other.rhp_x());
            set_rhp_y(other.rhp_y());
            set_chp_x(other.chp_x());
            set_chp_y(other.chp_y());
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        VisionDetectionHorizon(const std::string &str) { wb_vision_detection_horizon_from_string(this, str.c_str()); }

        std::string description() {
#ifdef USE_WB_VISION_DETECTION_HORIZON_C_CONVERSION
            char buffer[VISION_DETECTION_HORIZON_DESC_BUFFER_SIZE];
            wb_vision_detection_horizon_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "horizonType=" << this->horizonType();
            ss << ", ";
            ss << "lhp_x=" << static_cast<signed>(this->lhp_x());
            ss << ", ";
            ss << "lhp_y=" << static_cast<signed>(this->lhp_y());
            ss << ", ";
            ss << "rhp_x=" << static_cast<signed>(this->rhp_x());
            ss << ", ";
            ss << "rhp_y=" << static_cast<signed>(this->rhp_y());
            ss << ", ";
            ss << "chp_x=" << static_cast<signed>(this->chp_x());
            ss << ", ";
            ss << "chp_y=" << static_cast<signed>(this->chp_y());
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_HORIZON_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_VISION_DETECTION_HORIZON_C_CONVERSION
            char buffer[VISION_DETECTION_HORIZON_TO_STRING_BUFFER_SIZE];
            wb_vision_detection_horizon_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->horizonType();
            ss << ", ";
            ss << static_cast<signed>(this->lhp_x());
            ss << ", ";
            ss << static_cast<signed>(this->lhp_y());
            ss << ", ";
            ss << static_cast<signed>(this->rhp_x());
            ss << ", ";
            ss << static_cast<signed>(this->rhp_y());
            ss << ", ";
            ss << static_cast<signed>(this->chp_x());
            ss << ", ";
            ss << static_cast<signed>(this->chp_y());
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_HORIZON_C_CONVERSION
        }

#ifdef USE_WB_VISION_DETECTION_HORIZON_C_CONVERSION
        void from_string(const std::string &str) {
            wb_vision_detection_horizon_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1) {
                return;
            }
            char var_str_buffer[VISION_DETECTION_HORIZON_TO_STRING_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[12];
            char* key = &key_buffer[0];
            int bracecount = 0;
            int lastBrace = -1;
            int startVar = 0;
            int index = 0;
            int startKey = 0;
            int endKey = 0;
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
                        if (bracecount == 1) {
                            lastBrace = i;
                        }
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
                if (key != NULLPTR) {
                    if (0 == strcmp("horizonType", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("lhp_x", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("lhp_y", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("rhp_x", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("rhp_y", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("chp_x", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("chp_y", key)) {
                        varIndex = 6;
                    }
                }
                switch (varIndex) {
                    case 0:
                    {
                        this->set_horizonType(static_cast<enum HorizonOptions>(atoi(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_lhp_x(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_lhp_y(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_rhp_x(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_rhp_y(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_chp_x(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_chp_y(static_cast<int32_t>(atoi(var_str)));
                        break;
                    }
                }
                varIndex++;
            } while(index < length);
#endif /// USE_WB_VISION_DETECTION_HORIZON_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard
#endif /// VisionDetectionHorizon_DEFINED
