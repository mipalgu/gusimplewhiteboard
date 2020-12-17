/*
 * file DataLogger.h
 *
 * This file was generated by classgenerator from data_logger.gen.
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

#ifndef DataLogger_DEFINED
#define DataLogger_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_data_logger.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_data_logger`.
     */
    class DataLogger: public wb_data_logger {

    private:

        /**
         * Set the members of the class.
         */
        void init(std::string t_machineName = "", uint32_t t_currentState = 0, uint32_t t_currentSection = 0, uint8_t t_dataSet = 0, bool t_loggerRunning = false, bool t_shouldExit = false, std::string t_comment = "") {
            gu_strlcpy(const_cast<char *>(this->machineName()), t_machineName.c_str(), 40);
            set_currentState(t_currentState);
            set_currentSection(t_currentSection);
            set_dataSet(t_dataSet);
            set_loggerRunning(t_loggerRunning);
            set_shouldExit(t_shouldExit);
            gu_strlcpy(const_cast<char *>(this->comment()), t_comment.c_str(), 30);
        }

    public:

        /**
         * Create a new `DataLogger`.
         */
        DataLogger(std::string t_machineName = "", uint32_t t_currentState = 0, uint32_t t_currentSection = 0, uint8_t t_dataSet = 0, bool t_loggerRunning = false, bool t_shouldExit = false, std::string t_comment = "") {
            this->init(t_machineName, t_currentState, t_currentSection, t_dataSet, t_loggerRunning, t_shouldExit, t_comment);
        }

        /**
         * Copy Constructor.
         */
        DataLogger(const DataLogger &t_other): wb_data_logger() {
            this->init(t_other.machineName(), t_other.currentState(), t_other.currentSection(), t_other.dataSet(), t_other.loggerRunning(), t_other.shouldExit(), t_other.comment());
        }

        /**
         * Copy Constructor.
         */
        DataLogger(const struct wb_data_logger &t_other): wb_data_logger() {
            this->init(t_other.machineName, t_other.currentState, t_other.currentSection, t_other.dataSet, t_other.loggerRunning, t_other.shouldExit, t_other.comment);
        }

        /**
         * Copy Assignment Operator.
         */
        DataLogger &operator = (const DataLogger &t_other) {
            this->init(t_other.machineName(), t_other.currentState(), t_other.currentSection(), t_other.dataSet(), t_other.loggerRunning(), t_other.shouldExit(), t_other.comment());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        DataLogger &operator = (const struct wb_data_logger &t_other) {
            this->init(t_other.machineName, t_other.currentState, t_other.currentSection, t_other.dataSet, t_other.loggerRunning, t_other.shouldExit, t_other.comment);
            return *this;
        }

        bool operator ==(const DataLogger &t_other) const
        {
            return 0 == strncmp(machineName(), t_other.machineName(), 40)
                && currentState() == t_other.currentState()
                && currentSection() == t_other.currentSection()
                && dataSet() == t_other.dataSet()
                && loggerRunning() == t_other.loggerRunning()
                && shouldExit() == t_other.shouldExit()
                && 0 == strncmp(comment(), t_other.comment(), 30);
        }

        bool operator !=(const DataLogger &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_data_logger &t_other) const
        {
            return *this == DataLogger(t_other);
        }

        bool operator !=(const wb_data_logger &t_other) const
        {
            return !(*this == t_other);
        }

        const char * machineName() const
        {
            return wb_data_logger::machineName;
        }

        size_t machineName_size() const
        {
            return 40;
        }

        char & machineName(int t_i)
        {
            return wb_data_logger::machineName[t_i];
        }

        const char & machineName(int t_i) const
        {
            return wb_data_logger::machineName[t_i];
        }

        void set_machineName(const char *t_newValue)
        {
            strncpy(wb_data_logger::machineName, t_newValue, 40);
        }

        uint32_t & currentState()
        {
            return wb_data_logger::currentState;
        }

        const uint32_t & currentState() const
        {
            return wb_data_logger::currentState;
        }

        void set_currentState(const uint32_t &t_newValue)
        {
            wb_data_logger::currentState = t_newValue;
        }

        uint32_t & currentSection()
        {
            return wb_data_logger::currentSection;
        }

        const uint32_t & currentSection() const
        {
            return wb_data_logger::currentSection;
        }

        void set_currentSection(const uint32_t &t_newValue)
        {
            wb_data_logger::currentSection = t_newValue;
        }

        uint8_t & dataSet()
        {
            return wb_data_logger::dataSet;
        }

        const uint8_t & dataSet() const
        {
            return wb_data_logger::dataSet;
        }

        void set_dataSet(const uint8_t &t_newValue)
        {
            wb_data_logger::dataSet = t_newValue;
        }

        bool & loggerRunning()
        {
            return wb_data_logger::loggerRunning;
        }

        const bool & loggerRunning() const
        {
            return wb_data_logger::loggerRunning;
        }

        void set_loggerRunning(const bool &t_newValue)
        {
            wb_data_logger::loggerRunning = t_newValue;
        }

        bool & shouldExit()
        {
            return wb_data_logger::shouldExit;
        }

        const bool & shouldExit() const
        {
            return wb_data_logger::shouldExit;
        }

        void set_shouldExit(const bool &t_newValue)
        {
            wb_data_logger::shouldExit = t_newValue;
        }

        const char * comment() const
        {
            return wb_data_logger::comment;
        }

        size_t comment_size() const
        {
            return 30;
        }

        char & comment(int t_i)
        {
            return wb_data_logger::comment[t_i];
        }

        const char & comment(int t_i) const
        {
            return wb_data_logger::comment[t_i];
        }

        void set_comment(const char *t_newValue)
        {
            strncpy(wb_data_logger::comment, t_newValue, 30);
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        DataLogger(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_DATA_LOGGER_C_CONVERSION
            char buffer[DATA_LOGGER_DESC_BUFFER_SIZE];
            wb_data_logger_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            if (0 == strncmp("", this->machineName(), 1)) {
                ss << "machineName=" << "";
            } else {
                ss << "machineName=" << this->machineName();
            }
            ss << ", ";
            ss << "currentState=" << static_cast<unsigned>(this->currentState());
            ss << ", ";
            ss << "currentSection=" << static_cast<unsigned>(this->currentSection());
            ss << ", ";
            ss << "dataSet=" << static_cast<unsigned>(this->dataSet());
            ss << ", ";
            ss << "loggerRunning=" << (this->loggerRunning() ? "true" : "false");
            ss << ", ";
            ss << "shouldExit=" << (this->shouldExit() ? "true" : "false");
            ss << ", ";
            if (0 == strncmp("", this->comment(), 1)) {
                ss << "comment=" << "";
            } else {
                ss << "comment=" << this->comment();
            }
            return ss.str();
#endif /// USE_WB_DATA_LOGGER_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_DATA_LOGGER_C_CONVERSION
            char buffer[DATA_LOGGER_TO_STRING_BUFFER_SIZE];
            wb_data_logger_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            if (0 == strncmp("", this->machineName(), 1)) {
                ss << "";
            } else {
                ss << this->machineName();
            }
            ss << ", ";
            ss << static_cast<unsigned>(this->currentState());
            ss << ", ";
            ss << static_cast<unsigned>(this->currentSection());
            ss << ", ";
            ss << static_cast<unsigned>(this->dataSet());
            ss << ", ";
            ss << (this->loggerRunning() ? "true" : "false");
            ss << ", ";
            ss << (this->shouldExit() ? "true" : "false");
            ss << ", ";
            if (0 == strncmp("", this->comment(), 1)) {
                ss << "";
            } else {
                ss << this->comment();
            }
            return ss.str();
#endif /// USE_WB_DATA_LOGGER_C_CONVERSION
        }

#ifdef USE_WB_DATA_LOGGER_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_data_logger_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > DATA_LOGGER_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[DATA_LOGGER_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("machineName", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("currentState", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("currentSection", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("dataSet", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("loggerRunning", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("shouldExit", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("comment", key)) {
                        varIndex = 6;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        strncpy(wb_data_logger::machineName, var_str, 40);
                        break;
                    }
                    case 1:
                    {
                        this->set_currentState(static_cast<uint32_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        this->set_currentSection(static_cast<uint32_t>(atoi(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_dataSet(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_loggerRunning(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 5:
                    {
                        this->set_shouldExit(strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0);
                        break;
                    }
                    case 6:
                    {
                        strncpy(wb_data_logger::comment, var_str, 30);
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_DATA_LOGGER_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// DataLogger_DEFINED
