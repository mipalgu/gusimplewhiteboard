/** 
 * file wb_sensors_footsensors.h 
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


#ifndef wb_sensors_footsensors_h 
#define wb_sensors_footsensors_h 

#include "gu_util.h" 

#define SENSORSFOOTSENSORSNUMBER_OF_VARIABLES 16 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
#define SENSORSFOOTSENSORSDESC_BUFFER_SIZE 1169 
#define SENSORSFOOTSENSORSTO_STRING_BUFFER_SIZE 819 
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION 


/** 
 * @brief Body sensors c struct 
 */ 
struct wb_sensors_footsensors 
{ 
    /** front left force sensor on the left foot */ 
    PROPERTY(float, LFoot_FSR_FrontLeft) 

    /** front right force sensor on the left foot  */ 
    PROPERTY(float, LFoot_FSR_FrontRight) 

    /** rear left force sensor on the left foot  */ 
    PROPERTY(float, LFoot_FSR_RearLeft) 

    /** rear right force sensor on the left foot  */ 
    PROPERTY(float, LFoot_FSR_RearRight) 

    /** left foot center of pressure X  */ 
    PROPERTY(float, LFoot_FSR_CenterOfPressure_X) 

    /** left foot center of pressure Y  */ 
    PROPERTY(float, LFoot_FSR_CenterOfPressure_Y) 

    /** front left force sensor on the right foot  */ 
    PROPERTY(float, RFoot_FSR_FrontLeft) 

    /** front right force sensor on the right foot  */ 
    PROPERTY(float, RFoot_FSR_FrontRight) 

    /** rear left force sensor on the right foot  */ 
    PROPERTY(float, RFoot_FSR_RearLeft) 

    /** rear right force sensor on the right foot  */ 
    PROPERTY(float, RFoot_FSR_RearRight) 

    /** right foot center of pressure X   */ 
    PROPERTY(float, RFoot_FSR_CenterOfPressure_X) 

    /** right foot center of pressure Y  */ 
    PROPERTY(float, RFoot_FSR_CenterOfPressure_Y) 

    /** left bumper on the left foot (on / off)  */ 
    PROPERTY(bool, LFoot_Bumper_Left) 

    /** right bumper on the left foot (on / off)  */ 
    PROPERTY(bool, LFoot_Bumper_Right) 

    /** left bumper on the right foot (on / off)  */ 
    PROPERTY(bool, RFoot_Bumper_Left) 

    /** right bumper on the right foot (on / off)  */ 
    PROPERTY(bool, RFoot_Bumper_Right) 

}; 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
/** convert to a description string */  
const char* wb_sensors_footsensors_description(const struct wb_sensors_footsensors* self, char* descString, size_t bufferSize); 

/** convert to a string */  
const char* wb_sensors_footsensors_to_string(const struct wb_sensors_footsensors* self, char* toString, size_t bufferSize); 

/** convert from a string */  
struct wb_sensors_footsensors* wb_sensors_footsensors_from_string(struct wb_sensors_footsensors* self, const char* str); 
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION 

#endif /// wb_sensors_footsensors_h 
