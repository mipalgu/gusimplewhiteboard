/*
 * file wb_teleoperation_control.c
 *
 * This file was generated by classgenerator from teleoperationControl.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 12:46, 09/10/2018.
 * Copyright © 2018 Carl Lusty. All rights reserved.
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

#include "wb_teleoperation_control.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* Network byte order functions */
#if defined(__linux)
#  include <endian.h>
#  include <byteswap.h>
#elif defined(__APPLE__) //Needs double checking
#  include <machine/endian.h>
#  include <machine/byte_order.h>
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

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_teleoperation_control_description(const struct wb_teleoperation_control* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "ip=%u", self->ip);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "action=%d", self->action);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "stance=%d", self->stance);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "streamType=%d", self->streamType);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "selectedCamera=%d", self->selectedCamera);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "sayString=%s", self->sayString);
    return descString;
}

/**
 * Convert to a string.
 */
const char* wb_teleoperation_control_to_string(const struct wb_teleoperation_control* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->ip);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->action);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->stance);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->streamType);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->selectedCamera);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%s", self->sayString);
    return toString;
}

/**
 * Convert from a string.
 */
struct wb_teleoperation_control* wb_teleoperation_control_from_string(struct wb_teleoperation_control* self, const char* str)
{
    size_t temp_length = strlen(str);
    int length = (temp_length <= INT_MAX) ? ((int)((ssize_t)temp_length)) : -1;
    if (length < 1) {
        return self;
    }
    char var_str_buffer[TELEOPERATIONCONTROL_TO_STRING_BUFFER_SIZE + 1];
    char* var_str = &var_str_buffer[0];
    char key_buffer[15];
    char* key = &key_buffer[0];
    int bracecount = 0;
    int lastBrace = -1;
    int startVar = 0;
    int index = 0;
    int startKey = 0;
    int endKey = 0;
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
        if (key != NULLPTR) {
            if (0 == strcmp("ip", key)) {
                varIndex = 0;
            } else if (0 == strcmp("action", key)) {
                varIndex = 1;
            } else if (0 == strcmp("stance", key)) {
                varIndex = 2;
            } else if (0 == strcmp("streamType", key)) {
                varIndex = 3;
            } else if (0 == strcmp("selectedCamera", key)) {
                varIndex = 4;
            } else if (0 == strcmp("sayString", key)) {
                varIndex = 5;
            }
        }
        switch (varIndex) {
            case 0:
            {
                self->ip = ((uint8_t)atoi(var_str));
                break;
            }
            case 1:
            {
                self->action = ((int32_t)atoi(var_str));
                break;
            }
            case 2:
            {
                self->stance = ((int32_t)atoi(var_str));
                break;
            }
            case 3:
            {
                self->streamType = ((int32_t)atoi(var_str));
                break;
            }
            case 4:
            {
                self->selectedCamera = ((int32_t)atoi(var_str));
                break;
            }
            case 5:
            {
                strncpy(self->sayString, var_str, 30);
                break;
            }
        }
        varIndex++;
    } while(index < length);
    return self;
}

#endif // WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Convert to a compressed, serialised, network byte order byte stream.
 */
size_t wb_teleoperation_control_to_network_serialised(const struct wb_teleoperation_control *self, char *dst)
{
    uint16_t bit_offset = 0;
    uint8_t ip_nbo = (self->ip);
    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((ip_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    int32_t action_nbo = htonl(self->action);
    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((action_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    int32_t stance_nbo = htonl(self->stance);
    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((stance_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    int32_t streamType_nbo = htonl(self->streamType);
    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((streamType_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    int32_t selectedCamera_nbo = htonl(self->selectedCamera);
    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((selectedCamera_nbo >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);

    do { //limit declaration scope
      uint8_t len = strlen(self->sayString);
      int8_t b;
      for (b = 7; b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((len >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
      }
      uint8_t c;
      for (c = 0; c < len; c++) {
        for (b = 7; b >= 0; b--) {
            do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        unsigned long newbit = !!((self->sayString[c] >> b) & 1U);
        dst[byte] ^= (-newbit ^ dst[byte]) & (1UL << bit);
        bit_offset = bit_offset + 1;
      } while(false);
        }
      }
    } while(false);
    return bit_offset;
}

/**
 * Convert from a compressed, serialised, network byte order byte stream.
 */
size_t wb_teleoperation_control_from_network_serialised(const char *src, struct wb_teleoperation_control *dst)
{
    uint16_t bit_offset = 0;
    do {
      int8_t b;
      for (b = (8 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->ip ^= (-bitValue ^ dst->ip) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->ip = (dst->ip);

    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->action ^= (-bitValue ^ dst->action) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->action = ntohl(dst->action);

    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->stance ^= (-bitValue ^ dst->stance) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->stance = ntohl(dst->stance);

    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->streamType ^= (-bitValue ^ dst->streamType) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->streamType = ntohl(dst->streamType);

    do {
      int8_t b;
      for (b = (32 - 1); b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->selectedCamera ^= (-bitValue ^ dst->selectedCamera) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
    } while(false);
    dst->selectedCamera = ntohl(dst->selectedCamera);

    do {
      uint8_t len = 0;
      int8_t b;
      for (b = 7; b >= 0; b--) {
          do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        len ^= (-bitValue ^ len) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
      }
      uint8_t c;
      for (c = 0; c < len; c++) {
        for (b = 7; b >= 0; b--) {
            do {
        uint16_t byte = bit_offset / 8;
        uint16_t bit = 7 - (bit_offset % 8);
        char dataByte = src[byte];
        unsigned char bitValue = (dataByte >> bit) & 1U;
        dst->sayString[c] ^= (-bitValue ^ dst->sayString[c]) & (1UL << b);
        bit_offset = bit_offset + 1;
      } while(false);
        }
      }
    } while (false);
    return bit_offset;
}

/*#endif // WHITEBOARD_SERIALISATION*/
