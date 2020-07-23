/*
 * file VisionDetectionGoalPost.h
 *
 * This file was generated by classgenerator from vision_detection_goal_post.gen.
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

#ifndef VisionDetectionGoalPost_DEFINED
#define VisionDetectionGoalPost_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_vision_detection_goal_post.h"

#include "PixelCoordinate.h"

#include <guunits/guunits.h>
#include <gucoordinates/gucoordinates.h>
#include "PixelCoordinate.h"

#include <guunits/guunits.h>
#include <gucoordinates/gucoordinates.h>
#include "PixelCoordinate.h"

#include <guunits/guunits.h>
#include <gucoordinates/gucoordinates.h>
#include "PixelCoordinate.h"

#include <guunits/guunits.h>
#include <gucoordinates/gucoordinates.h>

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_vision_detection_goal_post`.
     */
    class VisionDetectionGoalPost: public wb_vision_detection_goal_post {

    private:

        /**
         * Set the members of the class.
         */
        void init(enum GoalPostOptions sightingType = NoPostDetected, enum GoalPostOrientation orientation = GenericPost, struct wb_pixel_coordinate topLeftCoordinate = wb_pixel_coordinate(), struct wb_pixel_coordinate topRightCoordinate = wb_pixel_coordinate(), struct wb_pixel_coordinate bottomLeftCoordinate = wb_pixel_coordinate(), struct wb_pixel_coordinate bottomRightCoordinate = wb_pixel_coordinate()) {
            set_sightingType(sightingType);
            set_orientation(orientation);
            set_topLeftCoordinate(topLeftCoordinate);
            set_topRightCoordinate(topRightCoordinate);
            set_bottomLeftCoordinate(bottomLeftCoordinate);
            set_bottomRightCoordinate(bottomRightCoordinate);
        }

    public:

        /**
         * Create a new `VisionDetectionGoalPost`.
         */
        VisionDetectionGoalPost(enum GoalPostOptions sightingType = NoPostDetected, enum GoalPostOrientation orientation = GenericPost, struct wb_pixel_coordinate topLeftCoordinate = wb_pixel_coordinate(), struct wb_pixel_coordinate topRightCoordinate = wb_pixel_coordinate(), struct wb_pixel_coordinate bottomLeftCoordinate = wb_pixel_coordinate(), struct wb_pixel_coordinate bottomRightCoordinate = wb_pixel_coordinate()) {
            this->init(sightingType, orientation, topLeftCoordinate, topRightCoordinate, bottomLeftCoordinate, bottomRightCoordinate);
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionGoalPost(const VisionDetectionGoalPost &other): wb_vision_detection_goal_post() {
            this->init(other.sightingType(), other.orientation(), other.topLeftCoordinate(), other.topRightCoordinate(), other.bottomLeftCoordinate(), other.bottomRightCoordinate());
        }

        /**
         * Copy Constructor.
         */
        VisionDetectionGoalPost(const struct wb_vision_detection_goal_post &other): wb_vision_detection_goal_post() {
            this->init(other.sightingType(), other.orientation(), other.topLeftCoordinate(), other.topRightCoordinate(), other.bottomLeftCoordinate(), other.bottomRightCoordinate());
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionGoalPost &operator = (const VisionDetectionGoalPost &other) {
            this->init(other.sightingType(), other.orientation(), other.topLeftCoordinate(), other.topRightCoordinate(), other.bottomLeftCoordinate(), other.bottomRightCoordinate());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        VisionDetectionGoalPost &operator = (const struct wb_vision_detection_goal_post &other) {
            this->init(other.sightingType(), other.orientation(), other.topLeftCoordinate(), other.topRightCoordinate(), other.bottomLeftCoordinate(), other.bottomRightCoordinate());
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        VisionDetectionGoalPost(const std::string &str) {
            this->init();
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_VISION_DETECTION_GOAL_POST_C_CONVERSION
            char buffer[VISION_DETECTION_GOAL_POST_DESC_BUFFER_SIZE];
            wb_vision_detection_goal_post_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            switch (this->sightingType()) {
                case FullPostSeen:
                {
                    ss << "sightingType=" << "FullPostSeen";
                    break;
                }
                case NoPostDetected:
                {
                    ss << "sightingType=" << "NoPostDetected";
                    break;
                }
                case PartialPostSeen:
                {
                    ss << "sightingType=" << "PartialPostSeen";
                    break;
                }
            }
            ss << ", ";
            switch (this->orientation()) {
                case GenericPost:
                {
                    ss << "orientation=" << "GenericPost";
                    break;
                }
                case LeftPost:
                {
                    ss << "orientation=" << "LeftPost";
                    break;
                }
                case RightPost:
                {
                    ss << "orientation=" << "RightPost";
                    break;
                }
            }
            ss << ", ";
            guWhiteboard::PixelCoordinate * topLeftCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->topLeftCoordinate()));
            ss << "topLeftCoordinate=" << "{" << topLeftCoordinate_cast->description() << "}";
            ss << ", ";
            guWhiteboard::PixelCoordinate * topRightCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->topRightCoordinate()));
            ss << "topRightCoordinate=" << "{" << topRightCoordinate_cast->description() << "}";
            ss << ", ";
            guWhiteboard::PixelCoordinate * bottomLeftCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->bottomLeftCoordinate()));
            ss << "bottomLeftCoordinate=" << "{" << bottomLeftCoordinate_cast->description() << "}";
            ss << ", ";
            guWhiteboard::PixelCoordinate * bottomRightCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->bottomRightCoordinate()));
            ss << "bottomRightCoordinate=" << "{" << bottomRightCoordinate_cast->description() << "}";
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_GOAL_POST_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_VISION_DETECTION_GOAL_POST_C_CONVERSION
            char buffer[VISION_DETECTION_GOAL_POST_TO_STRING_BUFFER_SIZE];
            wb_vision_detection_goal_post_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            switch (this->sightingType()) {
                case FullPostSeen:
                {
                    ss << "FullPostSeen";
                    break;
                }
                case NoPostDetected:
                {
                    ss << "NoPostDetected";
                    break;
                }
                case PartialPostSeen:
                {
                    ss << "PartialPostSeen";
                    break;
                }
            }
            ss << ", ";
            switch (this->orientation()) {
                case GenericPost:
                {
                    ss << "GenericPost";
                    break;
                }
                case LeftPost:
                {
                    ss << "LeftPost";
                    break;
                }
                case RightPost:
                {
                    ss << "RightPost";
                    break;
                }
            }
            ss << ", ";
            guWhiteboard::PixelCoordinate * topLeftCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->topLeftCoordinate()));
            ss << "{" << topLeftCoordinate_cast->to_string() << "}";
            ss << ", ";
            guWhiteboard::PixelCoordinate * topRightCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->topRightCoordinate()));
            ss << "{" << topRightCoordinate_cast->to_string() << "}";
            ss << ", ";
            guWhiteboard::PixelCoordinate * bottomLeftCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->bottomLeftCoordinate()));
            ss << "{" << bottomLeftCoordinate_cast->to_string() << "}";
            ss << ", ";
            guWhiteboard::PixelCoordinate * bottomRightCoordinate_cast = const_cast<guWhiteboard::PixelCoordinate *>(static_cast<const guWhiteboard::PixelCoordinate *>(&this->bottomRightCoordinate()));
            ss << "{" << bottomRightCoordinate_cast->to_string() << "}";
            return ss.str();
#endif /// USE_WB_VISION_DETECTION_GOAL_POST_C_CONVERSION
        }

#ifdef USE_WB_VISION_DETECTION_GOAL_POST_C_CONVERSION
        void from_string(const std::string &str) {
            wb_vision_detection_goal_post_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > VISION_DETECTION_GOAL_POST_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[VISION_DETECTION_GOAL_POST_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[22];
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
                    if (0 == strcmp("sightingType", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("orientation", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("topLeftCoordinate", key)) {
                        varIndex = 2;
                    } else if (0 == strcmp("topRightCoordinate", key)) {
                        varIndex = 3;
                    } else if (0 == strcmp("bottomLeftCoordinate", key)) {
                        varIndex = 4;
                    } else if (0 == strcmp("bottomRightCoordinate", key)) {
                        varIndex = 5;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        if (strcmp("FullPostSeen", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_sightingType(FullPostSeen);
#pragma clang diagnostic pop
                        } else if (strcmp("NoPostDetected", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_sightingType(NoPostDetected);
#pragma clang diagnostic pop
                        } else if (strcmp("PartialPostSeen", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_sightingType(PartialPostSeen);
#pragma clang diagnostic pop
                        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_sightingType(static_cast<enum GoalPostOptions>(atoi(var_str)));
#pragma clang diagnostic pop
                        }
                        break;
                    }
                    case 1:
                    {
                        if (strcmp("GenericPost", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_orientation(GenericPost);
#pragma clang diagnostic pop
                        } else if (strcmp("LeftPost", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_orientation(LeftPost);
#pragma clang diagnostic pop
                        } else if (strcmp("RightPost", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_orientation(RightPost);
#pragma clang diagnostic pop
                        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_orientation(static_cast<enum GoalPostOrientation>(atoi(var_str)));
#pragma clang diagnostic pop
                        }
                        break;
                    }
                    case 2:
                    {
                        PixelCoordinate topLeftCoordinate_temp = PixelCoordinate();
                        topLeftCoordinate_temp.from_string(var_str);
                        this->set_topLeftCoordinate(topLeftCoordinate_temp);
                        break;
                    }
                    case 3:
                    {
                        PixelCoordinate topRightCoordinate_temp = PixelCoordinate();
                        topRightCoordinate_temp.from_string(var_str);
                        this->set_topRightCoordinate(topRightCoordinate_temp);
                        break;
                    }
                    case 4:
                    {
                        PixelCoordinate bottomLeftCoordinate_temp = PixelCoordinate();
                        bottomLeftCoordinate_temp.from_string(var_str);
                        this->set_bottomLeftCoordinate(bottomLeftCoordinate_temp);
                        break;
                    }
                    case 5:
                    {
                        PixelCoordinate bottomRightCoordinate_temp = PixelCoordinate();
                        bottomRightCoordinate_temp.from_string(var_str);
                        this->set_bottomRightCoordinate(bottomRightCoordinate_temp);
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_VISION_DETECTION_GOAL_POST_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

        GU::PixelCoordinate topLeftCoordinatePixelCoordinate(const uint16_t resWidth, const uint16_t resHeight)
        {
            return PixelCoordinate(topLeftCoordinate()).pixelCoordinate(resWidth, resHeight)
        }
        GU::PixelCoordinate topRightCoordinatePixelCoordinate(const uint16_t resWidth, const uint16_t resHeight)
        {
            return PixelCoordinate(topRightCoordinate()).pixelCoordinate(resWidth, resHeight)
        }
        GU::PixelCoordinate bottomLeftCoordinatePixelCoordinate(const uint16_t resWidth, const uint16_t resHeight)
        {
            return PixelCoordinate(bottomLeftCoordinate()).pixelCoordinate(resWidth, resHeight)
        }
        GU::PixelCoordinate bottomRightCoordinatePixelCoordinate(const uint16_t resWidth, const uint16_t resHeight)
        {
            return PixelCoordinate(bottomRightCoordinate()).pixelCoordinate(resWidth, resHeight)
        }
    };

} /// namespace guWhiteboard

#endif /// VisionDetectionGoalPost_DEFINED
