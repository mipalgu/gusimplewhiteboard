/*
 * file wb_nao_walk_status.h
 *
 * This file was generated by classgenerator from naoWalkStatus.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2020 Carl Lusty. All rights reserved.
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

#ifndef wb_nao_walk_status_h
#define wb_nao_walk_status_h

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

#include "wb_odometry.h"

enum WalkEngineState {
	wes_Disconnected = 0,   ///< Not connected to the DCM, does not control any joints in this state
	wes_Walking,            ///< Walking around, includes stopping, kicking, transition from Standing etc... basically the walk engine is doing something
	wes_StoppedReady,       ///< In the Crouched stance, ready to walk again straight away but not currently moving anywhere
  wes_StoppedStanding     ///< In the Standing position, this position uses less power than Stopped / Crouched, it is a minimal stiffness posture. The robot it standing taller than the StoppedReady pose, with the legs straight.
};

#define NAOWALKSTATUS_GENERATED 
#define NAOWALKSTATUS_C_STRUCT wb_nao_walk_status 
#define NAOWALKSTATUS_NUMBER_OF_VARIABLES 3

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define NAOWALKSTATUS_DESC_BUFFER_SIZE 1078
#define NAOWALKSTATUS_TO_STRING_BUFFER_SIZE 1032
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Status message for the walk engine created by UNSW.
 * LICENSE:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/blob/master/LICENSE
 * Source:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/blob/master/robot/motion/generator/Walk2014Generator.cpp
 * Some of their documentation:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/wiki/Motion#walk2014-generator
 */
struct wb_nao_walk_status
{

    /**
     * The current state of the walk engine, see enum documentation.
     */
    PROPERTY(enum WalkEngineState, walkEngineState)

    /**
     * Current odometry object
     */
    PROPERTY(struct wb_odometry, odometry)

    /**
     * A counter used to reset the odometry object, change this value and send it via NaoWalkCommand to trigger an odometry reset.
     */
    PROPERTY(uint8_t, odometryResetCounter)

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_nao_walk_status_description(const struct wb_nao_walk_status* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_nao_walk_status_to_string(const struct wb_nao_walk_status* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_nao_walk_status* wb_nao_walk_status_from_string(struct wb_nao_walk_status* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_nao_walk_status_to_network_serialised(const struct wb_nao_walk_status *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_nao_walk_status_from_network_serialised(const char *src, struct wb_nao_walk_status *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_nao_walk_status_h
