/*
 * file wb_landmark_sighting.c
 *
 * This file was generated by classgenerator from landmark_sighting.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Callum McColl. All rights reserved.
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

#ifndef WHITEBOARD_POSTER_STRING_CONVERSION
#define WHITEBOARD_POSTER_STRING_CONVERSION
#endif // WHITEBOARD_POSTER_STRING_CONVERSION

#include "wb_landmark_sighting.h"
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
const char* wb_landmark_sighting_description(const struct wb_landmark_sighting* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "direction=%d", self->direction);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "distance=%u", self->distance);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    switch (self->sightingType) {
        case CornerHorizonSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=CornerHorizonSightingType");
            break;
        }
        case CornerLineSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=CornerLineSightingType");
            break;
        }
        case CrossLineSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=CrossLineSightingType");
            break;
        }
        case GenericGoalPostSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=GenericGoalPostSightingType");
            break;
        }
        case GoalLandmarkSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=GoalLandmarkSightingType");
            break;
        }
        case LeftGoalPostSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=LeftGoalPostSightingType");
            break;
        }
        case LineHorizonSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=LineHorizonSightingType");
            break;
        }
        case RightGoalPostSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=RightGoalPostSightingType");
            break;
        }
        case StraightLineSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=StraightLineSightingType");
            break;
        }
        case TIntersectionLineSightingType:
        {
            len += snprintf(descString + len, bufferSize - len, "sightingType=TIntersectionLineSightingType");
            break;
        }
    }
    return descString;
}

/**
 * Convert to a string.
 */
const char* wb_landmark_sighting_to_string(const struct wb_landmark_sighting* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->direction);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->distance);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    switch (self->sightingType) {
        case CornerHorizonSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "CornerHorizonSightingType");
            break;
        }
        case CornerLineSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "CornerLineSightingType");
            break;
        }
        case CrossLineSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "CrossLineSightingType");
            break;
        }
        case GenericGoalPostSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "GenericGoalPostSightingType");
            break;
        }
        case GoalLandmarkSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "GoalLandmarkSightingType");
            break;
        }
        case LeftGoalPostSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "LeftGoalPostSightingType");
            break;
        }
        case LineHorizonSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "LineHorizonSightingType");
            break;
        }
        case RightGoalPostSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "RightGoalPostSightingType");
            break;
        }
        case StraightLineSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "StraightLineSightingType");
            break;
        }
        case TIntersectionLineSightingType:
        {
            len += snprintf(toString + len, bufferSize - len, "TIntersectionLineSightingType");
            break;
        }
    }
    return toString;
}

/**
 * Convert from a string.
 */
struct wb_landmark_sighting* wb_landmark_sighting_from_string(struct wb_landmark_sighting* self, const char* str)
{
    size_t temp_length = strlen(str);
    int length = (temp_length <= INT_MAX) ? ((int)((ssize_t)temp_length)) : -1;
    if (length < 1 || length > LANDMARK_SIGHTING_DESC_BUFFER_SIZE) {
        return self;
    }
    char var_str_buffer[LANDMARK_SIGHTING_DESC_BUFFER_SIZE + 1];
    char* var_str = &var_str_buffer[0];
    char key_buffer[13];
    char* key = &key_buffer[0];
    int bracecount = 0;
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
            strncpy(key, str + startKey, (endKey - startKey) + 1);
            key[(endKey - startKey) + 1] = 0;
        } else {
            key[0] = 0;
        }
        strncpy(var_str, str + startVar, (index - startVar) + 1);
        var_str[(index - startVar) + 1] = 0;
        bracecount = 0;
        index += 2;
        startVar = index;
        startKey = startVar;
        endKey = -1;
        if (strlen(key) > 0) {
            if (0 == strcmp("direction", key)) {
                varIndex = 0;
            } else if (0 == strcmp("distance", key)) {
                varIndex = 1;
            } else if (0 == strcmp("sightingType", key)) {
                varIndex = 2;
            } else {
                varIndex = -1;
            }
        }
        switch (varIndex) {
            case -1: { break; }
            case 0:
            {
                self->direction = ((int16_t)atoi(var_str));
                break;
            }
            case 1:
            {
                self->distance = ((uint16_t)atoi(var_str));
                break;
            }
            case 2:
            {
                if (strcmp("CornerHorizonSightingType", var_str) == 0) {
                    self->sightingType = CornerHorizonSightingType;
                } else if (strcmp("CornerLineSightingType", var_str) == 0) {
                    self->sightingType = CornerLineSightingType;
                } else if (strcmp("CrossLineSightingType", var_str) == 0) {
                    self->sightingType = CrossLineSightingType;
                } else if (strcmp("GenericGoalPostSightingType", var_str) == 0) {
                    self->sightingType = GenericGoalPostSightingType;
                } else if (strcmp("GoalLandmarkSightingType", var_str) == 0) {
                    self->sightingType = GoalLandmarkSightingType;
                } else if (strcmp("LeftGoalPostSightingType", var_str) == 0) {
                    self->sightingType = LeftGoalPostSightingType;
                } else if (strcmp("LineHorizonSightingType", var_str) == 0) {
                    self->sightingType = LineHorizonSightingType;
                } else if (strcmp("RightGoalPostSightingType", var_str) == 0) {
                    self->sightingType = RightGoalPostSightingType;
                } else if (strcmp("StraightLineSightingType", var_str) == 0) {
                    self->sightingType = StraightLineSightingType;
                } else if (strcmp("TIntersectionLineSightingType", var_str) == 0) {
                    self->sightingType = TIntersectionLineSightingType;
                } else {
                    self->sightingType = ((enum LandmarkSightingType)atoi(var_str));
                }
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
size_t wb_landmark_sighting_to_network_serialised(const struct wb_landmark_sighting *self, char *dst)
{
    uint16_t bit_offset = 0;
    int16_t direction_nbo = htons(self->direction);
    do {
      int8_t b;
      for (b = (16 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((direction_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    uint16_t distance_nbo = htons(self->distance);
    do {
      int8_t b;
      for (b = (16 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((distance_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    enum LandmarkSightingType sightingType_nbo = htonl(self->sightingType);
    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((sightingType_nbo >> b) & 1U);
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
size_t wb_landmark_sighting_from_network_serialised(const char *src, struct wb_landmark_sighting *dst)
{
    uint16_t bit_offset = 0;
    do {
      int8_t b;
      for (b = (16 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->direction ^= (-bitValue ^ dst->direction) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->direction = ntohs(dst->direction);

    do {
      int8_t b;
      for (b = (16 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->distance ^= (-bitValue ^ dst->distance) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->distance = ntohs(dst->distance);

    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->sightingType ^= (-bitValue ^ dst->sightingType) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->sightingType = ntohl(dst->sightingType);
    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)src;
    (void)dst;
    return bit_offset;
}

/*#endif // WHITEBOARD_SERIALISATION*/
