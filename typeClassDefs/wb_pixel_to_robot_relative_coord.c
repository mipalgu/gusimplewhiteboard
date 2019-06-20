/*
 * file wb_pixel_to_robot_relative_coord.c
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

#ifndef WHITEBOARD_POSTER_STRING_CONVERSION
#define WHITEBOARD_POSTER_STRING_CONVERSION
#endif // WHITEBOARD_POSTER_STRING_CONVERSION

#include "wb_pixel_to_robot_relative_coord.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* Network byte order functions */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-macros"
#if defined(__linux)
#  include <endian.h>
#  include <byteswap.h>
#elif defined(__APPLE__) 
#  include <machine/endian.h>           //Needed for __BYTE_ORDER
#  include <architecture/byte_order.h>   //Needed for byte swap functions
#  define bswap_16(x) NXSwapShort(x)
#  define bswap_32(x) NXSwapInt(x)
#  define bswap_64(x) NXSwapLongLong(x)
#elif defined(ESP8266)
#  define bswap_16(x) __builtin_bswap16(x)
#  define bswap_32(x) __builtin_bswap32(x)
#  define bswap_64(x) __builtin_bswap64(x)
#else
  //Manually define swap macros?
#endif

#if __BYTE_ORDER == __LITTLE_ENDIAN
#  if !defined(htonll) && !defined(ntohll)
#   define htonll(x) bswap_64(x)
#   define ntohll(x) bswap_64(x)
#  endif
#  if !defined(htonl) && !defined(ntohl)
#   define htonl(x) bswap_32(x)
#   define ntohl(x) bswap_32(x)
#  endif
#  if !defined(htons) && !defined(ntohs)
#   define htons(x) bswap_16(x)
#   define ntohs(x) bswap_16(x)
#  endif
#else
#  if !defined(htonll) && !defined(ntohll)
#   define htonll(x) (x)
#   define ntohll(x) (x)
#  endif
#  if !defined(htonl) && !defined(ntohl)
#   define htonl(x) (x)
#   define ntohl(x) (x)
#  endif
#  if !defined(htons) && !defined(ntohs)
#   define htons(x) (x)
#   define ntohs(x) (x)
#  endif
#endif
#pragma clang diagnostic pop

void pixel_to_rr_coord(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle) {
    pixel_to_rr_coord_kneeling(sx, sy, camera, vs, joints, distance, angle, false);
}

void pixel_to_rr_coord_legs(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, struct wb_sensors_legjointsensors *leg_sensors, double *distance, double *angle) {
    pixel_to_rr_coord_kneeling(sx, sy, camera, vs, joints, distance, angle, leg_sensors->LKneePitch > 2.0f && leg_sensors->RKneePitch > 2.0f);
}

void pixel_to_rr_coord_no_conv(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle) {
    pixel_to_rr_coord_kneeling_conv(sx, sy, camera, vs, joints, distance, angle, false, false);
}

void pixel_to_rr_coord_kneeling(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle, bool kneeling) {
    pixel_to_rr_coord_kneeling_conv(sx, sy, camera, vs, joints, distance, angle, true, false);
}

void pixel_to_rr_coord_kneeling_conv(int32_t sx, int32_t sy, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, double *distance, double *angle, bool kneeling, bool conv) {

    //TODO Eugene needs to write a C version of the resolution enum to actual values
    //This should query 'vs' for the resolution!
    int image_width = 640;
    int image_height = 480;

    int32_t x = sx;
    int32_t y = sy;

    if(conv) {
        x = CONV_TO_IMG(sx, image_width);
        y = CONV_TO_IMG(-sy, image_height);
    }
    
    double camHeight = get_camera_height(camera, joints, kneeling);
	
	//the lowest angle we can see at for the camera
	double cameraBottomVFOV = M_PI_2 + (-joints->HeadPitch - CAMERA_VFOV/2 + (camera?BOTTOM_CAMERA_ANGLE:TOP_CAMERA_ANGLE));
	
	double imageAngleY = ((double)(image_height-y)/image_height)*CAMERA_VFOV;
	
	double angleY = cameraBottomVFOV + imageAngleY;
	
	double frontDistance = camHeight*tan(angleY);
	
	int im_width_2 = (image_width+1)/2;
	double imageAngleX = ((double)((x-im_width_2))/im_width_2)*CAMERA_HFOV/2;
	
	*distance = frontDistance/cos(imageAngleX);

	*angle = -(imageAngleX-joints->HeadYaw);   
}

void rr_to_pixel_coord(double angle, double distance, enum VisionCamera camera, struct wb_vision_control_status *vs, struct wb_sensors_torsojointsensors *joints, int32_t *sx, int32_t *sy, bool kneeling) {
    int image_width = 640;
    int image_height = 480;
    
    double camHeight = get_camera_height(camera, joints, kneeling);
    
    //the lowest angle we can see at for the camera
    double cameraBottomVFOV = M_PI_2 + (-joints->HeadPitch - CAMERA_VFOV/2 + (camera?BOTTOM_CAMERA_ANGLE:TOP_CAMERA_ANGLE));
    
    int im_width_2 = (image_width+1)/2;
    double imageAngleX = angle +joints->HeadYaw;
    
    *sx = (int)((imageAngleX/(CAMERA_HFOV/2))*im_width_2)+im_width_2;
    
    double frontDistance = distance*cos(imageAngleX);
    
    double angleY = atan(frontDistance/camHeight);
    
    double imageAngleY = angleY - cameraBottomVFOV;
    
    *sy = (int)(image_height-(imageAngleY*image_height/CAMERA_VFOV));
}

static double get_camera_height(enum VisionCamera camera, struct wb_sensors_torsojointsensors *joints, bool kneeling) {
    double dx = (camera?BOTTOM_CAMERA_OFFSET_X:TOP_CAMERA_OFFSET_X);
    double dz = (camera?BOTTOM_CAMERA_OFFSET_Z:TOP_CAMERA_OFFSET_Z);

    double height = dz*cos(-joints->HeadPitch) + dx*sin(-joints->HeadPitch);
    if (kneeling) {
        return height + HEAD_BASE_HEIGHT_KNEELING;
    }
    return height + HEAD_BASE_HEIGHT;
}



/**
 * Convert to a description string.
 */
const char* wb_pixel_to_robot_relative_coord_description(const struct wb_pixel_to_robot_relative_coord* self, char* descString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;

    return descString;
}

/**
 * Convert to a string.
 */
const char* wb_pixel_to_robot_relative_coord_to_string(const struct wb_pixel_to_robot_relative_coord* self, char* toString, size_t bufferSize)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    size_t len = 0;

    return toString;
}

/**
 * Convert from a string.
 */
struct wb_pixel_to_robot_relative_coord* wb_pixel_to_robot_relative_coord_from_string(struct wb_pixel_to_robot_relative_coord* self, const char* str)
{
    size_t temp_length = strlen(str);
    int length = (temp_length <= INT_MAX) ? ((int)((ssize_t)temp_length)) : -1;
    if (length < 1 || length > PIXEL_TO_ROBOT_RELATIVE_COORD_DESC_BUFFER_SIZE) {
        return self;
    }
    char var_str_buffer[PIXEL_TO_ROBOT_RELATIVE_COORD_DESC_BUFFER_SIZE + 1];
    char* var_str = &var_str_buffer[0];
    char key_buffer[0];
    char* key = &key_buffer[0];
    int bracecount = 0;
    int startVar = 0;
    int index = 0;
    int startKey = 0;
    int endKey = -1;
    int varIndex = 0;
    if (index == 0 && str[0] == '{') {
        index = 1;
    }
    startVar = index;
    startKey = startVar;
    do {
        for (int i = index; i < length; i++) {
            index = i + 1;
            if (bracecount == 0 && str[i] == '=') {
                endKey = i - 1;
                startVar = index;
                continue;
            }
            if (bracecount == 0 && isspace(str[i])) {
                startVar = index;
                if (endKey == -1) {
                    startKey = index;
                }
                continue;
            }
            if (bracecount == 0 && str[i] == ',') {
                index = i - 1;
                break;
            }
            if (str[i] == '{') {
                bracecount++;
                continue;
            }
            if (str[i] == '}') {
                bracecount--;
                if (bracecount < 0) {
                    index = i - 1;
                    break;
                }
            }
            if (i == length - 1) {
                index = i;
            }
        }
        if (endKey >= startKey && endKey - startKey < length) {
            strncpy(key, str + startKey, ((size_t)(endKey - startKey) + 1));
            key[(endKey - startKey) + 1] = 0;
        } else {
            key[0] = 0;
        }
        strncpy(var_str, str + startVar, ((size_t)(index - startVar) + 1));
        var_str[(index - startVar) + 1] = 0;
        bracecount = 0;
        index += 2;
        startVar = index;
        startKey = startVar;
        endKey = -1;
        if (strlen(key) > 0) {
            varIndex = -1;
        }
        switch (varIndex) {
            case -1: { break; }

        }
        if (varIndex >= 0) {
            varIndex++;
        }
    } while(index < length);
    return self;
}

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Convert to a compressed, serialised, network byte order byte stream.
 */
size_t wb_pixel_to_robot_relative_coord_to_network_serialised(const struct wb_pixel_to_robot_relative_coord *self, char *dst)
{
    uint16_t bit_offset = 0;

    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)self;
    (void)dst;
    return bit_offset;
}

/**
 * Convert from a compressed, serialised, network byte order byte stream.
 */
size_t wb_pixel_to_robot_relative_coord_from_network_serialised(const char *src, struct wb_pixel_to_robot_relative_coord *dst)
{
    uint16_t bit_offset = 0;

    //avoid unused variable warnings when you try to use an empty gen file or a gen file with no supported serialisation types.
    (void)src;
    (void)dst;
    return bit_offset;
}

/*#endif // WHITEBOARD_SERIALISATION*/