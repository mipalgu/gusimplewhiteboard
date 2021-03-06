/*
 * file wb_sensors_body_sensors.c
 *
 * This file was generated by classgenerator from sensors_body_sensors.gen.
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

#include "wb_sensors_body_sensors.h"
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
const char* wb_sensors_body_sensors_description(const struct wb_sensors_body_sensors* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "DCM_Time=%d", self->DCM_Time);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AccX=%lf", (double) self->InertialSensor_AccX);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AccY=%lf", (double) self->InertialSensor_AccY);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AccZ=%lf", (double) self->InertialSensor_AccZ);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_GyrX=%lf", (double) self->InertialSensor_GyrX);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_GyrY=%lf", (double) self->InertialSensor_GyrY);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_GyrZ=%lf", (double) self->InertialSensor_GyrZ);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AngleX=%lf", (double) self->InertialSensor_AngleX);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AngleY=%lf", (double) self->InertialSensor_AngleY);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AngleZ=%lf", (double) self->InertialSensor_AngleZ);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AccelerometerX=%lf", (double) self->InertialSensor_AccelerometerX);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AccelerometerY=%lf", (double) self->InertialSensor_AccelerometerY);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_AccelerometerZ=%lf", (double) self->InertialSensor_AccelerometerZ);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_GyroscopeX=%lf", (double) self->InertialSensor_GyroscopeX);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_GyroscopeY=%lf", (double) self->InertialSensor_GyroscopeY);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "InertialSensor_GyroscopeZ=%lf", (double) self->InertialSensor_GyroscopeZ);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "Battery_Charge=%u", self->Battery_Charge);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "Battery_Current=%u", self->Battery_Current);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "US=%lf", (double) self->US);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->ChestBoard_Button ? "ChestBoard_Button=true" : "ChestBoard_Button=false", bufferSize);
    return descString;
#pragma clang diagnostic pop
}

/**
 * Convert to a string.
 */
const char* wb_sensors_body_sensors_to_string(const struct wb_sensors_body_sensors* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->DCM_Time);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AccX);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AccY);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AccZ);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_GyrX);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_GyrY);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_GyrZ);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AngleX);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AngleY);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AngleZ);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AccelerometerX);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AccelerometerY);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_AccelerometerZ);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_GyroscopeX);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_GyroscopeY);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->InertialSensor_GyroscopeZ);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->Battery_Charge);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->Battery_Current);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%lf", (double) self->US);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->ChestBoard_Button ? "true" : "false", bufferSize);
    return toString;
#pragma clang diagnostic pop
}

/**
 * Convert from a string.
 */
struct wb_sensors_body_sensors* wb_sensors_body_sensors_from_string(struct wb_sensors_body_sensors* self, const char* str)
{
    size_t temp_length = strlen(str);
    int length = (temp_length <= INT_MAX) ? ((int)((ssize_t)temp_length)) : -1;
    if (length < 1 || length > SENSORS_BODY_SENSORS_DESC_BUFFER_SIZE) {
        return self;
    }
    char var_str_buffer[SENSORS_BODY_SENSORS_DESC_BUFFER_SIZE + 1];
    char* var_str = &var_str_buffer[0];
    char key_buffer[30];
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
            if (0 == strcmp("DCM_Time", key)) {
                varIndex = 0;
            } else if (0 == strcmp("InertialSensor_AccX", key)) {
                varIndex = 1;
            } else if (0 == strcmp("InertialSensor_AccY", key)) {
                varIndex = 2;
            } else if (0 == strcmp("InertialSensor_AccZ", key)) {
                varIndex = 3;
            } else if (0 == strcmp("InertialSensor_GyrX", key)) {
                varIndex = 4;
            } else if (0 == strcmp("InertialSensor_GyrY", key)) {
                varIndex = 5;
            } else if (0 == strcmp("InertialSensor_GyrZ", key)) {
                varIndex = 6;
            } else if (0 == strcmp("InertialSensor_AngleX", key)) {
                varIndex = 7;
            } else if (0 == strcmp("InertialSensor_AngleY", key)) {
                varIndex = 8;
            } else if (0 == strcmp("InertialSensor_AngleZ", key)) {
                varIndex = 9;
            } else if (0 == strcmp("InertialSensor_AccelerometerX", key)) {
                varIndex = 10;
            } else if (0 == strcmp("InertialSensor_AccelerometerY", key)) {
                varIndex = 11;
            } else if (0 == strcmp("InertialSensor_AccelerometerZ", key)) {
                varIndex = 12;
            } else if (0 == strcmp("InertialSensor_GyroscopeX", key)) {
                varIndex = 13;
            } else if (0 == strcmp("InertialSensor_GyroscopeY", key)) {
                varIndex = 14;
            } else if (0 == strcmp("InertialSensor_GyroscopeZ", key)) {
                varIndex = 15;
            } else if (0 == strcmp("Battery_Charge", key)) {
                varIndex = 16;
            } else if (0 == strcmp("Battery_Current", key)) {
                varIndex = 17;
            } else if (0 == strcmp("US", key)) {
                varIndex = 18;
            } else if (0 == strcmp("ChestBoard_Button", key)) {
                varIndex = 19;
            } else {
                varIndex = -1;
            }
        }
        switch (varIndex) {
            case -1: { break; }
            case 0:
            {
                self->DCM_Time = ((signed int)atoi(var_str));
                break;
            }
            case 1:
            {
                self->InertialSensor_AccX = ((float)atof(var_str));
                break;
            }
            case 2:
            {
                self->InertialSensor_AccY = ((float)atof(var_str));
                break;
            }
            case 3:
            {
                self->InertialSensor_AccZ = ((float)atof(var_str));
                break;
            }
            case 4:
            {
                self->InertialSensor_GyrX = ((float)atof(var_str));
                break;
            }
            case 5:
            {
                self->InertialSensor_GyrY = ((float)atof(var_str));
                break;
            }
            case 6:
            {
                self->InertialSensor_GyrZ = ((float)atof(var_str));
                break;
            }
            case 7:
            {
                self->InertialSensor_AngleX = ((float)atof(var_str));
                break;
            }
            case 8:
            {
                self->InertialSensor_AngleY = ((float)atof(var_str));
                break;
            }
            case 9:
            {
                self->InertialSensor_AngleZ = ((float)atof(var_str));
                break;
            }
            case 10:
            {
                self->InertialSensor_AccelerometerX = ((float)atof(var_str));
                break;
            }
            case 11:
            {
                self->InertialSensor_AccelerometerY = ((float)atof(var_str));
                break;
            }
            case 12:
            {
                self->InertialSensor_AccelerometerZ = ((float)atof(var_str));
                break;
            }
            case 13:
            {
                self->InertialSensor_GyroscopeX = ((float)atof(var_str));
                break;
            }
            case 14:
            {
                self->InertialSensor_GyroscopeY = ((float)atof(var_str));
                break;
            }
            case 15:
            {
                self->InertialSensor_GyroscopeZ = ((float)atof(var_str));
                break;
            }
            case 16:
            {
                self->Battery_Charge = ((uint8_t)atoi(var_str));
                break;
            }
            case 17:
            {
                self->Battery_Current = ((uint8_t)atoi(var_str));
                break;
            }
            case 18:
            {
                self->US = ((float)atof(var_str));
                break;
            }
            case 19:
            {
                self->ChestBoard_Button = strcmp(var_str, "true") == 0 || strcmp(var_str, "1") == 0;
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
size_t wb_sensors_body_sensors_to_network_serialised(const struct wb_sensors_body_sensors *self, char *dst)
{
    uint16_t bit_offset = 0;
    signed int DCM_Time_nbo = htonl(self->DCM_Time);
    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((DCM_Time_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

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

    uint8_t Battery_Charge_nbo = (self->Battery_Charge);
    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((Battery_Charge_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    uint8_t Battery_Current_nbo = (self->Battery_Current);
    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((Battery_Current_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    //The class generator does not support float types for network conversion.

      do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!(self->ChestBoard_Button ? 1U : 0U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)self;
    (void)dst;
    return bit_offset;
}

/**
 * Convert from a compressed, serialised, network byte order byte stream.
 */
size_t wb_sensors_body_sensors_from_network_serialised(const char *src, struct wb_sensors_body_sensors *dst)
{
    uint16_t bit_offset = 0;
    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->DCM_Time ^= (-bitValue ^ dst->DCM_Time) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->DCM_Time = ntohl(dst->DCM_Time);

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

    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->Battery_Charge ^= (-bitValue ^ dst->Battery_Charge) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->Battery_Charge = (dst->Battery_Charge);

    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->Battery_Current ^= (-bitValue ^ dst->Battery_Current) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->Battery_Current = (dst->Battery_Current);

    //The class generator does not support float types for network conversion.

      do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->ChestBoard_Button = bitValue != 0;
        bit_offset = bit_offset + 1;
      } while(false);
    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)src;
    (void)dst;
    return bit_offset;
}

/*#endif // WHITEBOARD_SERIALISATION*/
