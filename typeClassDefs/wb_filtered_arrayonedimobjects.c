/** 
 * file wb_filtered_arrayonedimobjects.c 
 * 
 * This file was generated by classgenerator from Filtered_ArrayOneDimObjects.txt. 
 * DO NOT CHANGE MANUALLY! 
 * 
 * Created by Vlad Estivill-Castro at 13:59, 26/6/2017 
 * Copyright (c) 2017 Vlad Estivill-Castro 
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
 *    This product includes software developed by Vlad Estivill-Castro. 
 * 
 * 4. Neither the name of the author nor the names of contributors 
 *    may be used to endorse or promote products derived from this 
 *    software without specific prior written permission. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 * 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
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
 */ 


#define WHITEBOARD_POSTER_STRING_CONVERSION
#include "wb_filtered_arrayonedimobjects.h" 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

/** convert to a description string */  
const char* wb_filtered_arrayonedimobjects_description(const struct wb_filtered_arrayonedimobjects* self, char* descString, size_t bufferSize) 
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0; 

    len = gu_strlcat(descString, "objects={", bufferSize); 
    int objects_first = 0; 

    for (int i = 0; i < FILTERED_ARRAYONEDIMOBJECTS_OBJECTS_ARRAY_SIZE; i++) 
    { 
        if (len < bufferSize) 
        { 
            if (objects_first == 1) 
            { 
                len = gu_strlcat(descString, ",", bufferSize); 
            } 
            snprintf(descString, bufferSize, "%p", self->objects[i]); 
        } 
        objects_first = 1; 
    } 
    gu_strlcat(descString, "}", bufferSize); 

	return descString; 
} 

/** convert to a string */  
const char* wb_filtered_arrayonedimobjects_to_string(const struct wb_filtered_arrayonedimobjects* self, char* toString, size_t bufferSize) 
{ 
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0; 

    len = gu_strlcat(toString, "{", bufferSize); 
    int objects_first = 0; 

    for (int i = 0; i < FILTERED_ARRAYONEDIMOBJECTS_OBJECTS_ARRAY_SIZE; i++) 
    { 
        if (len < bufferSize) 
        { 
            if (objects_first == 1) 
            { 
                len = gu_strlcat(toString, ",", bufferSize); 
            } 
            snprintf(toString, bufferSize, "%p", self->objects[i]); 
        } 
        objects_first = 1; 
    } 
    gu_strlcat(toString, "}", bufferSize); 

    return toString; 
} 

/** convert from a string */  
struct wb_filtered_arrayonedimobjects* wb_filtered_arrayonedimobjects_from_string(struct wb_filtered_arrayonedimobjects* self, const char* str) 
{ 
    char* strings[FILTERED_ARRAYONEDIMOBJECTS_NUMBER_OF_VARIABLES]; 
    memset(strings, 0, sizeof(strings)); 
    char* saveptr; 
    int count = 0; 

    char* str_copy = gu_strdup(str); 

    int isArray = 0; 

    char* objects_values[FILTERED_ARRAYONEDIMOBJECTS_OBJECTS_ARRAY_SIZE]; 
    int objects_count = 0; 
    int is_objects = 1; 

    const char s[2] = ",";   /// delimeter 
    const char e = '=';      /// delimeter 
    const char b1 = '{';    /// delimeter 
    const char b2 = '}';    /// delimeter 
    char* tokenS, *tokenE, *tokenB1, *tokenB2; 

    tokenS = strtok_r(str_copy, s, &saveptr); 

    while (tokenS != NULL) 
    { 
        tokenE = strchr(tokenS, e); 

        if (tokenE == NULL) 
        { 
             tokenE = tokenS; 
        } 
        else 
        { 
             tokenE++; 
        } 

        tokenB1 = strchr(gu_strtrim(tokenE), b1); 

        if (tokenB1 == NULL) 
        { 
            tokenB1 = tokenE; 
        } 
        else 
        { 
            // start of an array 
            tokenB1++; 
            isArray = 1; 
        } 

        if (isArray) 
        { 
            tokenB2 = strchr(gu_strtrim(tokenB1), b2); 
            if (is_objects == 1) 
            { 
                if (tokenB2 != NULL) 
                { 
                    tokenB1[strlen(tokenB1)-1] = 0; 
                    is_objects = 0; 
                    isArray = 0; 
                    count++; 
                } 

                objects_values[objects_count] = gu_strtrim(tokenB1); 
                objects_count++; 
            } 
        } 
        else 
        { 
            strings[count] = gu_strtrim(tokenE); 
            count++; 
        } 

        tokenS = strtok_r(NULL, s, &saveptr); 
    } 

    size_t objects_smallest = objects_count < FILTERED_ARRAYONEDIMOBJECTS_OBJECTS_ARRAY_SIZE ? objects_count : FILTERED_ARRAYONEDIMOBJECTS_OBJECTS_ARRAY_SIZE; 

    for (int i = 0; i < objects_smallest; i++) 
    { 
       self->objects[i] = (struct wb_filtered_vision_object)*wb_filtered_vision_object_from_string(&self->objects[i], objects_values[i]); 
    } 

    free(str_copy); 

    return self; 
}; 
