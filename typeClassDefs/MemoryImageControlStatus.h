/*
 * file MemoryImageControlStatus.h
 *
 * This file was generated by classgenerator from memory_image_control_status.gen.
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

#ifndef MemoryImageControlStatus_DEFINED
#define MemoryImageControlStatus_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include <gu_util.h>
#include "wb_memory_image_control_status.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_memory_image_control_status`.
     */
    class MemoryImageControlStatus: public wb_memory_image_control_status {

    private:

        /**
         * Set the members of the class.
         */
        void init(uint16_t res_width = 0, uint16_t res_height = 0, enum MemoryImagePixelFormat pixelFormat = MI_RGBA;) {
            set_res_width(res_width);
            set_res_height(res_height);
            set_pixelFormat(pixelFormat);
        }

    public:

        /**
         * Create a new `MemoryImageControlStatus`.
         */
        MemoryImageControlStatus(uint16_t res_width = 0, uint16_t res_height = 0, enum MemoryImagePixelFormat pixelFormat = MI_RGBA;) {
            this->init(res_width, res_height, pixelFormat);
        }

        /**
         * Copy Constructor.
         */
        MemoryImageControlStatus(const MemoryImageControlStatus &other): wb_memory_image_control_status() {
            this->init(other.res_width(), other.res_height(), other.pixelFormat());
        }

        /**
         * Copy Constructor.
         */
        MemoryImageControlStatus(const struct wb_memory_image_control_status &other): wb_memory_image_control_status() {
            this->init(other.res_width(), other.res_height(), other.pixelFormat());
        }

        /**
         * Copy Assignment Operator.
         */
        MemoryImageControlStatus &operator = (const MemoryImageControlStatus &other) {
            this->init(other.res_width(), other.res_height(), other.pixelFormat());
            return *this;
        }

        /**
         * Copy Assignment Operator.
         */
        MemoryImageControlStatus &operator = (const struct wb_memory_image_control_status &other) {
            this->init(other.res_width(), other.res_height(), other.pixelFormat());
            return *this;
        }

        bool operator ==(const MemoryImageControlStatus &other) const
        {
            return res_width() == other.res_width()
                && res_height() == other.res_height()
                && pixelFormat() == other.pixelFormat();
        }

        bool operator !=(const MemoryImageControlStatus &other) const
        {
            return !(*this == other);
        }

        bool operator ==(const wb_memory_image_control_status &other) const
        {
            return *this == MemoryImageControlStatus(other);
        }

        bool operator !=(const wb_memory_image_control_status &other) const
        {
            return !(*this == other);
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        MemoryImageControlStatus(const std::string &str) {
            this->init();
            this->from_string(str);
        }

        std::string description() {
#ifdef USE_WB_MEMORY_IMAGE_CONTROL_STATUS_C_CONVERSION
            char buffer[MEMORY_IMAGE_CONTROL_STATUS_DESC_BUFFER_SIZE];
            wb_memory_image_control_status_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            ss << "res_width=" << static_cast<unsigned>(this->res_width());
            ss << ", ";
            ss << "res_height=" << static_cast<unsigned>(this->res_height());
            ss << ", ";
            switch (this->pixelFormat()) {
                case MI_BGRA:
                {
                    ss << "pixelFormat=" << "MI_BGRA";
                    break;
                }
                case MI_RGBA:
                {
                    ss << "pixelFormat=" << "MI_RGBA";
                    break;
                }
                case MI_UYV422:
                {
                    ss << "pixelFormat=" << "MI_UYV422";
                    break;
                }
            }
            return ss.str();
#endif /// USE_WB_MEMORY_IMAGE_CONTROL_STATUS_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_MEMORY_IMAGE_CONTROL_STATUS_C_CONVERSION
            char buffer[MEMORY_IMAGE_CONTROL_STATUS_TO_STRING_BUFFER_SIZE];
            wb_memory_image_control_status_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            ss << static_cast<unsigned>(this->res_width());
            ss << ", ";
            ss << static_cast<unsigned>(this->res_height());
            ss << ", ";
            switch (this->pixelFormat()) {
                case MI_BGRA:
                {
                    ss << "MI_BGRA";
                    break;
                }
                case MI_RGBA:
                {
                    ss << "MI_RGBA";
                    break;
                }
                case MI_UYV422:
                {
                    ss << "MI_UYV422";
                    break;
                }
            }
            return ss.str();
#endif /// USE_WB_MEMORY_IMAGE_CONTROL_STATUS_C_CONVERSION
        }

#ifdef USE_WB_MEMORY_IMAGE_CONTROL_STATUS_C_CONVERSION
        void from_string(const std::string &str) {
            wb_memory_image_control_status_from_string(this, str.c_str());
#else
        void from_string(const std::string &str) {
            char * str_cstr = const_cast<char *>(str.c_str());
            size_t temp_length = strlen(str_cstr);
            int length = (temp_length <= INT_MAX) ? static_cast<int>(static_cast<ssize_t>(temp_length)) : -1;
            if (length < 1 || length > MEMORY_IMAGE_CONTROL_STATUS_DESC_BUFFER_SIZE) {
                return;
            }
            char var_str_buffer[MEMORY_IMAGE_CONTROL_STATUS_DESC_BUFFER_SIZE + 1];
            char* var_str = &var_str_buffer[0];
            char key_buffer[12];
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
                    if (0 == strcmp("res_width", key)) {
                        varIndex = 0;
                    } else if (0 == strcmp("res_height", key)) {
                        varIndex = 1;
                    } else if (0 == strcmp("pixelFormat", key)) {
                        varIndex = 2;
                    } else {
                        varIndex = -1;
                    }
                }
                switch (varIndex) {
                    case -1: { break; }
                    case 0:
                    {
                        this->set_res_width(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                    case 1:
                    {
                        this->set_res_height(static_cast<uint16_t>(atoi(var_str)));
                        break;
                    }
                    case 2:
                    {
                        if (strcmp("MI_BGRA", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_pixelFormat(MI_BGRA);
#pragma clang diagnostic pop
                        } else if (strcmp("MI_RGBA", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_pixelFormat(MI_RGBA);
#pragma clang diagnostic pop
                        } else if (strcmp("MI_UYV422", var_str) == 0) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_pixelFormat(MI_UYV422);
#pragma clang diagnostic pop
                        } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbad-function-cast"
                        this->set_pixelFormat(static_cast<enum MemoryImagePixelFormat>(atoi(var_str)));
#pragma clang diagnostic pop
                        }
                        break;
                    }
                }
                if (varIndex >= 0) {
                    varIndex++;
                }
            } while(index < length);
#endif /// USE_WB_MEMORY_IMAGE_CONTROL_STATUS_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard

#endif /// MemoryImageControlStatus_DEFINED
