/*
 * file VisionFieldFeatures.h
 *
 * This file was generated by classgenerator from vision_field_features.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2020 Eugene Gilmore. All rights reserved.
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
 *        This product includes software developed by Eugene Gilmore.
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

#ifndef VisionFieldFeatures_DEFINED
#define VisionFieldFeatures_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_vision_field_features.h"

#include "VisionFieldFeature.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_vision_field_features`.
     */
    class VisionFieldFeatures: public wb_vision_field_features {

    private:

        /**
         * Set the members of the class.
         */
        void init(const struct wb_vision_field_feature t_fieldCorner[8] = NULLPTR, const struct wb_vision_field_feature t_fieldIntersection[8] = NULLPTR, const struct wb_vision_field_feature t_fieldCrosses[3] = NULLPTR, uint8_t t_numCorners = 0, uint8_t t_numIntersections = 0, uint8_t t_numCrosses = 0, uint16_t t_res_width = 0, uint16_t t_res_height = 0) {
            if (t_fieldCorner != NULLPTR) {
                std::memcpy(wb_vision_field_features::fieldCorner, t_fieldCorner, VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE * sizeof (struct wb_vision_field_feature));
            } else {
                struct wb_vision_field_feature fieldCorner_temp[VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE] = { wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature() };
                std::memcpy(wb_vision_field_features::fieldCorner, fieldCorner_temp, VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE * sizeof (struct wb_vision_field_feature));
            }
            if (t_fieldIntersection != NULLPTR) {
                std::memcpy(wb_vision_field_features::fieldIntersection, t_fieldIntersection, VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE * sizeof (struct wb_vision_field_feature));
            } else {
                struct wb_vision_field_feature fieldIntersection_temp[VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE] = { wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature() };
                std::memcpy(wb_vision_field_features::fieldIntersection, fieldIntersection_temp, VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE * sizeof (struct wb_vision_field_feature));
            }
            if (t_fieldCrosses != NULLPTR) {
                std::memcpy(wb_vision_field_features::fieldCrosses, t_fieldCrosses, VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE * sizeof (struct wb_vision_field_feature));
            } else {
                struct wb_vision_field_feature fieldCrosses_temp[VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE] = { wb_vision_field_feature(), wb_vision_field_feature(), wb_vision_field_feature() };
                std::memcpy(wb_vision_field_features::fieldCrosses, fieldCrosses_temp, VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE * sizeof (struct wb_vision_field_feature));
            }
            set_numCorners(t_numCorners);
            set_numIntersections(t_numIntersections);
            set_numCrosses(t_numCrosses);
            set_res_width(t_res_width);
            set_res_height(t_res_height);
        }

    public:

        /**
         * Create a new `VisionFieldFeatures`.
         */
        VisionFieldFeatures(const struct wb_vision_field_feature t_fieldCorner[8] = NULLPTR, const struct wb_vision_field_feature t_fieldIntersection[8] = NULLPTR, const struct wb_vision_field_feature t_fieldCrosses[3] = NULLPTR, uint8_t t_numCorners = 0, uint8_t t_numIntersections = 0, uint8_t t_numCrosses = 0, uint16_t t_res_width = 0, uint16_t t_res_height = 0) {
            this->init(t_fieldCorner, t_fieldIntersection, t_fieldCrosses, t_numCorners, t_numIntersections, t_numCrosses, t_res_width, t_res_height);
        }

        /**
         * Copy Constructor.
         */
        VisionFieldFeatures(const VisionFieldFeatures &t_other): wb_vision_field_features() {
            this->init(t_other.fieldCorner(), t_other.fieldIntersection(), t_other.fieldCrosses(), t_other.numCorners(), t_other.numIntersections(), t_other.numCrosses(), t_other.res_width(), t_other.res_height());
        }

        /**
         * Copy Constructor.
         */
        VisionFieldFeatures(const struct wb_vision_field_features &t_other): wb_vision_field_features() {
            this->init(t_other.fieldCorner, t_other.fieldIntersection, t_other.fieldCrosses, t_other.numCorners, t_other.numIntersections, t_other.numCrosses, t_other.res_width, t_other.res_height);
        }

        /**
         * Copy Assignment Operator.
         */
        VisionFieldFeatures &operator = (const VisionFieldFeatures &t_other) {
            this->init(t_other.fieldCorner(), t_other.fieldIntersection(), t_other.fieldCrosses(), t_other.numCorners(), t_other.numIntersections(), t_other.numCrosses(), t_other.res_width(), t_other.res_height());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        VisionFieldFeatures &operator = (const struct wb_vision_field_features &t_other) {
            this->init(t_other.fieldCorner, t_other.fieldIntersection, t_other.fieldCrosses, t_other.numCorners, t_other.numIntersections, t_other.numCrosses, t_other.res_width, t_other.res_height);
            return *this;
        }

        bool operator ==(const VisionFieldFeatures &t_other) const
        {
            if (!(numCorners() == t_other.numCorners()
                && numIntersections() == t_other.numIntersections()
                && numCrosses() == t_other.numCrosses()
                && res_width() == t_other.res_width()
                && res_height() == t_other.res_height()))
            {
                return false;
            }
            for (int fieldCorner_0_index = 0; fieldCorner_0_index < 8; fieldCorner_0_index++)
            {
                if (!(VisionFieldFeature(fieldCorner(fieldCorner_0_index)) == VisionFieldFeature(t_other.fieldCorner(fieldCorner_0_index)))) return false;
            }
            for (int fieldIntersection_0_index = 0; fieldIntersection_0_index < 8; fieldIntersection_0_index++)
            {
                if (!(VisionFieldFeature(fieldIntersection(fieldIntersection_0_index)) == VisionFieldFeature(t_other.fieldIntersection(fieldIntersection_0_index)))) return false;
            }
            for (int fieldCrosses_0_index = 0; fieldCrosses_0_index < 3; fieldCrosses_0_index++)
            {
                if (!(VisionFieldFeature(fieldCrosses(fieldCrosses_0_index)) == VisionFieldFeature(t_other.fieldCrosses(fieldCrosses_0_index)))) return false;
            }
            return true;
        }

        bool operator !=(const VisionFieldFeatures &t_other) const
        {
            return !(*this == t_other);
        }

        bool operator ==(const wb_vision_field_features &t_other) const
        {
            return *this == VisionFieldFeatures(t_other);
        }

        bool operator !=(const wb_vision_field_features &t_other) const
        {
            return !(*this == t_other);
        }

        VisionFieldFeature * fieldCorner()
        {
            return const_cast<VisionFieldFeature *>(static_cast<const VisionFieldFeature *>(wb_vision_field_features::fieldCorner));
        }

        const VisionFieldFeature * fieldCorner() const
        {
            return static_cast<const VisionFieldFeature *>(wb_vision_field_features::fieldCorner);
        }

        size_t fieldCorner_size() const
        {
            return VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE;
        }

        VisionFieldFeature & fieldCorner(int t_i)
        {
            return const_cast<VisionFieldFeature &>(static_cast<const VisionFieldFeature &>(wb_vision_field_features::fieldCorner[t_i]));
        }

        const VisionFieldFeature & fieldCorner(int t_i) const
        {
            return static_cast<const VisionFieldFeature &>(wb_vision_field_features::fieldCorner[t_i]);
        }

        void set_fieldCorner(const VisionFieldFeature *t_newValue)
        {
            memcpy(wb_vision_field_features::fieldCorner, static_cast<const struct wb_vision_field_feature *>(t_newValue), VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE * (sizeof (struct wb_vision_field_feature)));
        }

        void set_fieldCorner(const VisionFieldFeature &t_newValue, int t_i)
        {
            wb_vision_field_features::fieldCorner[t_i] = static_cast<wb_vision_field_feature>(t_newValue);
        }

        VisionFieldFeature * fieldIntersection()
        {
            return const_cast<VisionFieldFeature *>(static_cast<const VisionFieldFeature *>(wb_vision_field_features::fieldIntersection));
        }

        const VisionFieldFeature * fieldIntersection() const
        {
            return static_cast<const VisionFieldFeature *>(wb_vision_field_features::fieldIntersection);
        }

        size_t fieldIntersection_size() const
        {
            return VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE;
        }

        VisionFieldFeature & fieldIntersection(int t_i)
        {
            return const_cast<VisionFieldFeature &>(static_cast<const VisionFieldFeature &>(wb_vision_field_features::fieldIntersection[t_i]));
        }

        const VisionFieldFeature & fieldIntersection(int t_i) const
        {
            return static_cast<const VisionFieldFeature &>(wb_vision_field_features::fieldIntersection[t_i]);
        }

        void set_fieldIntersection(const VisionFieldFeature *t_newValue)
        {
            memcpy(wb_vision_field_features::fieldIntersection, static_cast<const struct wb_vision_field_feature *>(t_newValue), VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE * (sizeof (struct wb_vision_field_feature)));
        }

        void set_fieldIntersection(const VisionFieldFeature &t_newValue, int t_i)
        {
            wb_vision_field_features::fieldIntersection[t_i] = static_cast<wb_vision_field_feature>(t_newValue);
        }

        VisionFieldFeature * fieldCrosses()
        {
            return const_cast<VisionFieldFeature *>(static_cast<const VisionFieldFeature *>(wb_vision_field_features::fieldCrosses));
        }

        const VisionFieldFeature * fieldCrosses() const
        {
            return static_cast<const VisionFieldFeature *>(wb_vision_field_features::fieldCrosses);
        }

        size_t fieldCrosses_size() const
        {
            return VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE;
        }

        VisionFieldFeature & fieldCrosses(int t_i)
        {
            return const_cast<VisionFieldFeature &>(static_cast<const VisionFieldFeature &>(wb_vision_field_features::fieldCrosses[t_i]));
        }

        const VisionFieldFeature & fieldCrosses(int t_i) const
        {
            return static_cast<const VisionFieldFeature &>(wb_vision_field_features::fieldCrosses[t_i]);
        }

        void set_fieldCrosses(const VisionFieldFeature *t_newValue)
        {
            memcpy(wb_vision_field_features::fieldCrosses, static_cast<const struct wb_vision_field_feature *>(t_newValue), VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE * (sizeof (struct wb_vision_field_feature)));
        }

        void set_fieldCrosses(const VisionFieldFeature &t_newValue, int t_i)
        {
            wb_vision_field_features::fieldCrosses[t_i] = static_cast<wb_vision_field_feature>(t_newValue);
        }

        uint8_t & numCorners()
        {
            return wb_vision_field_features::numCorners;
        }

        const uint8_t & numCorners() const
        {
            return wb_vision_field_features::numCorners;
        }

        void set_numCorners(const uint8_t &t_newValue)
        {
            wb_vision_field_features::numCorners = t_newValue;
        }

        uint8_t & numIntersections()
        {
            return wb_vision_field_features::numIntersections;
        }

        const uint8_t & numIntersections() const
        {
            return wb_vision_field_features::numIntersections;
        }

        void set_numIntersections(const uint8_t &t_newValue)
        {
            wb_vision_field_features::numIntersections = t_newValue;
        }

        uint8_t & numCrosses()
        {
            return wb_vision_field_features::numCrosses;
        }

        const uint8_t & numCrosses() const
        {
            return wb_vision_field_features::numCrosses;
        }

        void set_numCrosses(const uint8_t &t_newValue)
        {
            wb_vision_field_features::numCrosses = t_newValue;
        }

        uint16_t & res_width()
        {
            return wb_vision_field_features::res_width;
        }

        const uint16_t & res_width() const
        {
            return wb_vision_field_features::res_width;
        }

        void set_res_width(const uint16_t &t_newValue)
        {
            wb_vision_field_features::res_width = t_newValue;
        }

        uint16_t & res_height()
        {
            return wb_vision_field_features::res_height;
        }

        const uint16_t & res_height() const
        {
            return wb_vision_field_features::res_height;
        }

        void set_res_height(const uint16_t &t_newValue)
        {
            wb_vision_field_features::res_height = t_newValue;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        VisionFieldFeatures(const std::string &t_str) {
            this->init();
            this->from_string(t_str);
        }

        std::string description() {
#ifdef USE_WB_VISION_FIELD_FEATURES_C_CONVERSION
            char buffer[VISION_FIELD_FEATURES_DESC_BUFFER_SIZE];
            wb_vision_field_features_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            bool fieldCorner_first = true;
            ss << "fieldCorner={";
            for (int i = 0; i < VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE; i++) {
                ss << (fieldCorner_first ? "" : ", ") << "{" << VisionFieldFeature(this->fieldCorner(i)).description() << "}";
                fieldCorner_first = false;
            }
            ss << "}";
            ss << ", ";
            bool fieldIntersection_first = true;
            ss << "fieldIntersection={";
            for (int i = 0; i < VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE; i++) {
                ss << (fieldIntersection_first ? "" : ", ") << "{" << VisionFieldFeature(this->fieldIntersection(i)).description() << "}";
                fieldIntersection_first = false;
            }
            ss << "}";
            ss << ", ";
            bool fieldCrosses_first = true;
            ss << "fieldCrosses={";
            for (int i = 0; i < VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE; i++) {
                ss << (fieldCrosses_first ? "" : ", ") << "{" << VisionFieldFeature(this->fieldCrosses(i)).description() << "}";
                fieldCrosses_first = false;
            }
            ss << "}";
            ss << ", ";
            ss << "numCorners=" << static_cast<unsigned>(this->numCorners());
            ss << ", ";
            ss << "numIntersections=" << static_cast<unsigned>(this->numIntersections());
            ss << ", ";
            ss << "numCrosses=" << static_cast<unsigned>(this->numCrosses());
            ss << ", ";
            ss << "res_width=" << static_cast<unsigned>(this->res_width());
            ss << ", ";
            ss << "res_height=" << static_cast<unsigned>(this->res_height());
            return ss.str();
#endif /// USE_WB_VISION_FIELD_FEATURES_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_VISION_FIELD_FEATURES_C_CONVERSION
            char buffer[VISION_FIELD_FEATURES_TO_STRING_BUFFER_SIZE];
            wb_vision_field_features_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            bool fieldCorner_first = true;
            ss << "{";
            for (int i = 0; i < VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE; i++) {
                ss << (fieldCorner_first ? "" : ", ") << "{" << VisionFieldFeature(this->fieldCorner(i)).to_string() << "}";
                fieldCorner_first = false;
            }
            ss << "}";
            ss << ", ";
            bool fieldIntersection_first = true;
            ss << "{";
            for (int i = 0; i < VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE; i++) {
                ss << (fieldIntersection_first ? "" : ", ") << "{" << VisionFieldFeature(this->fieldIntersection(i)).to_string() << "}";
                fieldIntersection_first = false;
            }
            ss << "}";
            ss << ", ";
            bool fieldCrosses_first = true;
            ss << "{";
            for (int i = 0; i < VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE; i++) {
                ss << (fieldCrosses_first ? "" : ", ") << "{" << VisionFieldFeature(this->fieldCrosses(i)).to_string() << "}";
                fieldCrosses_first = false;
            }
            ss << "}";
            ss << ", ";
            ss << static_cast<unsigned>(this->numCorners());
            ss << ", ";
            ss << static_cast<unsigned>(this->numIntersections());
            ss << ", ";
            ss << static_cast<unsigned>(this->numCrosses());
            ss << ", ";
            ss << static_cast<unsigned>(this->res_width());
            ss << ", ";
            ss << static_cast<unsigned>(this->res_height());
            return ss.str();
#endif /// USE_WB_VISION_FIELD_FEATURES_C_CONVERSION
        }

#ifdef USE_WB_VISION_FIELD_FEATURES_C_CONVERSION
        void from_string(const std::string &t_str) {
            wb_vision_field_features_from_string(this, t_str.c_str());
#else
        void from_string(const std::string &t_str) {
            char * str_cstr = const_cast<char *>(t_str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > VISION_FIELD_FEATURES_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[VISION_FIELD_FEATURES_DESC_BUFFER_SIZE + 1];
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
                    if (0 == strcmp("fieldCorner", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("fieldIntersection", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("fieldCrosses", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("numCorners", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("numIntersections", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("numCrosses", key)) {
                        varIndex = 5;
                    } else if (0 == strcmp("res_width", key)) {
                        varIndex = 6;
                    } else if (0 == strcmp("res_height", key)) {
                        varIndex = 7;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        int restartIndex = index;
                        index = lastBrace + 1;
                        startVar = index;
                        startKey = startVar;
                        endKey = -1;
                        bracecount = 0;
                        for (int fieldCorner_0_index = 0; fieldCorner_0_index < VISION_FIELD_FEATURES_FIELDCORNER_ARRAY_SIZE; fieldCorner_0_index++) {
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
                            VisionFieldFeature fieldCorner_0_temp = VisionFieldFeature();
                            fieldCorner_0_temp.from_string(var_str);
                            struct wb_vision_field_feature fieldCorner_0 = fieldCorner_0_temp;
                            this->set_fieldCorner(fieldCorner_0, fieldCorner_0_index);
                        }
                        index = restartIndex;
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
                        for (int fieldIntersection_0_index = 0; fieldIntersection_0_index < VISION_FIELD_FEATURES_FIELDINTERSECTION_ARRAY_SIZE; fieldIntersection_0_index++) {
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
                            VisionFieldFeature fieldIntersection_0_temp = VisionFieldFeature();
                            fieldIntersection_0_temp.from_string(var_str);
                            struct wb_vision_field_feature fieldIntersection_0 = fieldIntersection_0_temp;
                            this->set_fieldIntersection(fieldIntersection_0, fieldIntersection_0_index);
                        }
                        index = restartIndex;
                        break;
                    }
                    case 2:
                    {
                        int restartIndex = index;
                        index = lastBrace + 1;
                        startVar = index;
                        startKey = startVar;
                        endKey = -1;
                        bracecount = 0;
                        for (int fieldCrosses_0_index = 0; fieldCrosses_0_index < VISION_FIELD_FEATURES_FIELDCROSSES_ARRAY_SIZE; fieldCrosses_0_index++) {
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
                            VisionFieldFeature fieldCrosses_0_temp = VisionFieldFeature();
                            fieldCrosses_0_temp.from_string(var_str);
                            struct wb_vision_field_feature fieldCrosses_0 = fieldCrosses_0_temp;
                            this->set_fieldCrosses(fieldCrosses_0, fieldCrosses_0_index);
                        }
                        index = restartIndex;
                        break;
                    }
                    case 3:
                    {
                        this->set_numCorners(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 4:
                    {
                        this->set_numIntersections(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 5:
                    {
                        this->set_numCrosses(static_cast<uint8_t>(atoi(var_str)));
                        break;
                    }
                    case 6:
                    {
                        this->set_res_width(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                    case 7:
                    {
                        this->set_res_height(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_VISION_FIELD_FEATURES_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// VisionFieldFeatures_DEFINED
