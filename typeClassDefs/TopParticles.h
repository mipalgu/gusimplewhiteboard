/*
 * file TopParticles.h
 *
 * This file was generated by classgenerator from TopParticles.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Vlad Estivill-Castro at 16:55, 19/01/2018.
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

#ifndef TopParticles_DEFINED
#define TopParticles_DEFINED

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <cstdlib>
#include <string.h>
#include <sstream>
#endif

#include "gu_util.h"
#include "wb_top_particles.h"

#define TOPPARTICLES_PARTICLES_ARRAY_SIZE 4

#include "ParticlePosition.h"

namespace guWhiteboard {

    /**
     * Provides a C++ wrapper around `wb_top_particles`.
     */
    class TopParticles: public wb_top_particles {

    public:

        /**
         * Create a new `TopParticles`.
         */
        TopParticles(struct wb_particle_position particles[4] = NULL) {
            if (particles != NULL) {
                std::memcpy(this->_particles, particles, TOPPARTICLES_PARTICLES_ARRAY_SIZE * sizeof (struct wb_particle_position));
            } else {
                struct wb_particle_position particles_temp[TOPPARTICLES_PARTICLES_ARRAY_SIZE] = {wb_particle_position(),wb_particle_position(),wb_particle_position(),wb_particle_position()};
                std::memcpy(this->_particles, particles_temp, TOPPARTICLES_PARTICLES_ARRAY_SIZE * sizeof (struct wb_particle_position));
            }
        }

        /**
         * Copy Constructor.
         */
        TopParticles(const TopParticles &other): wb_top_particles() {
            if (other.particles() != NULL) {
                std::memcpy(this->_particles, other.particles(), TOPPARTICLES_PARTICLES_ARRAY_SIZE * sizeof (struct wb_particle_position));
            }
        }

        /**
         * Copy Assignment Operator.
         */
        TopParticles &operator = (const TopParticles &other) {
            if (other.particles() != NULL) {
                std::memcpy(this->_particles, other.particles(), TOPPARTICLES_PARTICLES_ARRAY_SIZE * sizeof (struct wb_particle_position));
            }
            return *this;
        }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * String Constructor.
         */
        TopParticles(const std::string &str) { wb_top_particles_from_string(this, str.c_str()); }

        std::string description() {
#ifdef USE_WB_TOP_PARTICLES_C_CONVERSION
            char buffer[TOPPARTICLES_DESC_BUFFER_SIZE];
            wb_top_particles_description(this, buffer, sizeof(buffer));
            std::string descr = buffer;
            return descr;
#else
            std::ostringstream ss;
            bool particles_first = true;
            ss << "particles={";
            for (int i = 0; i < TOPPARTICLES_PARTICLES_ARRAY_SIZE; i++) {
                guWhiteboard::ParticlePosition * particles_element = const_cast<guWhiteboard::ParticlePosition *>(static_cast<const guWhiteboard::ParticlePosition *>(&this->particles(i)));
                ss << (particles_first ? "" : ", ") << "{ " << (particles_element->description()) << " }";
                particles_first = false;
            }
            ss << "}";

            return ss.str();
#endif /// USE_WB_TOP_PARTICLES_C_CONVERSION
        }

        std::string to_string() {
#ifdef USE_WB_TOP_PARTICLES_C_CONVERSION
            char buffer[TOPPARTICLES_TO_STRING_BUFFER_SIZE];
            wb_top_particles_to_string(this, buffer, sizeof(buffer));
            std::string toString = buffer;
            return toString;
#else
            std::ostringstream ss;
            bool particles_first = true;
            ss << "{";
            for (int i = 0; i < TOPPARTICLES_PARTICLES_ARRAY_SIZE; i++) {
                guWhiteboard::ParticlePosition * particles_element = const_cast<guWhiteboard::ParticlePosition *>(static_cast<const guWhiteboard::ParticlePosition *>(&this->particles(i)));
                ss << (particles_first ? "" : ", ") << "{ " << (particles_element->to_string()) << " }";
                particles_first = false;
            }
            ss << "}";

            return ss.str();
#endif /// USE_WB_TOP_PARTICLES_C_CONVERSION
        }

        void from_string(const std::string &str) {
#ifdef USE_WB_TOPPARTICLES_C_CONVERSION
            wb_top_particles_from_string(this, str.c_str());
#else
            char var[255];
            unsigned long particles_index = str.find("particles=");
            if (particles_index != std::string::npos) {
                memset(&var[0], 0, sizeof(var));
                int bracecount = 1;
                unsigned long lastBrace = particles_index;
                ParticlePosition pos = ParticlePosition();
                int pos_index = 0;
                for (unsigned long index = particles_index; index < str.length(); index++) {
                    if (str.at(index) == '{') {
                        bracecount++;
                        lastBrace = index;
                        continue;
                    }
                    if (str.at(index) == '}') {
                        bracecount--; 
                        if (bracecount < 1) {
                            break;
                        }
                        if (bracecount != 2) {
                            continue;
                        }
                        std::string value = str.substr(lastBrace, index - lastBrace + 1);
                        pos.from_string(value);
                        this->_particles[pos_index++] = ParticlePosition(pos);
                        continue;
                    }
                }
            }

#endif /// USE_WB_TOPPARTICLES_C_CONVERSION
        }
#endif /// WHITEBOARD_POSTER_STRING_CONVERSION
    };

} /// namespace guWhiteboard
#endif /// TopParticles_DEFINED
