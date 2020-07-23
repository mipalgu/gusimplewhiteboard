/*
 * file wb_sensors_head_sensors.h
 *
 * This file was generated by classgenerator from sensors_head_sensors.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2020 Dimitri Joukoff. All rights reserved.
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
 *        This product includes software developed by Dimitri Joukoff.
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

#ifndef wb_sensors_head_sensors_h
#define wb_sensors_head_sensors_h

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#ifdef __linux
# ifndef _POSIX_SOURCE
#  define _POSIX_SOURCE 200112L
# endif
#endif
#ifndef _XOPEN_SOURCE
# define _XOPEN_SOURCE 700
#endif
#ifdef __APPLE__
# ifndef _DARWIN_C_SOURCE
#  define _DARWIN_C_SOURCE 200112L
# endif
# ifndef __DARWIN_C_LEVEL
#  define __DARWIN_C_LEVEL 200112L
# endif
#endif

#pragma clang diagnostic pop

#include <gu_util.h>
#include <stdint.h>

#define SENSORS_HEAD_SENSORS_GENERATED 
#define SENSORS_HEAD_SENSORS_C_STRUCT wb_sensors_head_sensors 
#define SENSORS_HEAD_SENSORS_NUMBER_OF_VARIABLES 3

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define SENSORS_HEAD_SENSORS_DESC_BUFFER_SIZE 71
#define SENSORS_HEAD_SENSORS_TO_STRING_BUFFER_SIZE 20
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Contains the current values of sensors located on top of the robot's head (designed for Nao H25 & H21 only)
 *
 * Examples
 *
 * Get the state of the Head_Touch_Front sensor
 *
 *    SensorsHeadSensors s = SensorsHeadSensors_t.get(); //get from the whiteboard
 *    bool button_state = s.Head_Touch_Frontt(); //pull the variable out of the class
 *
 * Notes:
 * Only the H25 and H21 models have capacitive sensors in the head, indicated by the blue leds on top of the head.
 */
struct wb_sensors_head_sensors
{

    /**
     * state of the front capacitive sensor located on top of the head, on / off. could use a 1 bit var here
     */
    PROPERTY(bool, Head_Touch_Front)

    /**
     * state of the middle capacitive sensor located on top of the head, on / off. could use a 1 bit var here
     */
    PROPERTY(bool, Head_Touch_Middle)

    /**
     * state of the back capacitive sensor located on top of the head, on / off. could use a 1 bit var here
     */
    PROPERTY(bool, Head_Touch_Rear)

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_sensors_head_sensors_description(const struct wb_sensors_head_sensors* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_sensors_head_sensors_to_string(const struct wb_sensors_head_sensors* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_sensors_head_sensors* wb_sensors_head_sensors_from_string(struct wb_sensors_head_sensors* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_sensors_head_sensors_to_network_serialised(const struct wb_sensors_head_sensors *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_sensors_head_sensors_from_network_serialised(const char *src, struct wb_sensors_head_sensors *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_sensors_head_sensors_h
