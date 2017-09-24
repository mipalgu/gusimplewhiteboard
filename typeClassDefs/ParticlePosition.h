/** 
 * file ParticlePosition.h 
 * 
 * This file was generated by classgenerator from Particle_Position.txt. 
 * DO NOT CHANGE MANUALLY! 
 * 
 * Created by Vlad Estivill-Castro on 10:50, 9/7/2017 
 * Copyright (c) 2017 Vlad Estivill-Castro 
 * All rights reserved. 
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
 *    This product includes software developed by Vlad Estivill-Castro. 
 * 
 * 4. Neither the name of the author nor the names of contributors 
 *    may be used to endorse or promote products derived from this 
 *    software without specific prior written permission. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 * 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
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
 */ 


#ifndef ParticlePosition_DEFINED 
#define ParticlePosition_DEFINED 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
#include <cstdlib> 
#include <string.h> 
#include <sstream> 
#endif 

#include "wb_particle_position.h" 

namespace guWhiteboard 
{
    /** 
     * @brief Posting by Particle Filter and Localization simulator to create localization based amchines behavior  
     *   
     */ 
    class ParticlePosition: public wb_particle_position 
    { 
    public:
        /** Constructor */ 
        ParticlePosition(struct wb_point2d position = uninitializedPoint2d, int16_t headingInDegrees = 0, float confidence = 0.0f)
        { 
            set_position(position); 
            set_headingInDegrees(headingInDegrees); 
            set_confidence(confidence); 
        } 

        /** Copy Constructor */ 
        ParticlePosition(const ParticlePosition &other) : wb_particle_position() 
        { 
            set_position(other.position()); 
            set_headingInDegrees(other.headingInDegrees()); 
            set_confidence(other.confidence()); 
        } 

        /** Copy Assignment Operator */ 
        ParticlePosition &operator = (const ParticlePosition &other) 
        { 
            set_position(other.position()); 
            set_headingInDegrees(other.headingInDegrees()); 
            set_confidence(other.confidence()); 
            return *this; 
        } 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
        /** String Constructor */ 
        ParticlePosition(const std::string &str) { from_string(str.c_str()); }  

        std::string description() 
        { 
#ifdef USE_WB_PARTICLE_POSITION_C_CONVERSION 
            char buffer[PARTICLE_POSITION_DESC_BUFFER_SIZE]; 
            wb_particle_position_description(this, buffer, sizeof(buffer)); 
            std::string descr = buffer; 
            return descr; 
#else 
            std::ostringstream ss; 
            ss << "position=" << static_cast<Point2D *>(&position())->description(); 
            ss << ", "; 
            ss << "headingInDegrees=" << headingInDegrees(); 
            ss << ", "; 
            ss << "confidence=" << confidence(); 

            return ss.str(); 

#endif /// USE_WB_PARTICLE_POSITION_C_CONVERSION
        } 

        std::string to_string() 
        { 
#ifdef USE_WB_PARTICLE_POSITION_C_CONVERSION 
            char buffer[PARTICLE_POSITION_DESC_BUFFER_SIZE]; 
            wb_particle_position_to_string(this, buffer, sizeof(buffer)); 
            std::string toString = buffer; 
            return toString; 
#else 
            std::ostringstream ss; 
            ss << "position=" << static_cast<Point2D *>(&position())->to_string(); 
            ss << ", "; 
            ss << headingInDegrees(); 
            ss << ", "; 
            ss << confidence(); 

            return ss.str(); 

#endif /// USE_WB_PARTICLE_POSITION_C_CONVERSION
        } 

        void from_string(const std::string &str) 
        { 
#ifdef USE_WB_PARTICLE_POSITION_C_CONVERSION 
            wb_particle_position_from_string(this, str); 
#else 
            char var[100]; 
            unsigned long position_index = str.find("position");
            if(position_index != std::string::npos)
            {
                memset(&var[0], 0, sizeof(var));
                if(sscanf(str.substr(position_index, str.length()).c_str(), "position = %[^,]", var) == 1)
                {
                    std::string value = std::string(var);
                } 
            } 

            unsigned long headingInDegrees_index = str.find("headingInDegrees");
            if(headingInDegrees_index != std::string::npos)
            {
                memset(&var[0], 0, sizeof(var));
                if(sscanf(str.substr(headingInDegrees_index, str.length()).c_str(), "headingInDegrees = %[^,]", var) == 1)
                {
                    std::string value = std::string(var);
                    set_headingInDegrees(int16_t(atoi(value.c_str()))); 
                } 
            } 

            unsigned long confidence_index = str.find("confidence");
            if(confidence_index != std::string::npos)
            {
                memset(&var[0], 0, sizeof(var));
                if(sscanf(str.substr(confidence_index, str.length()).c_str(), "confidence = %[^,]", var) == 1)
                {
                    std::string value = std::string(var);
                    set_confidence(float(atof(value.c_str()))); 
                } 
            } 

#endif /// USE_WB_PARTICLE_POSITION_C_CONVERSION
        } 
#endif ///   WHITEBOARD_POSTER_STRING_CONVERSION
    }; 
} /// namespace guWhiteboard 
#endif /// ParticlePosition_DEFINED 