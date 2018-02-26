/*
 * file wb_top_particles.c
 *
 * This file was generated by classgenerator from TopParticles.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Vlad Estivill-Castro at 03:11, 26/02/2018.
 * Copyright © 2018 Vlad Estivill-Castro. All rights reserved.
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
 *        This product includes software developed by Vlad Estivill-Castro.
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

#include "wb_top_particles.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
#   define ntohs(x) bswap_32(x)
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
const char* wb_top_particles_description(const struct wb_top_particles* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;

    return descString;
}

/**
 * Convert to a string.
 */
const char* wb_top_particles_to_string(const struct wb_top_particles* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;

    return toString;
}

/**
 * Convert from a string.
 */
struct wb_top_particles* wb_top_particles_from_string(struct wb_top_particles* self, const char* str)
{
    char* strings[TOPPARTICLES_NUMBER_OF_VARIABLES];
    memset(strings, 0, sizeof(strings));
    char* saveptr;
    int count = 0;
    char* str_copy = gu_strdup(str);
    int isArray = 0;
    const char s[2] = ","; // delimeter
    const char e = '=';    // delimeter
    const char b1 = '{';   // delimeter
    const char b2 = '}';   // delimeter
    char* tokenS, *tokenE, *tokenB1, *tokenB2;
    tokenS = strtok_r(str_copy, s, &saveptr);
    char* particles_values[TOPPARTICLES_PARTICLES_ARRAY_SIZE];
    int particles_count = 0;
    int is_particles = 1;
    while (tokenS != NULL) {
        tokenE = strchr(tokenS, e);
        if (tokenE == NULL) {
            tokenE = tokenS;
        } else {
            tokenE++;
        }
        tokenB1 = strchr(gu_strtrim(tokenE), b1);
        if (tokenB1 == NULL) {
            tokenB1 = tokenE;
        } else {
            // start of an array
            tokenB1++;
            isArray = 1;
        }
        if (isArray) {
            tokenB2 = strchr(gu_strtrim(tokenB1), b2);
            if (is_particles == 1) {
                if (tokenB2 != NULL) {
                    tokenB1[strlen(tokenB1)-1] = 0;
                    is_particles = 0;
                    isArray = 0;
                    count++;
                }
                particles_values[particles_count] = gu_strtrim(tokenB1);
                particles_count++;
            }
        } else {
            strings[count] = gu_strtrim(tokenE);
            count++;
        }
        tokenS = strtok_r(NULL, s, &saveptr);
    }

    free(str_copy);
    return self;
}

#endif // WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a compressed, serialised, network byte order byte stream.
 */
size_t wb_top_particles_to_network_serialised(const struct wb_top_particles *self, char *dst)
{
    uint16_t bit_offset = 0;
    //The class generator does not support array network conversion yet.
    return bit_offset;
}

/**
 * Convert from a compressed, serialised, network byte order byte stream.
 */
size_t wb_top_particles_from_network_serialised(const char *src, struct wb_top_particles *dst)
{
    uint16_t bit_offset = 0;
    //The class generator does not support array network conversion yet.
    return bit_offset;
}
