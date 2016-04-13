/** 
 * file wb_sensors_footsensors.c 
 * 
 * This file was generated by classgenerator from SENSORSFootSensors.txt. 
 * DO NOT CHANGE MANUALLY! 
 * 
 * Created by Carl Lusty at 12:42, 13/4/2016 
 * Copyright (c) 2016 Carl Lusty 
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
 *    This product includes software developed by Carl Lusty. 
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


#include "wb_sensors_footsensors.h" 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

/** convert to a description string */  
const char* wb_sensors_footsensors_description(const struct wb_sensors_footsensors* self, char* descString, size_t bufferSize) 
{ 
    size_t len; 

    snprintf(descString+len, bufferSize-len, "LFoot_FSR_FrontLeft=%f", self->LFoot_FSR_FrontLeft); 
    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "LFoot_FSR_FrontRight=%f", self->LFoot_FSR_FrontRight); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "LFoot_FSR_RearLeft=%f", self->LFoot_FSR_RearLeft); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "LFoot_FSR_RearRight=%f", self->LFoot_FSR_RearRight); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "LFoot_FSR_CenterOfPressure_X=%f", self->LFoot_FSR_CenterOfPressure_X); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "LFoot_FSR_CenterOfPressure_Y=%f", self->LFoot_FSR_CenterOfPressure_Y); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "RFoot_FSR_FrontLeft=%f", self->RFoot_FSR_FrontLeft); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "RFoot_FSR_FrontRight=%f", self->RFoot_FSR_FrontRight); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "RFoot_FSR_RearLeft=%f", self->RFoot_FSR_RearLeft); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "RFoot_FSR_RearRight=%f", self->RFoot_FSR_RearRight); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "RFoot_FSR_CenterOfPressure_X=%f", self->RFoot_FSR_CenterOfPressure_X); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(descString+len, bufferSize-len, "RFoot_FSR_CenterOfPressure_Y=%f", self->RFoot_FSR_CenterOfPressure_Y); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(descString, "LFoot_Bumper_Left=", bufferSize); 
        gu_strlcat(descString, self->LFoot_Bumper_Left ? "true" : "false", bufferSize); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(descString, "LFoot_Bumper_Right=", bufferSize); 
        gu_strlcat(descString, self->LFoot_Bumper_Right ? "true" : "false", bufferSize); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(descString, "RFoot_Bumper_Left=", bufferSize); 
        gu_strlcat(descString, self->RFoot_Bumper_Left ? "true" : "false", bufferSize); 
    } 

    len = gu_strlcat(descString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(descString, "RFoot_Bumper_Right=", bufferSize); 
        gu_strlcat(descString, self->RFoot_Bumper_Right ? "true" : "false", bufferSize); 
    } 

	return descString; 
} 

/** convert to a string */  
const char* wb_sensors_footsensors_to_string(const struct wb_sensors_footsensors* self, char* toString, size_t bufferSize) 
{ 
    size_t len; 

    snprintf(toString+len, bufferSize-len, "%f", self->LFoot_FSR_FrontLeft); 
    len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->LFoot_FSR_FrontRight); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->LFoot_FSR_RearLeft); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->LFoot_FSR_RearRight); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->LFoot_FSR_CenterOfPressure_X); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->LFoot_FSR_CenterOfPressure_Y); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->RFoot_FSR_FrontLeft); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->RFoot_FSR_FrontRight); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->RFoot_FSR_RearLeft); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->RFoot_FSR_RearRight); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->RFoot_FSR_CenterOfPressure_X); 
    } 

     len = gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        snprintf(toString+len, bufferSize-len, "%f", self->RFoot_FSR_CenterOfPressure_Y); 
    } 

     gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(toString, self->LFoot_Bumper_Left ? "true" : "false", bufferSize); 

    } 

    gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(toString, self->LFoot_Bumper_Right ? "true" : "false", bufferSize); 

    } 

    gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(toString, self->RFoot_Bumper_Left ? "true" : "false", bufferSize); 

    } 

    gu_strlcat(toString, ", ", bufferSize); 

    if (len < bufferSize) 
    { 
        gu_strlcat(toString, self->RFoot_Bumper_Right ? "true" : "false", bufferSize); 

    } 

    return toString; 
} 

/** convert from a string */  
struct wb_sensors_footsensors* wb_sensors_footsensors_from_string(struct wb_sensors_footsensors* self, const char* str) 
{ 
    char* strings[SENSORSFOOTSENSORSNUMBER_OF_VARIABLES]; 
    memset(strings, 0, sizeof(strings)); 
    char* saveptr; 
    int count = 0; 

    char* str_copy = gu_strdup(str); 

    const char s[2] = ",";   /// delimeter 
    const char e = '=';      /// delimeter 
    char* tokenS, *tokenE; 

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

        strings[count] = gu_strtrim(tokenE); 

        count++; 
        tokenS = strtok_r(NULL, s, &saveptr); 
    } 

    if (strings[0] != NULL) 
       self->LFoot_FSR_FrontLeft = (float)atof(strings[0]); 

    if (strings[1] != NULL) 
       self->LFoot_FSR_FrontRight = (float)atof(strings[1]); 

    if (strings[2] != NULL) 
       self->LFoot_FSR_RearLeft = (float)atof(strings[2]); 

    if (strings[3] != NULL) 
       self->LFoot_FSR_RearRight = (float)atof(strings[3]); 

    if (strings[4] != NULL) 
       self->LFoot_FSR_CenterOfPressure_X = (float)atof(strings[4]); 

    if (strings[5] != NULL) 
       self->LFoot_FSR_CenterOfPressure_Y = (float)atof(strings[5]); 

    if (strings[6] != NULL) 
       self->RFoot_FSR_FrontLeft = (float)atof(strings[6]); 

    if (strings[7] != NULL) 
       self->RFoot_FSR_FrontRight = (float)atof(strings[7]); 

    if (strings[8] != NULL) 
       self->RFoot_FSR_RearLeft = (float)atof(strings[8]); 

    if (strings[9] != NULL) 
       self->RFoot_FSR_RearRight = (float)atof(strings[9]); 

    if (strings[10] != NULL) 
       self->RFoot_FSR_CenterOfPressure_X = (float)atof(strings[10]); 

    if (strings[11] != NULL) 
       self->RFoot_FSR_CenterOfPressure_Y = (float)atof(strings[11]); 

    if (strings[12] != NULL) 
       self->LFoot_Bumper_Left = strcmp(strings[12], "true") == 0  || strcmp(strings[12], "1") == 0 ? true : false; 

    if (strings[13] != NULL) 
       self->LFoot_Bumper_Right = strcmp(strings[13], "true") == 0  || strcmp(strings[13], "1") == 0 ? true : false; 

    if (strings[14] != NULL) 
       self->RFoot_Bumper_Left = strcmp(strings[14], "true") == 0  || strcmp(strings[14], "1") == 0 ? true : false; 

    if (strings[15] != NULL) 
       self->RFoot_Bumper_Right = strcmp(strings[15], "true") == 0  || strcmp(strings[15], "1") == 0 ? true : false; 

    free(str_copy); 

    return self; 
}; 
