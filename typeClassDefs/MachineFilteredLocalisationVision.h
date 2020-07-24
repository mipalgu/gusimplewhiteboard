/*
 * file MachineFilteredLocalisationVision.h
 *
 * This file was generated by classgenerator from machine_filtered_localisation_vision.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2020 Callum McColl. All rights reserved.
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

#ifndef MachineFilteredLocalisationVision_DEFINED
#define MachineFilteredLocalisationVision_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_machine_filtered_localisation_vision.h"

#include "LandmarkSighting.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_machine_filtered_localisation_vision`.
     */
    class MachineFilteredLocalisationVision: public wb_machine_filtered_localisation_vision {

    private:

        /**
         * Set the members of the class.
         */
        void init(uint8_t numberOfSightings = 0, const struct wb_landmark_sighting sightings[12] = NULLPTR) {
            set_numberOfSightings(numberOfSightings);
            if (sightings != NULLPTR) {
                std::memcpy(this->_sightings, sightings, MACHINE_FILTERED_LOCALISATION_VISION_SIGHTINGS_ARRAY_SIZE * sizeof (struct wb_landmark_sighting));
            } else {
                struct wb_landmark_sighting sightings_temp[MACHINE_FILTERED_LOCALISATION_VISION_SIGHTINGS_ARRAY_SIZE] = {wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting(), wb_landmark_sighting()};
                std::memcpy(this->_sightings, sightings_temp, MACHINE_FILTERED_LOCALISATION_VISION_SIGHTINGS_ARRAY_SIZE * sizeof (struct wb_landmark_sighting));
            }
        }

    public:

        /**
         * Create a new `MachineFilteredLocalisationVision`.
         */
        MachineFilteredLocalisationVision(uint8_t numberOfSightings = 0, const struct wb_landmark_sighting sightings[12] = NULLPTR) {
            this->init(numberOfSightings, sightings);
        }

        /**
         * Copy Constructor.
         */
        MachineFilteredLocalisationVision(const MachineFilteredLocalisationVision &other): wb_machine_filtered_localisation_vision() {
            this->init(other.numberOfSightings(), other.sightings());
        }

        /**
         * Copy Constructor.
         */
        MachineFilteredLocalisationVision(const struct wb_machine_filtered_localisation_vision &other): wb_machine_filtered_localisation_vision() {
            this->init(other.numberOfSightings(), other.sightings());
        }

        /**
         * Copy Assignment Operator.
         */
        MachineFilteredLocalisationVision &operator = (const MachineFilteredLocalisationVision &other) {
            this->init(other.numberOfSightings(), other.sightings());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        MachineFilteredLocalisationVision &operator = (const struct wb_machine_filtered_localisation_vision &other) {
            this->init(other.numberOfSightings(), other.sightings());
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        MachineFilteredLocalisationVision(const std::string &str) {
            this->init();
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_MACHINE_FILTERED_LOCALISATION_VISION_C_CONVERSION
            char buffer[MACHINE_FILTERED_LOCALISATION_VISION_DESC_BUFFER_SIZE];
            wb_machine_filtered_localisation_vision_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "numberOfSightings=" << static_cast<unsigned>(this->numberOfSightings());
            ss << ", ";
            bool sightings_first = true;
            ss << "sightings={";
            for (int i = 0; i < MACHINE_FILTERED_LOCALISATION_VISION_SIGHTINGS_ARRAY_SIZE; i++) {
                guWhiteboard::LandmarkSighting * sightings_cast = const_cast<guWhiteboard::LandmarkSighting *>(static_cast<const guWhiteboard::LandmarkSighting *>(&this->sightings(i)));
                ss << (sightings_first ? "" : ", ") << "{" << sightings_cast->description() << "}";
                sightings_first = false;
            }
            ss << "}";
            return ss.str();
#endif /// USE_WB_MACHINE_FILTERED_LOCALISATION_VISION_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_MACHINE_FILTERED_LOCALISATION_VISION_C_CONVERSION
            char buffer[MACHINE_FILTERED_LOCALISATION_VISION_TO_STRING_BUFFER_SIZE];
            wb_machine_filtered_localisation_vision_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << static_cast<unsigned>(this->numberOfSightings());
            ss << ", ";
            bool sightings_first = true;
            ss << "{";
            for (int i = 0; i < MACHINE_FILTERED_LOCALISATION_VISION_SIGHTINGS_ARRAY_SIZE; i++) {
                guWhiteboard::LandmarkSighting * sightings_cast = const_cast<guWhiteboard::LandmarkSighting *>(static_cast<const guWhiteboard::LandmarkSighting *>(&this->sightings(i)));
                ss << (sightings_first ? "" : ", ") << "{" << sightings_cast->to_string() << "}";
                sightings_first = false;
            }
            ss << "}";
            return ss.str();
#endif /// USE_WB_MACHINE_FILTERED_LOCALISATION_VISION_C_CONVERSION
        }

#ifdef USE_WB_MACHINE_FILTERED_LOCALISATION_VISION_C_CONVERSION
        void from_string(const std::string &str) {
            wb_machine_filtered_localisation_vision_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > MACHINE_FILTERED_LOCALISATION_VISION_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[MACHINE_FILTERED_LOCALISATION_VISION_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[18];
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
                    if (0 == strcmp("numberOfSightings", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("sightings", key)) {
                        varIndex = 1;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_numberOfSightings(static_cast<uint8_t>(atoi(var_str)));
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
                        for (int sightings_0_index = 0; sightings_0_index < MACHINE_FILTERED_LOCALISATION_VISION_SIGHTINGS_ARRAY_SIZE; sightings_0_index++) {
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
                            LandmarkSighting sightings_0_temp = LandmarkSighting();
                            sightings_0_temp.from_string(var_str);
                            struct wb_landmark_sighting sightings_0 = sightings_0_temp;
                            this->set_sightings(sightings_0, sightings_0_index);
                        }
                        index = restartIndex;
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_MACHINE_FILTERED_LOCALISATION_VISION_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

        int firstSighting(LandmarkSightingType sightingType)
        {
            for (int i = 0; i < this->numberOfSightings(); i++) {
                if (this->sightings(i).sightingType() == sightingType)
                {
                    return i;
                }
            }
            return -1;

        }

        int ball()
        {
            return this->firstSighting(BallSightingType);
        }

        int firstGenericGoalPost()
        {
            return this->firstSighting(GenericGoalPostSightingType);
        }

        int leftGoalPost()
        {
            return this->firstSighting(LeftGoalPostSightingType);
        }

        int rightGoalPost() {
            return this->firstSighting(RightGoalPostSightingType);
        }

        int goal() {
            return this->firstSighting(GoalLandmarkSightingType);
        }

        int lineHorizon()
        {
            return this->firstSighting(LineHorizonSightingType);
        }

        int cornerHorizon()
        {
            return this->firstSighting(CornerHorizonSightingType);
        }

        int horizon()
        {
            return MAX(this->lineHorizon(), this->cornerHorizon());
        }

        int line()
        {
            return this->firstSighting(StraightLineSightingType);
        }

        int cornerLine()
        {
            return this->firstSighting(CornerLineSightingType);
        }

        int tLine()
        {
            return this->firstSighting(TIntersectionLineSightingType);
        }

        int crossLine()
        {
            return this->firstSighting(CrossLineSightingType);
        }
    };

} /// namespace guWhiteboard

#endif /// MachineFilteredLocalisationVision_DEFINED
