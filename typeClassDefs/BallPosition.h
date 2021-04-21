/*
 * file BallPosition.h
 *
 * This file was generated by classgenerator from ball_position.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2021 Callum McColl. All rights reserved.
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
 *        This product includes software developed by Callum McColl.
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

#ifndef BallPosition_DEFINED
#define BallPosition_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_ball_position.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_ball_position`.
     */
    class BallPosition: public wb_ball_position {

    private:

        /**
         * Set the members of the class.
         */
        void init(int16_t t_x = 0, int16_t t_y = 0, int16_t t_pitchInDegrees = 0, int16_t t_yawInDegrees = 0, int16_t t_rollInDegrees = 0, uint8_t t_confidence = 0) {
            set_x(t_x);
            set_y(t_y);
            set_pitchInDegrees(t_pitchInDegrees);
            set_yawInDegrees(t_yawInDegrees);
            set_rollInDegrees(t_rollInDegrees);
            set_confidence(t_confidence);
        }

    public:

        /**
         * Create a new `BallPosition`.
         */
        BallPosition(int16_t t_x = 0, int16_t t_y = 0, int16_t t_pitchInDegrees = 0, int16_t t_yawInDegrees = 0, int16_t t_rollInDegrees = 0, uint8_t t_confidence = 0) {
            this->init(t_x, t_y, t_pitchInDegrees, t_yawInDegrees, t_rollInDegrees, t_confidence);
        }

        /**
         * Copy Constructor.
         */
        BallPosition(const BallPosition &t_other): wb_ball_position() {
            this->init(t_other.x(), t_other.y(), t_other.pitchInDegrees(), t_other.yawInDegrees(), t_other.rollInDegrees(), t_other.confidence());
        }

        /**
         * Copy Constructor.
         */
        BallPosition(const struct wb_ball_position &t_other): wb_ball_position() {
            this->init(t_other.x, t_other.y, t_other.pitchInDegrees, t_other.yawInDegrees, t_other.rollInDegrees, t_other.confidence);
        }

        /**
         * Copy Assignment Operator.
         */
        BallPosition &operator = (const BallPosition &t_other) {
            this->init(t_other.x(), t_other.y(), t_other.pitchInDegrees(), t_other.yawInDegrees(), t_other.rollInDegrees(), t_other.confidence());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        BallPosition &operator = (const struct wb_ball_position &t_other) {
            this->init(t_other.x, t_other.y, t_other.pitchInDegrees, t_other.yawInDegrees, t_other.rollInDegrees, t_other.confidence);
            return *this;
        }

        bool operator ==(const BallPosition &t_other) const
        {
            return x() == t_other.x()
                && y() == t_other.y()
                && pitchInDegrees() == t_other.pitchInDegrees()
                && yawInDegrees() == t_other.yawInDegrees()
                && rollInDegrees() == t_other.rollInDegrees()
                && confidence() == t_other.confidence();
        }

        bool operator !=(const BallPosition &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_ball_position &t_other) const
        {
            return *this == BallPosition(t_other);
        }

        bool operator !=(const wb_ball_position &t_other) const
        {
            return !(*this == t_other);
        }

        int16_t & x()
        {
            return wb_ball_position::x;
        }

        const int16_t & x() const
        {
            return wb_ball_position::x;
        }

        void set_x(const int16_t &t_newValue)
        {
            wb_ball_position::x = t_newValue;
        }

        int16_t & y()
        {
            return wb_ball_position::y;
        }

        const int16_t & y() const
        {
            return wb_ball_position::y;
        }

        void set_y(const int16_t &t_newValue)
        {
            wb_ball_position::y = t_newValue;
        }

        int16_t & pitchInDegrees()
        {
            return wb_ball_position::pitchInDegrees;
        }

        const int16_t & pitchInDegrees() const
        {
            return wb_ball_position::pitchInDegrees;
        }

        void set_pitchInDegrees(const int16_t &t_newValue)
        {
            wb_ball_position::pitchInDegrees = t_newValue;
        }

        int16_t & yawInDegrees()
        {
            return wb_ball_position::yawInDegrees;
        }

        const int16_t & yawInDegrees() const
        {
            return wb_ball_position::yawInDegrees;
        }

        void set_yawInDegrees(const int16_t &t_newValue)
        {
            wb_ball_position::yawInDegrees = t_newValue;
        }

        int16_t & rollInDegrees()
        {
            return wb_ball_position::rollInDegrees;
        }

        const int16_t & rollInDegrees() const
        {
            return wb_ball_position::rollInDegrees;
        }

        void set_rollInDegrees(const int16_t &t_newValue)
        {
            wb_ball_position::rollInDegrees = t_newValue;
        }

        uint8_t & confidence()
        {
            return wb_ball_position::confidence;
        }

        const uint8_t & confidence() const
        {
            return wb_ball_position::confidence;
        }

        void set_confidence(const uint8_t &t_newValue)
        {
            wb_ball_position::confidence = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        BallPosition(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_BALL_POSITION_C_CONVERSION
            char buffer[BALL_POSITION_DESC_BUFFER_SIZE];
            wb_ball_position_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "x=" << static_cast<signed>(this->x());
            ss << ", ";
            ss << "y=" << static_cast<signed>(this->y());
            ss << ", ";
            ss << "pitchInDegrees=" << static_cast<signed>(this->pitchInDegrees());
            ss << ", ";
            ss << "yawInDegrees=" << static_cast<signed>(this->yawInDegrees());
            ss << ", ";
            ss << "rollInDegrees=" << static_cast<signed>(this->rollInDegrees());
            ss << ", ";
            ss << "confidence=" << static_cast<unsigned>(this->confidence());
            return ss.str();
#endif /// USE_WB_BALL_POSITION_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_BALL_POSITION_C_CONVERSION
            char buffer[BALL_POSITION_TO_STRING_BUFFER_SIZE];
            wb_ball_position_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << static_cast<signed>(this->x());
            ss << ", ";
            ss << static_cast<signed>(this->y());
            ss << ", ";
            ss << static_cast<signed>(this->pitchInDegrees());
            ss << ", ";
            ss << static_cast<signed>(this->yawInDegrees());
            ss << ", ";
            ss << static_cast<signed>(this->rollInDegrees());
            ss << ", ";
            ss << static_cast<unsigned>(this->confidence());
            return ss.str();
#endif /// USE_WB_BALL_POSITION_C_CONVERSION
        }

#ifdef USE_WB_BALL_POSITION_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_ball_position_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > BALL_POSITION_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[BALL_POSITION_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("x", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("y", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("pitchInDegrees", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("yawInDegrees", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("rollInDegrees", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("confidence", key)) {
                        varIndex = 5;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_x(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_y(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_pitchInDegrees(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_yawInDegrees(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_rollInDegrees(static_cast<int16_t>(atoi(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_confidence(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_BALL_POSITION_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

        /**
         *  \brief Converts BallPosition.confidence() to its corresponding floating point
         *  percentage representation.
         *
         *  \returns A double representing BallPosition.confidence() as a percentage
         *  where 0 represents 0.0 and 255 represents 1.0.
         */
        double confidencePercent() const
        {
            return static_cast<double>(strct.confidence - 0) / static_cast<double>(255 - 0);
        }

        /**
         *  \brief Converts and stores a percentage floating point value in
         *  BallPosition.confidence.
         *
         *  \param[in] newValue The floating point percentage value which will be
         *  converted to the integer representations such that 0.0 equals 0 and
         *  1.0 equals 255.
         */
        void set_confidencePercent(const double newValue)
        {
            set_confidence(static_cast<uint8_t>(round(newValue * static_cast<double>(255 - 0)) + 0));
        }
    };

} /// namespace guWhiteboard

#endif /// BallPosition_DEFINED
