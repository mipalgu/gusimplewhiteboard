/*
 * file VisionDetectionBalls.h
 *
 * This file was generated by classgenerator from vision_detection_balls.gen.
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

#ifndef VisionDetectionBalls_DEFINED
#define VisionDetectionBalls_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_vision_detection_balls.h"

#include <gusimplewhiteboard/typeClassDefs/VisionDetectionBall.h>

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_vision_detection_balls`.
     */
    class VisionDetectionBalls: public wb_vision_detection_balls {

    public:

        /**
         * Create a new `VisionDetectionBalls`.
         */
        VisionDetectionBalls(uint64_t frameNumber = 0, struct wb_vision_detection_ball balls[2] = NULLPTR) {
            set_frameNumber(frameNumber);
            if (balls != NULLPTR) {
                std::memcpy(this->_balls, balls, VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_vision_detection_ball));
            } else {
                struct wb_vision_detection_ball balls_temp[VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE] = {wb_vision_detection_ball(), wb_vision_detection_ball()};
                std::memcpy(this->_balls, balls_temp, VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_vision_detection_ball));
            }
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionBalls(const VisionDetectionBalls &other): wb_vision_detection_balls() {
            set_frameNumber(other.frameNumber());
            if (other.balls() != NULLPTR) {
                std::memcpy(this->_balls, other.balls(), VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_vision_detection_ball));
            }
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionBalls(const struct wb_vision_detection_balls &other): wb_vision_detection_balls() {
            set_frameNumber(other.frameNumber());
            if (other.balls() != NULLPTR) {
                std::memcpy(this->_balls, other.balls(), VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_vision_detection_ball));
            }
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionBalls &operator = (const VisionDetectionBalls &other) {
            set_frameNumber(other.frameNumber());
            if (other.balls() != NULLPTR) {
                std::memcpy(this->_balls, other.balls(), VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_vision_detection_ball));
            }
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionBalls &operator = (const struct wb_vision_detection_balls &other) {
            set_frameNumber(other.frameNumber());
            if (other.balls() != NULLPTR) {
                std::memcpy(this->_balls, other.balls(), VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_vision_detection_ball));
            }
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        VisionDetectionBalls(const std::string &str) {
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_VISION_DETECTION_BALLS_C_CONVERSION
            char buffer[VISION_DETECTION_BALLS_DESC_BUFFER_SIZE];
            wb_vision_detection_balls_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "frameNumber=" << this->frameNumber();
            ss << ", ";
            bool balls_first = true;
            ss << "balls={";
            for (int i = 0; i < VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE; i++) {
                guWhiteboard::VisionDetectionBall * balls_cast = const_cast<guWhiteboard::VisionDetectionBall *>(static_cast<const guWhiteboard::VisionDetectionBall *>(&this->balls(i)));
                ss << (balls_first ? "" : ", ") << "{" << balls_cast->description() << "}";
                balls_first = false;
            }
            ss << "}";
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_BALLS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_VISION_DETECTION_BALLS_C_CONVERSION
            char buffer[VISION_DETECTION_BALLS_TO_STRING_BUFFER_SIZE];
            wb_vision_detection_balls_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->frameNumber();
            ss << ", ";
            bool balls_first = true;
            ss << "{";
            for (int i = 0; i < VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE; i++) {
                guWhiteboard::VisionDetectionBall * balls_cast = const_cast<guWhiteboard::VisionDetectionBall *>(static_cast<const guWhiteboard::VisionDetectionBall *>(&this->balls(i)));
                ss << (balls_first ? "" : ", ") << "{" << balls_cast->to_string() << "}";
                balls_first = false;
            }
            ss << "}";
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_BALLS_C_CONVERSION
        }

#ifdef USE_WB_VISION_DETECTION_BALLS_C_CONVERSION
        void from_string(const std::string &str) {
            wb_vision_detection_balls_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1) {
                return;
            }
            char var_str_buffer[VISION_DETECTION_BALLS_TO_STRING_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("frameNumber", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("balls", key)) {
                        varIndex = 1;
                    }
                }
                switch (varIndex) {
                    case 0:
                    {
                        this->set_frameNumber(static_cast<uint64_t>(atoll(var_str)));
                        break;
                    }
                    case 1:
                    {
                        int restartIndex = index;
                        index = lastBrace + 1;
                        startVar = index;
                        startKey = startVar;
                        endKey = -1;
                        bracecount = 0;
                        for (int balls_0_index = 0; balls_0_index < VISION_DETECTION_BALLS_BALLS_ARRAY_SIZE; balls_0_index++) {
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
                            VisionDetectionBall balls_0_temp = VisionDetectionBall();
                            balls_0_temp.from_string(var_str);
                            struct wb_vision_detection_ball balls_0 = balls_0_temp;
                            this->set_balls(balls_0, balls_0_index);;
                        }
                        index = restartIndex;
                        break;
                    }
                }
                varIndex++;
            } while(index < length);
#endif /// USE_WB_VISION_DETECTION_BALLS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard
#endif /// VisionDetectionBalls_DEFINED
