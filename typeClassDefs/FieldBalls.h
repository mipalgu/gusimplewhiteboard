/*
 * file FieldBalls.h
 *
 * This file was generated by classgenerator from fieldBalls.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 05:16, 28/04/2018.
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

#ifndef FieldBalls_DEFINED
#define FieldBalls_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include "gu_util.h"
#include "wb_field_balls.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_field_balls`.
     */
    class FieldBalls: public wb_field_balls {

    public:

        /**
         * Create a new `FieldBalls`.
         */
        FieldBalls(struct wb_field_ball balls[2] = NULL) {
            if (balls != NULL) {
                std::memcpy(this->_balls, balls, FIELDBALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_field_ball));
            } else {
                struct wb_field_ball balls_temp[FIELDBALLS_BALLS_ARRAY_SIZE] = { wb_field_ball(), wb_field_ball() };
                std::memcpy(this->_balls, balls_temp, FIELDBALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_field_ball));
            }
        }

        /**
         * Copy Constructor.
         */
        FieldBalls(const FieldBalls &other): wb_field_balls() {
            if (other.balls() != NULL) {
                std::memcpy(this->_balls, other.balls(), FIELDBALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_field_ball));
            }
        }

        /**
         * Copy Assignment Operator.
         */
        FieldBalls &operator = (const FieldBalls &other) {
            if (other.balls() != NULL) {
                std::memcpy(this->_balls, other.balls(), FIELDBALLS_BALLS_ARRAY_SIZE * sizeof (struct wb_field_ball));
            }
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        FieldBalls(const std::string &str) { wb_field_balls_from_string(this, str.c_str()); }

        std::string description() {
#ifdef USE_WB_FIELD_BALLS_C_CONVERSION
            char buffer[FIELDBALLS_DESC_BUFFER_SIZE];
            wb_field_balls_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;

            return ss.str();
#endif /// USE_WB_FIELD_BALLS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_FIELD_BALLS_C_CONVERSION
            char buffer[FIELDBALLS_TO_STRING_BUFFER_SIZE];
            wb_field_balls_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;

            return ss.str();
#endif /// USE_WB_FIELD_BALLS_C_CONVERSION
        }

        void from_string(const std::string &str) {
#ifdef USE_WB_FIELDBALLS_C_CONVERSION
            wb_field_balls_from_string(this, str.c_str());
#else
            char var[255];

#endif /// USE_WB_FIELDBALLS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard
#endif /// FieldBalls_DEFINED
