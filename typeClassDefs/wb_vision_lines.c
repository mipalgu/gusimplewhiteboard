/*
 * file wb_vision_lines.c
 *
 * This file was generated by classgenerator from vision_lines.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Eugene Gilmore. All rights reserved.
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

#ifndef WHITEBOARD_POSTER_STRING_CONVERSION
#define WHITEBOARD_POSTER_STRING_CONVERSION
#endif // WHITEBOARD_POSTER_STRING_CONVERSION

#include "wb_vision_lines.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* Network byte order functions */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-macros"
#if defined(__linux)
#  include <endian.h>
#  include <byteswap.h>
#elif defined(__APPLE__) 
#  include <machine/endian.h>           //Needed for __BYTE_ORDER
#  include <architecture/byte_order.h>   //Needed for byte swap functions
#  define bswap_16(x) NXSwapShort(x)
#  define bswap_32(x) NXSwapInt(x)
#  define bswap_64(x) NXSwapLongLong(x)
#elif defined(ESP8266)
#  define bswap_16(x) __builtin_bswap16(x)
#  define bswap_32(x) __builtin_bswap32(x)
#  define bswap_64(x) __builtin_bswap64(x)
#else
  //Manually define swap macros?
#endif

#if __BYTE_ORDER == __LITTLE_ENDIAN
#  if !defined(htonll) && !defined(ntohll)
#   define htonll(x) bswap_64(x)
#   define ntohll(x) bswap_64(x)
#  endif
#  if !defined(htonl) && !defined(ntohl)
#   define htonl(x) bswap_32(x)
#   define ntohl(x) bswap_32(x)
#  endif
#  if !defined(htons) && !defined(ntohs)
#   define htons(x) bswap_16(x)
#   define ntohs(x) bswap_16(x)
#  endif
#else
#  if !defined(htonll) && !defined(ntohll)
#   define htonll(x) (x)
#   define ntohll(x) (x)
#  endif
#  if !defined(htonl) && !defined(ntohl)
#   define htonl(x) (x)
#   define ntohl(x) (x)
#  endif
#  if !defined(htons) && !defined(ntohs)
#   define htons(x) (x)
#   define ntohs(x) (x)
#  endif
#endif
#pragma clang diagnostic pop



/**
 * Convert to a description string.
 */
const char* wb_vision_lines_description(const struct wb_vision_lines* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "topLines={", bufferSize);
    for (int topLines_index = 0; topLines_index < VISION_LINES_TOPLINES_ARRAY_SIZE; topLines_index++) {
        if (len >= bufferSize) {
            return descString;
        }
        if (topLines_index > 0) {
            len = gu_strlcat(descString, ", ", bufferSize);
        }
        len = gu_strlcat(descString, "{", bufferSize);
        if (len >= bufferSize) {
            return descString;
        }
        char topLines_1_buffer[VISION_LINE_DESC_BUFFER_SIZE];
        char* topLines_1_p = topLines_1_buffer;
        const char* topLines_1_description = wb_vision_line_description(&self->topLines[topLines_index], topLines_1_p, VISION_LINE_DESC_BUFFER_SIZE);
        len = gu_strlcat(descString, topLines_1_p, bufferSize);
        if (len >= bufferSize) {
            return descString;
        }
        len = gu_strlcat(descString, "}", bufferSize);
    }
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "}", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "bottomLines={", bufferSize);
    for (int bottomLines_index = 0; bottomLines_index < VISION_LINES_BOTTOMLINES_ARRAY_SIZE; bottomLines_index++) {
        if (len >= bufferSize) {
            return descString;
        }
        if (bottomLines_index > 0) {
            len = gu_strlcat(descString, ", ", bufferSize);
        }
        len = gu_strlcat(descString, "{", bufferSize);
        if (len >= bufferSize) {
            return descString;
        }
        char bottomLines_1_buffer[VISION_LINE_DESC_BUFFER_SIZE];
        char* bottomLines_1_p = bottomLines_1_buffer;
        const char* bottomLines_1_description = wb_vision_line_description(&self->bottomLines[bottomLines_index], bottomLines_1_p, VISION_LINE_DESC_BUFFER_SIZE);
        len = gu_strlcat(descString, bottomLines_1_p, bufferSize);
        if (len >= bufferSize) {
            return descString;
        }
        len = gu_strlcat(descString, "}", bufferSize);
    }
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "}", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "numTopLines=%u", self->numTopLines);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "numBottomLines=%u", self->numBottomLines);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "frameNumber=%llu", self->frameNumber);
    return descString;
#pragma clang diagnostic pop
}

/**
 * Convert to a string.
 */
const char* wb_vision_lines_to_string(const struct wb_vision_lines* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, "{", bufferSize);
    for (int topLines_index = 0; topLines_index < VISION_LINES_TOPLINES_ARRAY_SIZE; topLines_index++) {
        if (len >= bufferSize) {
            return toString;
        }
        if (topLines_index > 0) {
            len = gu_strlcat(toString, ", ", bufferSize);
        }
        len = gu_strlcat(toString, "{", bufferSize);
        if (len >= bufferSize) {
            return toString;
        }
        char topLines_1_buffer[VISION_LINE_TO_STRING_BUFFER_SIZE];
        char* topLines_1_p = topLines_1_buffer;
        const char* topLines_1_to_string = wb_vision_line_to_string(&self->topLines[topLines_index], topLines_1_p, VISION_LINE_TO_STRING_BUFFER_SIZE);
        len = gu_strlcat(toString, topLines_1_p, bufferSize);
        if (len >= bufferSize) {
            return toString;
        }
        len = gu_strlcat(toString, "}", bufferSize);
    }
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, "}", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, "{", bufferSize);
    for (int bottomLines_index = 0; bottomLines_index < VISION_LINES_BOTTOMLINES_ARRAY_SIZE; bottomLines_index++) {
        if (len >= bufferSize) {
            return toString;
        }
        if (bottomLines_index > 0) {
            len = gu_strlcat(toString, ", ", bufferSize);
        }
        len = gu_strlcat(toString, "{", bufferSize);
        if (len >= bufferSize) {
            return toString;
        }
        char bottomLines_1_buffer[VISION_LINE_TO_STRING_BUFFER_SIZE];
        char* bottomLines_1_p = bottomLines_1_buffer;
        const char* bottomLines_1_to_string = wb_vision_line_to_string(&self->bottomLines[bottomLines_index], bottomLines_1_p, VISION_LINE_TO_STRING_BUFFER_SIZE);
        len = gu_strlcat(toString, bottomLines_1_p, bufferSize);
        if (len >= bufferSize) {
            return toString;
        }
        len = gu_strlcat(toString, "}", bufferSize);
    }
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, "}", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->numTopLines);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->numBottomLines);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%llu", self->frameNumber);
    return toString;
#pragma clang diagnostic pop
}

/**
 * Convert from a string.
 */
struct wb_vision_lines* wb_vision_lines_from_string(struct wb_vision_lines* self, const char* str)
{
    size_t temp_length = strlen(str);
    int length = (temp_length <= INT_MAX) ? ((int)((ssize_t)temp_length)) : -1;
    if (length < 1 || length > VISION_LINES_DESC_BUFFER_SIZE) {
        return self;
    }
    char var_str_buffer[VISION_LINES_DESC_BUFFER_SIZE + 1];
    char* var_str = &var_str_buffer[0];
    char key_buffer[15];
    char* key = &key_buffer[0];
    int bracecount = 0;
    int lastBrace = -1;
    int startVar = 0;
    int index = 0;
    int startKey = 0;
    int endKey = -1;
    int varIndex = 0;
    if (index == 0 && str[0] == '{') {
        index = 1;
    }
    startVar = index;
    startKey = startVar;
    do {
        for (int i = index; i < length; i++) {
            index = i + 1;
            if (bracecount == 0 && str[i] == '=') {
                endKey = i - 1;
                startVar = index;
                continue;
            }
            if (bracecount == 0 && isspace(str[i])) {
                startVar = index;
                if (endKey == -1) {
                    startKey = index;
                }
                continue;
            }
            if (bracecount == 0 && str[i] == ',') {
                index = i - 1;
                break;
            }
            if (str[i] == '{') {
                bracecount++;
                if (bracecount == 1) {
                    lastBrace = i;
                }
                continue;
            }
            if (str[i] == '}') {
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
            strncpy(key, str + startKey, ((size_t)(endKey - startKey) + 1));
            key[(endKey - startKey) + 1] = 0;
        } else {
            key[0] = 0;
        }
        strncpy(var_str, str + startVar, ((size_t)(index - startVar) + 1));
        var_str[(index - startVar) + 1] = 0;
        bracecount = 0;
        index += 2;
        startVar = index;
        startKey = startVar;
        endKey = -1;
        if (strlen(key) > 0) {
            if (0 == strcmp("topLines", key)) {
                varIndex = 0;
            } else if (0 == strcmp("bottomLines", key)) {
                varIndex = 1;
            } else if (0 == strcmp("numTopLines", key)) {
                varIndex = 2;
            } else if (0 == strcmp("numBottomLines", key)) {
                varIndex = 3;
            } else if (0 == strcmp("frameNumber", key)) {
                varIndex = 4;
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
                for (int topLines_0_index = 0; topLines_0_index < VISION_LINES_TOPLINES_ARRAY_SIZE; topLines_0_index++) {
                    for (int i = index; i < length; i++) {
                        index = i + 1;
                        if (bracecount == 0 && str[i] == '=') {
                            endKey = i - 1;
                            startVar = index;
                            continue;
                        }
                        if (bracecount == 0 && isspace(str[i])) {
                            startVar = index;
                            if (endKey == -1) {
                                startKey = index;
                            }
                            continue;
                        }
                        if (bracecount == 0 && str[i] == ',') {
                            index = i - 1;
                            break;
                        }
                        if (str[i] == '{') {
                            bracecount++;
                            continue;
                        }
                        if (str[i] == '}') {
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
                        strncpy(key, str + startKey, ((size_t)(endKey - startKey) + 1));
                        key[(endKey - startKey) + 1] = 0;
                    } else {
                        key[0] = 0;
                    }
                    strncpy(var_str, str + startVar, ((size_t)(index - startVar) + 1));
                    var_str[(index - startVar) + 1] = 0;
                    bracecount = 0;
                    index += 2;
                    startVar = index;
                    startKey = startVar;
                    endKey = -1;
                    struct wb_vision_line topLines_0;
                    wb_vision_line_from_string(&topLines_0, var_str);
                    self->topLines[topLines_0_index] = topLines_0;;
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
                for (int bottomLines_0_index = 0; bottomLines_0_index < VISION_LINES_BOTTOMLINES_ARRAY_SIZE; bottomLines_0_index++) {
                    for (int i = index; i < length; i++) {
                        index = i + 1;
                        if (bracecount == 0 && str[i] == '=') {
                            endKey = i - 1;
                            startVar = index;
                            continue;
                        }
                        if (bracecount == 0 && isspace(str[i])) {
                            startVar = index;
                            if (endKey == -1) {
                                startKey = index;
                            }
                            continue;
                        }
                        if (bracecount == 0 && str[i] == ',') {
                            index = i - 1;
                            break;
                        }
                        if (str[i] == '{') {
                            bracecount++;
                            continue;
                        }
                        if (str[i] == '}') {
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
                        strncpy(key, str + startKey, ((size_t)(endKey - startKey) + 1));
                        key[(endKey - startKey) + 1] = 0;
                    } else {
                        key[0] = 0;
                    }
                    strncpy(var_str, str + startVar, ((size_t)(index - startVar) + 1));
                    var_str[(index - startVar) + 1] = 0;
                    bracecount = 0;
                    index += 2;
                    startVar = index;
                    startKey = startVar;
                    endKey = -1;
                    struct wb_vision_line bottomLines_0;
                    wb_vision_line_from_string(&bottomLines_0, var_str);
                    self->bottomLines[bottomLines_0_index] = bottomLines_0;;
                }
                index = restartIndex;
                break;
            }
            case 2:
            {
                self->numTopLines = ((uint8_t)atoi(var_str));
                break;
            }
            case 3:
            {
                self->numBottomLines = ((uint8_t)atoi(var_str));
                break;
            }
            case 4:
            {
                self->frameNumber = ((uint64_t)atoll(var_str));
                break;
            }
        }
        if (varIndex >= 0) {
            varIndex++;
        }
    } while(index < length);
    return self;
}

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Convert to a compressed, serialised, network byte order byte stream.
 */
size_t wb_vision_lines_to_network_serialised(const struct wb_vision_lines *self, char *dst)
{
    uint16_t bit_offset = 0;
        //Class generator does not support array network compression.
        //Copying into the buffer, uncompressed
        do { //limit declaration scope
          uint32_t len = 5;
          uint32_t bytes = len * sizeof(struct wb_vision_line);
          const char *buf = (const char *)&self->topLines[0];
          uint32_t c;
          int8_t b;
          for (c = 0; c < bytes; c++) {
            for (b = 7; b >= 0; b--) {
                do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((buf[c] >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
            }
          }
        } while(false);

        //Class generator does not support array network compression.
        //Copying into the buffer, uncompressed
        do { //limit declaration scope
          uint32_t len = 5;
          uint32_t bytes = len * sizeof(struct wb_vision_line);
          const char *buf = (const char *)&self->bottomLines[0];
          uint32_t c;
          int8_t b;
          for (c = 0; c < bytes; c++) {
            for (b = 7; b >= 0; b--) {
                do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((buf[c] >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
            }
          }
        } while(false);

    uint8_t numTopLines_nbo = (self->numTopLines);
    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((numTopLines_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    uint8_t numBottomLines_nbo = (self->numBottomLines);
    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((numBottomLines_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    uint64_t frameNumber_nbo = htonll(self->frameNumber);
    do {
      int8_t b;
      for (b = (64 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((frameNumber_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)self;
    (void)dst;
    return bit_offset;
}

/**
 * Convert from a compressed, serialised, network byte order byte stream.
 */
size_t wb_vision_lines_from_network_serialised(const char *src, struct wb_vision_lines *dst)
{
    uint16_t bit_offset = 0;
        //Class generator does not support array network compression.
        //Copying into the buffer, uncompressed
        do { //limit declaration scope
          uint32_t len = 5;
          uint32_t bytes = len * sizeof(struct wb_vision_line);
          char *buf = (char *)malloc(bytes);
          uint32_t c;
          int8_t b;
          for (c = 0; c < bytes; c++) {
            for (b = 7; b >= 0; b--) {
                do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        buf[c] ^= (-bitValue ^ buf[c]) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
            }
          }
          memcpy(&dst->topLines[0], &buf[0], bytes);
          free(buf);
        } while(false);

        //Class generator does not support array network compression.
        //Copying into the buffer, uncompressed
        do { //limit declaration scope
          uint32_t len = 5;
          uint32_t bytes = len * sizeof(struct wb_vision_line);
          char *buf = (char *)malloc(bytes);
          uint32_t c;
          int8_t b;
          for (c = 0; c < bytes; c++) {
            for (b = 7; b >= 0; b--) {
                do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        buf[c] ^= (-bitValue ^ buf[c]) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
            }
          }
          memcpy(&dst->bottomLines[0], &buf[0], bytes);
          free(buf);
        } while(false);

    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->numTopLines ^= (-bitValue ^ dst->numTopLines) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->numTopLines = (dst->numTopLines);

    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->numBottomLines ^= (-bitValue ^ dst->numBottomLines) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->numBottomLines = (dst->numBottomLines);

    do {
      int8_t b;
      for (b = (64 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->frameNumber ^= (-bitValue ^ dst->frameNumber) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->frameNumber = ntohll(dst->frameNumber);
    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)src;
    (void)dst;
    return bit_offset;
}

/*#endif // WHITEBOARD_SERIALISATION*/
