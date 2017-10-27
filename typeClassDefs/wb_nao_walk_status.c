/*
 * file wb_nao_walk_status.c
 *
 * This file was generated by classgenerator from naoWalkStatus.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 09:53, 27/10/2017.
 * Copyright © 2017 Carl Lusty. All rights reserved.
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

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include "wb_nao_walk_status.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Convert to a description string.
 */
const char* wb_nao_walk_status_description(const struct wb_nao_walk_status* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "forward=%d", self->forward);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "left=%d", self->left);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "turn=%d", self->turn);
    return descString;
}

/**
 * Convert to a string.
 */
const char* wb_nao_walk_status_to_string(const struct wb_nao_walk_status* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->forward);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->left);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%d", self->turn);
    return toString;
}

/**
 * Convert from a string.
 */
struct wb_nao_walk_status* wb_nao_walk_status_from_string(struct wb_nao_walk_status* self, const char* str)
{
    char* strings[NAOWALKSTATUS_NUMBER_OF_VARIABLES];
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

        } else {
            strings[count] = gu_strtrim(tokenE);
            count++;
        }
        tokenS = strtok_r(NULL, s, &saveptr);
    }
    if (strings[0] != NULL)
        self->forward = (int16_t)atoi(strings[0]);
    if (strings[1] != NULL)
        self->left = (int16_t)atoi(strings[1]);
    if (strings[2] != NULL)
        self->turn = (int8_t)atoi(strings[2]);
    free(str_copy);
    return self;
}
#endif // WHITEBOARD_POSTER_STRING_CONVERSION
