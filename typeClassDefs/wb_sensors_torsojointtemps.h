/*
 * file wb_sensors_torsojointtemps.h
 *
 * This file was generated by classgenerator from SENSORS_TorsoJointTemps.txt.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Carl Lusty. All rights reserved.
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

#ifndef wb_sensors_torsojointtemps_h
#define wb_sensors_torsojointtemps_h

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

#define SENSORS_TORSOJOINTTEMPS_GENERATED 
#define SENSORS_TORSOJOINTTEMPS_C_STRUCT wb_sensors_torsojointtemps 
#define SENSORS_TORSOJOINTTEMPS_NUMBER_OF_VARIABLES 15

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define SENSORS_TORSOJOINTTEMPS_DESC_BUFFER_SIZE 1158
#define SENSORS_TORSOJOINTTEMPS_TO_STRING_BUFFER_SIZE 989
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * @brief Temp class for various joints
 * From Nao Docs: There are two different Devices that return a temperature: the MotorBoard, and the Battery. For both, the temperature returned in “Value” is in deg Celsius. The motor temperature is a simulated one, using electric current value of the motor. Even when the robot just starts, the temperature is quite high (50°C).The simulation starts at this value mainly due to the internal temperature value. The motor board implements a temperature limitation: as long as the simulated temperature reaches 75°C, the current limitation is decreased to stay under 85°C.
 */
struct wb_sensors_torsojointtemps
{

    /**
     * Deg Celsius.
     */
    PROPERTY(float, HeadYaw)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, HeadPitch)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, LShoulderPitch)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, LShoulderRoll)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, LElbowYaw)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, LElbowRoll)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, LHipYawPitch)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, LHipRoll)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, LHipPitch)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, RHipRoll)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, RHipPitch)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, RShoulderPitch)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, RShoulderRoll)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, RElbowYaw)

    /**
     * Deg Celsius.
     */
    PROPERTY(float, RElbowRoll)

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_sensors_torsojointtemps_description(const struct wb_sensors_torsojointtemps* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_sensors_torsojointtemps_to_string(const struct wb_sensors_torsojointtemps* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_sensors_torsojointtemps* wb_sensors_torsojointtemps_from_string(struct wb_sensors_torsojointtemps* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_sensors_torsojointtemps_to_network_serialised(const struct wb_sensors_torsojointtemps *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_sensors_torsojointtemps_from_network_serialised(const char *src, struct wb_sensors_torsojointtemps *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_sensors_torsojointtemps_h
