/*
 * file wb_vision_detection_goal_post.h
 *
 * This file was generated by classgenerator from vision_detection_goal_post.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 09:30, 07/08/2018.
 * Copyright © 2018 Carl Lusty. All rights reserved.
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

#ifndef wb_vision_detection_goal_post_h
#define wb_vision_detection_goal_post_h

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

#include <stdint.h>

enum GoalPostOptions {
	NoPostDetected = 0, ///< Didn't see a post
	PartialPostSeen, ///< Saw part of a post. Part in the image, part out.
	FullPostSeen     ///< Saw the entire post
};

enum GoalPostOrientation {
	GenericPost = 0,    ///< Could not determine post orientation.
	LeftPost,       ///< This is the left post of a goal.
	RightPost       ///< This is the right post of a goal.
};

#define VISION_DETECTION_GOAL_POST_GENERATED 
#define VISION_DETECTION_GOAL_POST_C_STRUCT wb_vision_detection_goal_post 
#define VISION_DETECTION_GOAL_POST_NUMBER_OF_VARIABLES 10

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define VISION_DETECTION_GOAL_POST_DESC_BUFFER_SIZE 642
#define VISION_DETECTION_GOAL_POST_TO_STRING_BUFFER_SIZE 577
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Results for the Goal Ray Tracer (guvision). 
 * Results are a percentage of the image utilised, at whatever the resolution and FOV happen to be.
 * You can check the vision status message for resolution and FOV information.
 * Coords:
 *     x, Int16.MinValue <-> Int16.MaxValue
 *     y, Int16.MinValue <-> Int16.MaxValue
 * Minus x Left
 * Plus x Right
 * Plus y Up
 * Minus y Down
 * Center near 0,0
 */
struct wb_vision_detection_goal_post
{

    /**
     * Goal post details.
     */
    PROPERTY(enum GoalPostOptions, sightingType)

    /**
     * Goal post orientation.
     */
    PROPERTY(enum GoalPostOrientation, orientation)

    /**
     * Top Left X coord.
     */
    PROPERTY(int16_t, tl_x)

    /**
     * Top Left Y coord.
     */
    PROPERTY(int16_t, tl_y)

    /**
     * Top Right X coord.
     */
    PROPERTY(int16_t, tr_x)

    /**
     * Top Right Y coord.
     */
    PROPERTY(int16_t, tr_y)

    /**
     * Bottom Left X coord.
     */
    PROPERTY(int16_t, bl_x)

    /**
     * Bottom Left Y coord.
     */
    PROPERTY(int16_t, bl_y)

    /**
     * Bottom Right X coord.
     */
    PROPERTY(int16_t, br_x)

    /**
     * Bottom Right Y coord.
     */
    PROPERTY(int16_t, br_y)

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_vision_detection_goal_post_description(const struct wb_vision_detection_goal_post* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_vision_detection_goal_post_to_string(const struct wb_vision_detection_goal_post* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_vision_detection_goal_post* wb_vision_detection_goal_post_from_string(struct wb_vision_detection_goal_post* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_vision_detection_goal_post_to_network_serialised(const struct wb_vision_detection_goal_post *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_vision_detection_goal_post_from_network_serialised(const char *src, struct wb_vision_detection_goal_post *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_vision_detection_goal_post_h
