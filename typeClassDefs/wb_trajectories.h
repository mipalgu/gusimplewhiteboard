/*
 * file wb_trajectories.h
 *
 * This file was generated by classgenerator from trajectories.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Callum at 10:58, 27/07/2018.
 * Copyright © 2018 Callum. All rights reserved.
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
 *        This product includes software developed by Callum.
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

#ifndef wb_trajectories_h
#define wb_trajectories_h

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

#include <gu_util.h>
#include <stdint.h>

#include <stdlib.h> //abs
#include <math.h>
#include <typeClassDefs/wb_point2d.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  Calculate the absolute position of a point relative to a known position.
 *
 *  @param position The known position.
 *  @param orientation The orientation of the known point (which way we are facing) in radians.
 *  @param distance The distance from the known position to the relative point.
 *
 *  @return The absolute position of the relative point.
 */
struct wb_point2d positionFromKnownPoint(struct wb_point2d position, double orientation, int distance);

double calculateDifferentialAngle(struct wb_point2d point1, struct wb_point2d point2);

double rotationToInline(struct wb_point2d position, double orientation, int distance, struct wb_point2d target);

int numberOfPointsInArc(double angle, int distance);

double stepAngleInArc(double angle, int steps);

struct wb_point2d positionOfStep(double stepAngle, int distance);

#ifdef __cplusplus
} //extern "C"
#endif

#define TRAJECTORIES_GENERATED 
#define TRAJECTORIES_C_STRUCT wb_trajectories 
#define TRAJECTORIES_NUMBER_OF_VARIABLES 0

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define TRAJECTORIES_DESC_BUFFER_SIZE 0
#define TRAJECTORIES_TO_STRING_BUFFER_SIZE 0
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * 
 */
struct wb_trajectories
{

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_trajectories_description(const struct wb_trajectories* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_trajectories_to_string(const struct wb_trajectories* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_trajectories* wb_trajectories_from_string(struct wb_trajectories* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_trajectories_to_network_serialised(const struct wb_trajectories *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_trajectories_from_network_serialised(const char *src, struct wb_trajectories *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_trajectories_h
