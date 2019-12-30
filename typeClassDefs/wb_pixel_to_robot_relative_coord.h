/*
 * file wb_pixel_to_robot_relative_coord.h
 *
 * This file was generated by classgenerator from pixel_to_robot_relative_coord.gen.
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

#ifndef wb_pixel_to_robot_relative_coord_h
#define wb_pixel_to_robot_relative_coord_h

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

#include "wb_sensors_torsojointsensors.h"
#include "wb_sensors_legjointsensors.h"
#include "wb_vision_control_status.h"
#include "gu_util.h"
#include <stdlib.h> //abs

#define CAMERA_HFOV (60.97*M_PI/180)
#define CAMERA_VFOV (47.64*M_PI/180)

#define BOTTOM_CAMERA_ANGLE (-39.7*M_PI/180)
#define TOP_CAMERA_ANGLE (-1.2*M_PI/180)

//#define HEAD_BASE_HEIGHT 0.45959
#define HEAD_BASE_HEIGHT 0.417
#define HEAD_BASE_HEIGHT_KNEELING 0.377

#define BOTTOM_CAMERA_OFFSET_Z 0.01774
#define TOP_CAMERA_OFFSET_Z 0.06364
#define BOTTOM_CAMERA_OFFSET_X 0.05071
#define TOP_CAMERA_OFFSET_X 0.05871

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
# define CONV_TO_IMG(x, r) (static_cast<uint16_t>((x + INT16_MAX) / ((INT16_MAX * 2) / r)))
#else
# define CONV_TO_IMG(x, r) ((uint16_t)((x + INT16_MAX) / ((INT16_MAX * 2) / r)))
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wdouble-promotion"
#pragma clang diagnostic ignored "-Wunused-parameter"

static double get_camera_height(enum VisionCamera camera, struct wb_sensors_torsojointsensors *joints, bool kneeling);

// x: image X coord
// y: image Y coord
// camera: which camera you want this related to
// vs: the vision status message, needed for resolution
// joints: the nao joint positions
// *distance: output pararm, populated with the calculated distance
// *angle: the bearing to the object in the image. Relative to the robot torso.
void pixel_to_rr_coord(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle);

void pixel_to_rr_coord_legs(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, struct wb_sensors_legjointsensors *leg_sensors, double *distance, double *angle);

void pixel_to_rr_coord_legs_no_conv(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, struct wb_sensors_legjointsensors *leg_sensors, double *distance, double *angle);

void pixel_to_rr_coord_kneeling(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle, bool kneeling);

void pixel_to_rr_coord_kneeling_conv(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle, bool kneeling, bool conv);

void pixel_to_rr_coord_no_conv(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle);

void rr_to_pixel_coord(double angle, double distance, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, int32_t *sx, int32_t *sy, bool kneeling);

#pragma clang diagnostic pop

#ifdef __cplusplus
} //extern "C"
#endif

#define PIXEL_TO_ROBOT_RELATIVE_COORD_GENERATED 
#define PIXEL_TO_ROBOT_RELATIVE_COORD_C_STRUCT wb_pixel_to_robot_relative_coord 
#define PIXEL_TO_ROBOT_RELATIVE_COORD_NUMBER_OF_VARIABLES 0

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define PIXEL_TO_ROBOT_RELATIVE_COORD_DESC_BUFFER_SIZE 0
#define PIXEL_TO_ROBOT_RELATIVE_COORD_TO_STRING_BUFFER_SIZE 0
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++-compat"

/**
 * Contains a static method for converting from Nao vision format to a bearing and a dist
 */
struct wb_pixel_to_robot_relative_coord
{

};
#pragma clang diagnostic pop

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_pixel_to_robot_relative_coord_description(const struct wb_pixel_to_robot_relative_coord* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_pixel_to_robot_relative_coord_to_string(const struct wb_pixel_to_robot_relative_coord* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_pixel_to_robot_relative_coord* wb_pixel_to_robot_relative_coord_from_string(struct wb_pixel_to_robot_relative_coord* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_pixel_to_robot_relative_coord_to_network_serialised(const struct wb_pixel_to_robot_relative_coord *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_pixel_to_robot_relative_coord_from_network_serialised(const char *src, struct wb_pixel_to_robot_relative_coord *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_pixel_to_robot_relative_coord_h
