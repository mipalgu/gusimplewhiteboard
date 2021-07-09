/*
 * file wb_sensors_torsojointtemps.c
 *
 * This file was generated by classgenerator from SENSORS_TorsoJointTemps.txt.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2021 Carl Lusty. All rights reserved.
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

#ifndef WHITEBOARD_POSTER_STRING_CONVERSION
#define WHITEBOARD_POSTER_STRING_CONVERSION
#endif // WHITEBOARD_POSTER_STRING_CONVERSION

#include "wb_sensors_torsojointtemps.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

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

#if (!defined(__BYTE_ORDER) && !defined(__LITTLE_ENDIAN)) || (defined(__BYTE_ORDER) && defined(__LITTLE_ENDIAN) && __BYTE_ORDER == __LITTLE_ENDIAN)
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
const char* wb_sensors_torsojointtemps_description(const struct wb_sensors_torsojointtemps* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "HeadYaw=%lf", (double) self->HeadYaw);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "HeadPitch=%lf", (double) self->HeadPitch);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "LShoulderPitch=%lf", (double) self->LShoulderPitch);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "LShoulderRoll=%lf", (double) self->LShoulderRoll);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "LElbowYaw=%lf", (double) self->LElbowYaw);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "LElbowRoll=%lf", (double) self->LElbowRoll);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "LHipYawPitch=%lf", (double) self->LHipYawPitch);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "LHipRoll=%lf", (double) self->LHipRoll);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "LHipPitch=%lf", (double) self->LHipPitch);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "RHipRoll=%lf", (double) self->RHipRoll);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "RHipPitch=%lf", (double) self->RHipPitch);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "RShoulderPitch=%lf", (double) self->RShoulderPitch);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "RShoulderRoll=%lf", (double) self->RShoulderRoll);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "RElbowYaw=%lf", (double) self->RElbowYaw);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "RElbowRoll=%lf", (double) self->RElbowRoll);
    return descString;
#pragma clang diagnostic pop
}

/**
 * Convert to a string.
 */
const char* wb_sensors_torsojointtemps_to_string(const struct wb_sensors_torsojointtemps* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->HeadYaw);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->HeadPitch);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->LShoulderPitch);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->LShoulderRoll);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->LElbowYaw);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->LElbowRoll);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->LHipYawPitch);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->LHipRoll);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->LHipPitch);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->RHipRoll);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->RHipPitch);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->RShoulderPitch);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->RShoulderRoll);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->RElbowYaw);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->RElbowRoll);
    return toString;
#pragma clang diagnostic pop
}

/**
 * Convert from a string.
 */
struct wb_sensors_torsojointtemps* wb_sensors_torsojointtemps_from_string(struct wb_sensors_torsojointtemps* self, const char* str)
{
    size_t temp_length = strlen(str);
    int length = (temp_length <= INT_MAX) ? ((int)((ssize_t)temp_length)) : -1;
    if (length < 1 || length > WB_SENSORS_TORSOJOINTTEMPS_DESC_BUFFER_SIZE) {
        return self;
    }
    char var_str_buffer[WB_SENSORS_TORSOJOINTTEMPS_DESC_BUFFER_SIZE + 1];
    char* var_str = &var_str_buffer[0];
    char key_buffer[15];
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
            if (0 == strcmp("HeadYaw", key)) {
                varIndex = 0;
            } else if (0 == strcmp("HeadPitch", key)) {
                varIndex = 1;
            } else if (0 == strcmp("LShoulderPitch", key)) {
                varIndex = 2;
            } else if (0 == strcmp("LShoulderRoll", key)) {
                varIndex = 3;
            } else if (0 == strcmp("LElbowYaw", key)) {
                varIndex = 4;
            } else if (0 == strcmp("LElbowRoll", key)) {
                varIndex = 5;
            } else if (0 == strcmp("LHipYawPitch", key)) {
                varIndex = 6;
            } else if (0 == strcmp("LHipRoll", key)) {
                varIndex = 7;
            } else if (0 == strcmp("LHipPitch", key)) {
                varIndex = 8;
            } else if (0 == strcmp("RHipRoll", key)) {
                varIndex = 9;
            } else if (0 == strcmp("RHipPitch", key)) {
                varIndex = 10;
            } else if (0 == strcmp("RShoulderPitch", key)) {
                varIndex = 11;
            } else if (0 == strcmp("RShoulderRoll", key)) {
                varIndex = 12;
            } else if (0 == strcmp("RElbowYaw", key)) {
                varIndex = 13;
            } else if (0 == strcmp("RElbowRoll", key)) {
                varIndex = 14;
            } else {
                varIndex = -1;
            }
        }
        switch (varIndex) {
            case -1: { break; }
            case 0:
            {
                self->HeadYaw = ((float)atof(var_str));
                break;
            }
            case 1:
            {
                self->HeadPitch = ((float)atof(var_str));
                break;
            }
            case 2:
            {
                self->LShoulderPitch = ((float)atof(var_str));
                break;
            }
            case 3:
            {
                self->LShoulderRoll = ((float)atof(var_str));
                break;
            }
            case 4:
            {
                self->LElbowYaw = ((float)atof(var_str));
                break;
            }
            case 5:
            {
                self->LElbowRoll = ((float)atof(var_str));
                break;
            }
            case 6:
            {
                self->LHipYawPitch = ((float)atof(var_str));
                break;
            }
            case 7:
            {
                self->LHipRoll = ((float)atof(var_str));
                break;
            }
            case 8:
            {
                self->LHipPitch = ((float)atof(var_str));
                break;
            }
            case 9:
            {
                self->RHipRoll = ((float)atof(var_str));
                break;
            }
            case 10:
            {
                self->RHipPitch = ((float)atof(var_str));
                break;
            }
            case 11:
            {
                self->RShoulderPitch = ((float)atof(var_str));
                break;
            }
            case 12:
            {
                self->RShoulderRoll = ((float)atof(var_str));
                break;
            }
            case 13:
            {
                self->RElbowYaw = ((float)atof(var_str));
                break;
            }
            case 14:
            {
                self->RElbowRoll = ((float)atof(var_str));
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
size_t wb_sensors_torsojointtemps_to_network_serialised(const struct wb_sensors_torsojointtemps *self, char *dst)
{
    uint16_t bit_offset = 0;
    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.
    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)self;
    (void)dst;
    return bit_offset;
}

/**
 * Convert from a compressed, serialised, network byte order byte stream.
 */
size_t wb_sensors_torsojointtemps_from_network_serialised(const char *src, struct wb_sensors_torsojointtemps *dst)
{
    uint16_t bit_offset = 0;
    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.

    //The class generator does not support float types for network conversion.
    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)src;
    (void)dst;
    return bit_offset;
}

/*#endif // WHITEBOARD_SERIALISATION*/
