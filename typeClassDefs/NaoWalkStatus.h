/*
 * file NaoWalkStatus.h
 *
 * This file was generated by classgenerator from naoWalkStatus.gen.
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

#ifndef NaoWalkStatus_DEFINED
#define NaoWalkStatus_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_nao_walk_status.h"

#include "Odometry.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_nao_walk_status`.
     */
    class NaoWalkStatus: public wb_nao_walk_status {

    private:

        /**
         * Set the members of the class.
         */
        void init(enum WalkEngineState t_walkEngineState = wes_Disconnected, struct wb_odometry t_odometry = wb_odometry(), uint8_t t_odometryResetCounter = 0) {
            set_walkEngineState(t_walkEngineState);
            set_odometry(t_odometry);
            set_odometryResetCounter(t_odometryResetCounter);
        }

    public:

        /**
         * Create a new `NaoWalkStatus`.
         */
        NaoWalkStatus(enum WalkEngineState t_walkEngineState = wes_Disconnected, struct wb_odometry t_odometry = wb_odometry(), uint8_t t_odometryResetCounter = 0) {
            this->init(t_walkEngineState, t_odometry, t_odometryResetCounter);
        }

        /**
         * Copy Constructor.
         */
        NaoWalkStatus(const NaoWalkStatus &t_other): wb_nao_walk_status() {
            this->init(t_other.walkEngineState(), t_other.odometry(), t_other.odometryResetCounter());
        }

        /**
         * Copy Constructor.
         */
        NaoWalkStatus(const struct wb_nao_walk_status &t_other): wb_nao_walk_status() {
            this->init(t_other.walkEngineState, t_other.odometry, t_other.odometryResetCounter);
        }

        /**
         * Copy Assignment Operator.
         */
        NaoWalkStatus &operator = (const NaoWalkStatus &t_other) {
            this->init(t_other.walkEngineState(), t_other.odometry(), t_other.odometryResetCounter());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        NaoWalkStatus &operator = (const struct wb_nao_walk_status &t_other) {
            this->init(t_other.walkEngineState, t_other.odometry, t_other.odometryResetCounter);
            return *this;
        }

        bool operator ==(const NaoWalkStatus &t_other) const
        {
            return walkEngineState() == t_other.walkEngineState()
                && Odometry(odometry()) == Odometry(t_other.odometry())
                && odometryResetCounter() == t_other.odometryResetCounter();
        }

        bool operator !=(const NaoWalkStatus &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_nao_walk_status &t_other) const
        {
            return *this == NaoWalkStatus(t_other);
        }

        bool operator !=(const wb_nao_walk_status &t_other) const
        {
            return !(*this == t_other);
        }

        enum WalkEngineState & walkEngineState()
        {
            return wb_nao_walk_status::walkEngineState;
        }

        const enum WalkEngineState & walkEngineState() const
        {
            return wb_nao_walk_status::walkEngineState;
        }

        void set_walkEngineState(const enum WalkEngineState &t_newValue)
        {
            wb_nao_walk_status::walkEngineState = t_newValue;
        }

        Odometry & odometry()
        {
            return const_cast<Odometry &>(static_cast<const Odometry &>(wb_nao_walk_status::odometry));
        }

        const Odometry & odometry() const
        {
            return static_cast<const Odometry &>(wb_nao_walk_status::odometry);
        }

        void set_odometry(const Odometry &t_newValue)
        {
            wb_nao_walk_status::odometry = static_cast<wb_odometry>(t_newValue);
        }

        uint8_t & odometryResetCounter()
        {
            return wb_nao_walk_status::odometryResetCounter;
        }

        const uint8_t & odometryResetCounter() const
        {
            return wb_nao_walk_status::odometryResetCounter;
        }

        void set_odometryResetCounter(const uint8_t &t_newValue)
        {
            wb_nao_walk_status::odometryResetCounter = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        NaoWalkStatus(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_NAO_WALK_STATUS_C_CONVERSION
            char buffer[NAOWALKSTATUS_DESC_BUFFER_SIZE];
            wb_nao_walk_status_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            switch (this->walkEngineState()) {
                case wes_Disconnected:
                {
                    ss << "walkEngineState=" << "wes_Disconnected";
                    break;
                }
                case wes_StoppedReady:
                {
                    ss << "walkEngineState=" << "wes_StoppedReady";
                    break;
                }
                case wes_StoppedStanding:
                {
                    ss << "walkEngineState=" << "wes_StoppedStanding";
                    break;
                }
                case wes_Walking:
                {
                    ss << "walkEngineState=" << "wes_Walking";
                    break;
                }
            }
            ss << ", ";
            ss << "odometry=" << "{" << Odometry(this->odometry()).description() << "}";
            ss << ", ";
            ss << "odometryResetCounter=" << static_cast<unsigned>(this->odometryResetCounter());
            return ss.str();
#endif /// USE_WB_NAO_WALK_STATUS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_NAO_WALK_STATUS_C_CONVERSION
            char buffer[NAOWALKSTATUS_TO_STRING_BUFFER_SIZE];
            wb_nao_walk_status_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            switch (this->walkEngineState()) {
                case wes_Disconnected:
                {
                    ss << "wes_Disconnected";
                    break;
                }
                case wes_StoppedReady:
                {
                    ss << "wes_StoppedReady";
                    break;
                }
                case wes_StoppedStanding:
                {
                    ss << "wes_StoppedStanding";
                    break;
                }
                case wes_Walking:
                {
                    ss << "wes_Walking";
                    break;
                }
            }
            ss << ", ";
            ss << "{" << Odometry(this->odometry()).to_string() << "}";
            ss << ", ";
            ss << static_cast<unsigned>(this->odometryResetCounter());
            return ss.str();
#endif /// USE_WB_NAO_WALK_STATUS_C_CONVERSION
        }

#ifdef USE_WB_NAOWALKSTATUS_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_nao_walk_status_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > NAOWALKSTATUS_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[NAOWALKSTATUS_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[21];
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
                    if (0 == strcmp("walkEngineState", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("odometry", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("odometryResetCounter", key)) {
                        varIndex = 2;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        if (strcmp("wes_Disconnected", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkEngineState(wes_Disconnected);
#pragma clang diagnostic pop
                        } else if (strcmp("wes_StoppedReady", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkEngineState(wes_StoppedReady);
#pragma clang diagnostic pop
                        } else if (strcmp("wes_StoppedStanding", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkEngineState(wes_StoppedStanding);
#pragma clang diagnostic pop
                        } else if (strcmp("wes_Walking", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkEngineState(wes_Walking);
#pragma clang diagnostic pop
                        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_walkEngineState(static_cast<enum WalkEngineState>(atoi(var_str)));
#pragma clang diagnostic pop
                        }
                        break;
                    }
                    case 1:
                    {
                        Odometry odometry_temp = Odometry();
                        odometry_temp.from_string(var_str);
                        this->set_odometry(odometry_temp);
                        break;
                    }
                    case 2:
                    {
                        this->set_odometryResetCounter(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_NAOWALKSTATUS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// NaoWalkStatus_DEFINED
