/*
 * file wb_top_particles.h
 *
 * This file was generated by classgenerator from TopParticles.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Vlad Estivill-Castro at 15:22, 12/06/2018.
 * Copyright © 2018 Vlad Estivill-Castro. All rights reserved.
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
 *        This product includes software developed by Vlad Estivill-Castro.
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

#ifndef wb_top_particles_h
#define wb_top_particles_h

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

#include "wb_particle_position.h"

        /**
         * commands to set the Grid Particle Filer Status
         */
        enum PF_ControlStatus_Modes
        {
                PF_Running=0,             ///< PF is running
                PF_New_Game,      ///< A FSM should set this, the PF is reset as per playerNumber
                PF_After_Penalized,              ///< Sides of our field are the reset positions
                PF_After_Fall,             ///< headings are reset randomly
                PF_Manual_Placement          ///< maybe after 34 seconds and manual placelemnt

        };

#define TOPPARTICLES_GENERATED 
#define TOPPARTICLES_C_STRUCT wb_top_particles 
#define TOPPARTICLES_NUMBER_OF_VARIABLES 1

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#define TOPPARTICLES_DESC_BUFFER_SIZE 266
#define TOPPARTICLES_TO_STRING_BUFFER_SIZE 256
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

#define TOPPARTICLES_PARTICLES_ARRAY_SIZE 4

/**
 * The class of the top particles in a Localization Filter
 */
struct wb_top_particles
{

    /**
     * these 4 should be the constant NUM_TOP_PARTICLES
     */
    ARRAY_PROPERTY(struct wb_particle_position, particles, TOPPARTICLES_PARTICLES_ARRAY_SIZE)

};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION

/**
 * Convert to a description string.
 */
const char* wb_top_particles_description(const struct wb_top_particles* self, char* descString, size_t bufferSize);

/**
 * Convert to a string.
 */
const char* wb_top_particles_to_string(const struct wb_top_particles* self, char* toString, size_t bufferSize);

/**
 * Convert from a string.
 */
struct wb_top_particles* wb_top_particles_from_string(struct wb_top_particles* self, const char* str);

#endif /// WHITEBOARD_POSTER_STRING_CONVERSION

/*#ifdef WHITEBOARD_SERIALISATION*/

/**
 * Network stream serialisation
 */
size_t wb_top_particles_to_network_serialised(const struct wb_top_particles *self, char *dst);

/**
 * Network stream deserialisation
 */
size_t wb_top_particles_from_network_serialised(const char *src, struct wb_top_particles *dst);

/*#endif /// WHITEBOARD_SERIALISATION*/

#ifdef __cplusplus
}
#endif

#endif /// wb_top_particles_h
