/*
 * file wb_vision_detection_horizon.h
 *
 * This file was generated by classgenerator from vision_detection_horizon.gen.
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

#ifndef wb_vision_detection_horizon_h
#define wb_vision_detection_horizon_h

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

#include <stdint.h>

enum HorizonOptions {
	OnlyField = 0,
	SingleHorizon,
	CornerHorizon,
	HorizonFailed
};
#include "wb_pixel_coordinate.h"

#include <guunits/guunits.h>
#include <gucoordinates/gucoordinates.h>
#include "wb_pixel_coordinate.h"

#include <guunits/guunits.h>
#include <gucoordinates/gucoordinates.h>
#include "wb_pixel_coordinate.h"

#include <guunits/guunits.h>
#include <gucoordinates/gucoordinates.h>

#define VISION_DETECTION_HORIZON_GENERATED 
#define VISION_DETECTION_HORIZON_C_STRUCT wb_vision_detection_horizon 
#define VISION_DETECTION_HORIZON_NUMBER_OF_VARIABLES 4

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define VISION_DETECTION_HORIZON_DESC_BUFFER_SIZE 2115
#define VISION_DETECTION_HORIZON_TO_STRING_BUFFER_SIZE 2055
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * This class is for Vision to report the edge of the SPL soccer field.
 * It does not report the field Bounds, that needs white line detection.
 * This is for the edge of green. 
 *
 * Results are in centered pixel coordinate of the image utilised, at whatever the resolution happen to be.
 * You can check the vision_detection_horizons message for resolution information.
 *
 * It will attempt to report the projected horizon to the far left X position and the far right position.
 * In the event that the projected position is outside the image bounds. It will project the horizon only as far as the image bound. 
 */
struct wb_vision_detection_horizon
{

    /**
     * Type of Horizon
     */
    PROPERTY(enum HorizonOptions, horizonType)

    /**
     * Left horizon point pixel coordinate.
     */
    PROPERTY(struct wb_pixel_coordinate, leftCoordinate)

    /**
     * Center horizon point pixel coordinate.
     */
    PROPERTY(struct wb_pixel_coordinate, centerCoordinate)

    /**
     * Right horizon point pixel coordinate.
     */
    PROPERTY(struct wb_pixel_coordinate, rightCoordinate)

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_vision_detection_horizon_description(const struct wb_vision_detection_horizon* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_vision_detection_horizon_to_string(const struct wb_vision_detection_horizon* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_vision_detection_horizon* wb_vision_detection_horizon_from_string(struct wb_vision_detection_horizon* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

gu_pixel_coordinate wb_vision_detection_horizon_leftCoordinate_px_coord(const struct wb_vision_detection_horizon self, const uint16_t resWidth, const uint16_t resHeight);
gu_pixel_coordinate wb_vision_detection_horizon_centerCoordinate_px_coord(const struct wb_vision_detection_horizon self, const uint16_t resWidth, const uint16_t resHeight);
gu_pixel_coordinate wb_vision_detection_horizon_rightCoordinate_px_coord(const struct wb_vision_detection_horizon self, const uint16_t resWidth, const uint16_t resHeight);

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_vision_detection_horizon_to_network_serialised(const struct wb_vision_detection_horizon *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_vision_detection_horizon_from_network_serialised(const char *src, struct wb_vision_detection_horizon *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_vision_detection_horizon_h
