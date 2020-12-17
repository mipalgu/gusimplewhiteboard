/*
 * file VisionDetectionGoals.h
 *
 * This file was generated by classgenerator from vision_detection_goals.gen.
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

#ifndef VisionDetectionGoals_DEFINED
#define VisionDetectionGoals_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_vision_detection_goals.h"

#include <gusimplewhiteboard/typeClassDefs/VisionDetectionGoal.h>

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_vision_detection_goals`.
     */
    class VisionDetectionGoals: public wb_vision_detection_goals {

    private:

        /**
         * Set the members of the class.
         */
        void init(uint64_t t_frameNumber = 0, const struct wb_vision_detection_goal t_goals[2] = NULLPTR, uint16_t t_res_width = 0, uint16_t t_res_height = 0) {
            set_frameNumber(t_frameNumber);
            if (t_goals != NULLPTR) {
                std::memcpy(wb_vision_detection_goals::goals, t_goals, VISION_DETECTION_GOALS_GOALS_ARRAY_SIZE * sizeof (struct wb_vision_detection_goal));
            } else {
                struct wb_vision_detection_goal goals_temp[VISION_DETECTION_GOALS_GOALS_ARRAY_SIZE] = {wb_vision_detection_goal(), wb_vision_detection_goal()};
                std::memcpy(wb_vision_detection_goals::goals, goals_temp, VISION_DETECTION_GOALS_GOALS_ARRAY_SIZE * sizeof (struct wb_vision_detection_goal));
            }
            set_res_width(t_res_width);
            set_res_height(t_res_height);
        }

    public:

        /**
         * Create a new `VisionDetectionGoals`.
         */
        VisionDetectionGoals(uint64_t t_frameNumber = 0, const struct wb_vision_detection_goal t_goals[2] = NULLPTR, uint16_t t_res_width = 0, uint16_t t_res_height = 0) {
            this->init(t_frameNumber, t_goals, t_res_width, t_res_height);
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionGoals(const VisionDetectionGoals &t_other): wb_vision_detection_goals() {
            this->init(t_other.frameNumber(), t_other.goals(), t_other.res_width(), t_other.res_height());
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionGoals(const struct wb_vision_detection_goals &t_other): wb_vision_detection_goals() {
            this->init(t_other.frameNumber, t_other.goals, t_other.res_width, t_other.res_height);
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionGoals &operator = (const VisionDetectionGoals &t_other) {
            this->init(t_other.frameNumber(), t_other.goals(), t_other.res_width(), t_other.res_height());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionGoals &operator = (const struct wb_vision_detection_goals &t_other) {
            this->init(t_other.frameNumber, t_other.goals, t_other.res_width, t_other.res_height);
            return *this;
        }

        bool operator ==(const VisionDetectionGoals &t_other) const
        {
            if (!(frameNumber() == t_other.frameNumber()
                && res_width() == t_other.res_width()
                && res_height() == t_other.res_height()))
            {
                return false;
            }
            for (int goals_0_index = 0; goals_0_index < 2; goals_0_index++)
            {
                if (!(VisionDetectionGoal(goals(goals_0_index)) == VisionDetectionGoal(t_other.goals(goals_0_index)))) return false;
            }
            return true;
        }

        bool operator !=(const VisionDetectionGoals &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_vision_detection_goals &t_other) const
        {
            return *this == VisionDetectionGoals(t_other);
        }

        bool operator !=(const wb_vision_detection_goals &t_other) const
        {
            return !(*this == t_other);
        }

        uint64_t & frameNumber()
        {
            return wb_vision_detection_goals::frameNumber;
        }

        const uint64_t & frameNumber() const
        {
            return wb_vision_detection_goals::frameNumber;
        }

        void set_frameNumber(const uint64_t &t_newValue)
        {
            wb_vision_detection_goals::frameNumber = t_newValue;
        }

        VisionDetectionGoal * goals()
        {
            return const_cast<VisionDetectionGoal *>(static_cast<const VisionDetectionGoal *>(wb_vision_detection_goals::goals));
        }

        const VisionDetectionGoal * goals() const
        {
            return static_cast<const VisionDetectionGoal *>(wb_vision_detection_goals::goals);
        }

        VisionDetectionGoal & goals(int t_i)
        {
            return const_cast<VisionDetectionGoal &>(static_cast<const VisionDetectionGoal &>(wb_vision_detection_goals::goals[t_i]));
        }

        const VisionDetectionGoal & goals(int t_i) const
        {
            return static_cast<const VisionDetectionGoal &>(wb_vision_detection_goals::goals[t_i]);
        }

        void set_goals(const VisionDetectionGoal *t_newValue)
        {
            memcpy(wb_vision_detection_goals::goals, static_cast<const struct wb_vision_detection_goal *>(t_newValue), VISION_DETECTION_GOALS_GOALS_ARRAY_SIZE * (sizeof (struct wb_vision_detection_goal)));
        }

        void set_goals(const VisionDetectionGoal &t_newValue, int t_i)
        {
            wb_vision_detection_goals::goals[t_i] = static_cast<wb_vision_detection_goal>(t_newValue);
        }

        uint16_t & res_width()
        {
            return wb_vision_detection_goals::res_width;
        }

        const uint16_t & res_width() const
        {
            return wb_vision_detection_goals::res_width;
        }

        void set_res_width(const uint16_t &t_newValue)
        {
            wb_vision_detection_goals::res_width = t_newValue;
        }

        uint16_t & res_height()
        {
            return wb_vision_detection_goals::res_height;
        }

        const uint16_t & res_height() const
        {
            return wb_vision_detection_goals::res_height;
        }

        void set_res_height(const uint16_t &t_newValue)
        {
            wb_vision_detection_goals::res_height = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        VisionDetectionGoals(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_VISION_DETECTION_GOALS_C_CONVERSION
            char buffer[VISION_DETECTION_GOALS_DESC_BUFFER_SIZE];
            wb_vision_detection_goals_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "frameNumber=" << this->frameNumber();
            ss << ", ";
            bool goals_first = true;
            ss << "goals={";
            for (int i = 0; i < VISION_DETECTION_GOALS_GOALS_ARRAY_SIZE; i++) {
                ss << (goals_first ? "" : ", ") << "{" << VisionDetectionGoal(this->goals(i)).description() << "}";
                goals_first = false;
            }
            ss << "}";
            ss << ", ";
            ss << "res_width=" << static_cast<unsigned>(this->res_width());
            ss << ", ";
            ss << "res_height=" << static_cast<unsigned>(this->res_height());
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_GOALS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_VISION_DETECTION_GOALS_C_CONVERSION
            char buffer[VISION_DETECTION_GOALS_TO_STRING_BUFFER_SIZE];
            wb_vision_detection_goals_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << this->frameNumber();
            ss << ", ";
            bool goals_first = true;
            ss << "{";
            for (int i = 0; i < VISION_DETECTION_GOALS_GOALS_ARRAY_SIZE; i++) {
                ss << (goals_first ? "" : ", ") << "{" << VisionDetectionGoal(this->goals(i)).to_string() << "}";
                goals_first = false;
            }
            ss << "}";
            ss << ", ";
            ss << static_cast<unsigned>(this->res_width());
            ss << ", ";
            ss << static_cast<unsigned>(this->res_height());
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_GOALS_C_CONVERSION
        }

#ifdef USE_WB_VISION_DETECTION_GOALS_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_vision_detection_goals_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > VISION_DETECTION_GOALS_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[VISION_DETECTION_GOALS_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[12];
            char* key = &key_buffer[0];
            int bracecount = 0;
            int lastBrace = -1;
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
                    if (0 == strcmp("frameNumber", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("goals", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("res_width", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("res_height", key)) {
                        varIndex = 3;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
#ifdef __APPLE__
                        this->set_frameNumber(static_cast<uint64_t>(atoll(var_str)));
#else
                        this->set_frameNumber(static_cast<uint64_t>(atol(var_str)));
#endif
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
                        for (int goals_0_index = 0; goals_0_index < VISION_DETECTION_GOALS_GOALS_ARRAY_SIZE; goals_0_index++) {
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
                            VisionDetectionGoal goals_0_temp = VisionDetectionGoal();
                            goals_0_temp.from_string(var_str);
                            struct wb_vision_detection_goal goals_0 = goals_0_temp;
                            this->set_goals(goals_0, goals_0_index);
                        }
                        index = restartIndex;
                        break;
                    }
                    case 2:
                    {
                        this->set_res_width(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                    case 3:
                    {
                        this->set_res_height(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_VISION_DETECTION_GOALS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// VisionDetectionGoals_DEFINED
