/*
 * file wb_vision_detection_lines.h
 *
 * This file was generated by classgenerator from vision_detection_lines.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2021 Carl Lusty. All rights reserved.
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

#ifndef wb_vision_detection_lines_h
#define wb_vision_detection_lines_h

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

#include <gusimplewhiteboard/typeClassDefs/wb_vision_detection_line_array.h>

#define WB_VISION_DETECTION_LINES_GENERATED 
#define WB_VISION_DETECTION_LINES_C_STRUCT wb_vision_detection_lines 
#define WB_VISION_DETECTION_LINES_NUMBER_OF_VARIABLES 4

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define WB_VISION_DETECTION_LINES_DESC_BUFFER_SIZE 588
#define WB_VISION_DETECTION_LINES_TO_STRING_BUFFER_SIZE 549
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

#define WB_VISION_DETECTION_LINES_LINES_ARRAY_SIZE 2

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Results for the Line Ray Tracer (guvision). 
 */
struct wb_vision_detection_lines
{

    /**
     * The frame number that these lines were seen in.
     */
    uint64_t frameNumber;

    /**
     * Lines reported for each camera.
     */
    struct wb_vision_detection_line_array lines[WB_VISION_DETECTION_LINES_LINES_ARRAY_SIZE];

    /**
     * The resolution width.
     */
    uint16_t res_width;

    /**
     * The resolution height.
     */
    uint16_t res_height;

};

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_vision_detection_lines_description(const struct wb_vision_detection_lines* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_vision_detection_lines_to_string(const struct wb_vision_detection_lines* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_vision_detection_lines* wb_vision_detection_lines_from_string(struct wb_vision_detection_lines* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_vision_detection_lines_to_network_serialised(const struct wb_vision_detection_lines *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_vision_detection_lines_from_network_serialised(const char *src, struct wb_vision_detection_lines *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_vision_detection_lines_h
