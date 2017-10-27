/*
 * file wb_nao_walk_command.c
 *
 * This file was generated by classgenerator from naoWalkCommand.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 12:16, 27/10/2017.
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
#include "wb_nao_walk_command.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Convert to a description string.
 */
const char* wb_nao_walk_command_description(const struct wb_nao_walk_command* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "walkEngineOn=", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->walkEngineOn ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
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
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "exactStepsRequested=", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->exactStepsRequested ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "speed=%u", self->speed);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "odometryResetCounter=%u", self->odometryResetCounter);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "isFast=", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->isFast ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "kickWithLeftFoot=", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->kickWithLeftFoot ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "useShuffle=", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->useShuffle ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "leftArmLimp=", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->leftArmLimp ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, "rightArmLimp=", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, self->rightArmLimp ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "power=%u", self->power);
    if (len >= bufferSize) {
        return descString;
    }
    len = gu_strlcat(descString, ", ", bufferSize);
    if (len >= bufferSize) {
        return descString;
    }
    len += snprintf(descString + len, bufferSize - len, "bend=%u", self->bend);
    return descString;
}

/**
 * Convert to a string.
 */
const char* wb_nao_walk_command_to_string(const struct wb_nao_walk_command* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->walkEngineOn ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
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
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->exactStepsRequested ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->speed);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->odometryResetCounter);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->isFast ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->kickWithLeftFoot ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->useShuffle ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->leftArmLimp ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, self->rightArmLimp ? "true" : "false", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->power);
    if (len >= bufferSize) {
        return toString;
    }
    len = gu_strlcat(toString, ", ", bufferSize);
    if (len >= bufferSize) {
        return toString;
    }
    len += snprintf(toString + len, bufferSize - len, "%u", self->bend);
    return toString;
}

/**
 * Convert from a string.
 */
struct wb_nao_walk_command* wb_nao_walk_command_from_string(struct wb_nao_walk_command* self, const char* str)
{
    char* strings[NAOWALKCOMMAND_NUMBER_OF_VARIABLES];
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
        self->walkEngineOn = strcmp(strings[0], "true") == 0 || strcmp(strings[0], "1") == 0 ? true : false;
    if (strings[1] != NULL)
        self->forward = (int16_t)atoi(strings[1]);
    if (strings[2] != NULL)
        self->left = (int16_t)atoi(strings[2]);
    if (strings[3] != NULL)
        self->turn = (int8_t)atoi(strings[3]);
    if (strings[4] != NULL)
        self->exactStepsRequested = strcmp(strings[4], "true") == 0 || strcmp(strings[4], "1") == 0 ? true : false;
    if (strings[5] != NULL)
        self->speed = (uint8_t)atoi(strings[5]);
    if (strings[6] != NULL)
        self->odometryResetCounter = (uint8_t)atoi(strings[6]);
    if (strings[7] != NULL)
        self->isFast = strcmp(strings[7], "true") == 0 || strcmp(strings[7], "1") == 0 ? true : false;
    if (strings[8] != NULL)
        self->kickWithLeftFoot = strcmp(strings[8], "true") == 0 || strcmp(strings[8], "1") == 0 ? true : false;
    if (strings[9] != NULL)
        self->useShuffle = strcmp(strings[9], "true") == 0 || strcmp(strings[9], "1") == 0 ? true : false;
    if (strings[10] != NULL)
        self->leftArmLimp = strcmp(strings[10], "true") == 0 || strcmp(strings[10], "1") == 0 ? true : false;
    if (strings[11] != NULL)
        self->rightArmLimp = strcmp(strings[11], "true") == 0 || strcmp(strings[11], "1") == 0 ? true : false;
    if (strings[12] != NULL)
        self->power = (uint8_t)atoi(strings[12]);
    if (strings[13] != NULL)
        self->bend = (uint8_t)atoi(strings[13]);
    free(str_copy);
    return self;
}
#endif // WHITEBOARD_POSTER_STRING_CONVERSION
