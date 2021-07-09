/*
 * file AdjustPositionConfidence.h
 *
 * This file was generated by classgenerator from adjust_position_confidence.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2021 Morgan McColl. All rights reserved.
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
 *        This product includes software developed by Morgan McColl.
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

#ifndef guWhiteboard_AdjustPositionConfidence_h
#define guWhiteboard_AdjustPositionConfidence_h

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_adjust_position_confidence.h"

#undef guWhiteboard_AdjustPositionConfidence_DEFINED
#define guWhiteboard_AdjustPositionConfidence_DEFINED

#undef AdjustPositionConfidence_DEFINED
#define AdjustPositionConfidence_DEFINED

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_adjust_position_confidence`.
     */
    class AdjustPositionConfidence: public wb_adjust_position_confidence {

    private:

        /**
         * Set the members of the class.
         */
        void init(int8_t t_adjustment = 0) {
            set_adjustment(t_adjustment);
        }

    public:

        /**
         * Create a new `AdjustPositionConfidence`.
         */
        AdjustPositionConfidence(int8_t t_adjustment = 0) {
            this->init(t_adjustment);
        }

        /**
         * Copy Constructor.
         */
        AdjustPositionConfidence(const AdjustPositionConfidence &t_other): wb_adjust_position_confidence() {
            this->init(t_other.adjustment());
        }

        /**
         * Copy Constructor.
         */
        AdjustPositionConfidence(const struct wb_adjust_position_confidence &t_other): wb_adjust_position_confidence() {
            this->init(t_other.adjustment);
        }

        /**
         * Copy Assignment Operator.
         */
        AdjustPositionConfidence &operator = (const AdjustPositionConfidence &t_other) {
            this->init(t_other.adjustment());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        AdjustPositionConfidence &operator = (const struct wb_adjust_position_confidence &t_other) {
            this->init(t_other.adjustment);
            return *this;
        }

        bool operator ==(const AdjustPositionConfidence &t_other) const
        {
            return adjustment() == t_other.adjustment();
        }

        bool operator !=(const AdjustPositionConfidence &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_adjust_position_confidence &t_other) const
        {
            return *this == AdjustPositionConfidence(t_other);
        }

        bool operator !=(const wb_adjust_position_confidence &t_other) const
        {
            return !(*this == t_other);
        }

        int8_t & adjustment()
        {
            return wb_adjust_position_confidence::adjustment;
        }

        const int8_t & adjustment() const
        {
            return wb_adjust_position_confidence::adjustment;
        }

        void set_adjustment(const int8_t &t_newValue)
        {
            wb_adjust_position_confidence::adjustment = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        AdjustPositionConfidence(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_ADJUST_POSITION_CONFIDENCE_C_CONVERSION
            char buffer[WB_ADJUST_POSITION_CONFIDENCE_DESC_BUFFER_SIZE];
            wb_adjust_position_confidence_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "adjustment=" << static_cast<signed>(this->adjustment());
            return ss.str();
#endif /// USE_WB_ADJUST_POSITION_CONFIDENCE_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_ADJUST_POSITION_CONFIDENCE_C_CONVERSION
            char buffer[WB_ADJUST_POSITION_CONFIDENCE_TO_STRING_BUFFER_SIZE];
            wb_adjust_position_confidence_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << static_cast<signed>(this->adjustment());
            return ss.str();
#endif /// USE_WB_ADJUST_POSITION_CONFIDENCE_C_CONVERSION
        }

#ifdef USE_WB_ADJUST_POSITION_CONFIDENCE_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_adjust_position_confidence_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > WB_ADJUST_POSITION_CONFIDENCE_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[WB_ADJUST_POSITION_CONFIDENCE_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[11];
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
                    if (0 == strcmp("adjustment", key)) {
                        varIndex = 0;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_adjustment(static_cast<int8_t>(atoi(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_ADJUST_POSITION_CONFIDENCE_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// guWhiteboard_AdjustPositionConfidence_h
