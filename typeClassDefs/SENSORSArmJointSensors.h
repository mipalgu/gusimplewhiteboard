/** 
 * file SENSORSArmJointSensors.h 
 * 
 * This file was generated by classgenerator from SENSORS_ArmJointSensors.txt. 
 * DO NOT CHANGE MANUALLY! 
 * 
 * Created by Dimitri Joukoff on 16:5, 6/8/2016 
 * Copyright (c) 2016 Dimitri Joukoff 
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
 *    This product includes software developed by Dimitri Joukoff. 
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


#ifndef SENSORSArmJointSensors_DEFINED 
#define SENSORSArmJointSensors_DEFINED 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
#include <cstdlib> 
#include <string.h> 
#include <sstream> 
#endif 

#include "wb_sensors_armjointsensors.h" 

namespace guWhiteboard 
{
    /** 
     * @brief Arm joints 
     */ 
    class SENSORSArmJointSensors: public wb_sensors_armjointsensors 
    { 
    public:
        /** Constructor */ 
        SENSORSArmJointSensors(float LShoulderPitch  = 0.0f, float LShoulderRoll  = 0.0f, float LElbowRoll  = 0.0f, float LElbowYaw  = 0.0f, float LWristYaw  = 0.0f, float RShoulderPitch  = 0.0f, float RShoulderRoll  = 0.0f, float RElbowRoll  = 0.0f, float RElbowYaw  = 0.0f, float RWristYaw  = 0.0f)
        { 
            set_LShoulderPitch (LShoulderPitch ); 
            set_LShoulderRoll (LShoulderRoll ); 
            set_LElbowRoll (LElbowRoll ); 
            set_LElbowYaw (LElbowYaw ); 
            set_LWristYaw (LWristYaw ); 
            set_RShoulderPitch (RShoulderPitch ); 
            set_RShoulderRoll (RShoulderRoll ); 
            set_RElbowRoll (RElbowRoll ); 
            set_RElbowYaw (RElbowYaw ); 
            set_RWristYaw (RWristYaw ); 
        } 

        /** Copy Constructor */ 
        SENSORSArmJointSensors(const SENSORSArmJointSensors &other) : wb_sensors_armjointsensors() 
        { 
            set_LShoulderPitch (other.LShoulderPitch ()); 
            set_LShoulderRoll (other.LShoulderRoll ()); 
            set_LElbowRoll (other.LElbowRoll ()); 
            set_LElbowYaw (other.LElbowYaw ()); 
            set_LWristYaw (other.LWristYaw ()); 
            set_RShoulderPitch (other.RShoulderPitch ()); 
            set_RShoulderRoll (other.RShoulderRoll ()); 
            set_RElbowRoll (other.RElbowRoll ()); 
            set_RElbowYaw (other.RElbowYaw ()); 
            set_RWristYaw (other.RWristYaw ()); 
        } 

        /** Copy Assignment Operator */ 
        SENSORSArmJointSensors &operator = (const SENSORSArmJointSensors &other) 
        { 
            set_LShoulderPitch (other.LShoulderPitch ()); 
            set_LShoulderRoll (other.LShoulderRoll ()); 
            set_LElbowRoll (other.LElbowRoll ()); 
            set_LElbowYaw (other.LElbowYaw ()); 
            set_LWristYaw (other.LWristYaw ()); 
            set_RShoulderPitch (other.RShoulderPitch ()); 
            set_RShoulderRoll (other.RShoulderRoll ()); 
            set_RElbowRoll (other.RElbowRoll ()); 
            set_RElbowYaw (other.RElbowYaw ()); 
            set_RWristYaw (other.RWristYaw ()); 
            return *this; 
        } 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
        /** String Constructor */ 
        SENSORSArmJointSensors(const std::string &str) { from_string(str.c_str()); }  

        std::string description() 
        { 
#ifdef USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION 
            char buffer[SENSORS_ARMJOINTSENSORS_DESC_BUFFER_SIZE]; 
            wb_sensors_armjointsensors_description(this, buffer, sizeof(buffer)); 
            std::string descr = buffer; 
            return descr; 
#else 
            std::ostringstream ss; 
            ss << "LShoulderPitch =" << LShoulderPitch (); 
            ss << ", "; 
            ss << "LShoulderRoll =" << LShoulderRoll (); 
            ss << ", "; 
            ss << "LElbowRoll =" << LElbowRoll (); 
            ss << ", "; 
            ss << "LElbowYaw =" << LElbowYaw (); 
            ss << ", "; 
            ss << "LWristYaw =" << LWristYaw (); 
            ss << ", "; 
            ss << "RShoulderPitch =" << RShoulderPitch (); 
            ss << ", "; 
            ss << "RShoulderRoll =" << RShoulderRoll (); 
            ss << ", "; 
            ss << "RElbowRoll =" << RElbowRoll (); 
            ss << ", "; 
            ss << "RElbowYaw =" << RElbowYaw (); 
            ss << ", "; 
            ss << "RWristYaw =" << RWristYaw (); 

            return ss.str(); 

#endif /// USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
        } 

        std::string to_string() 
        { 
#ifdef USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION 
            char buffer[SENSORS_ARMJOINTSENSORS_DESC_BUFFER_SIZE]; 
            wb_sensors_armjointsensors_to_string(this, buffer, sizeof(buffer)); 
            std::string toString = buffer; 
            return toString; 
#else 
            std::ostringstream ss; 
            ss << LShoulderPitch (); 
            ss << ", "; 
            ss << LShoulderRoll (); 
            ss << ", "; 
            ss << LElbowRoll (); 
            ss << ", "; 
            ss << LElbowYaw (); 
            ss << ", "; 
            ss << LWristYaw (); 
            ss << ", "; 
            ss << RShoulderPitch (); 
            ss << ", "; 
            ss << RShoulderRoll (); 
            ss << ", "; 
            ss << RElbowRoll (); 
            ss << ", "; 
            ss << RElbowYaw (); 
            ss << ", "; 
            ss << RWristYaw (); 

            return ss.str(); 

#endif /// USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
        } 

        void from_string(const std::string &str) 
        { 
#ifdef USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION 
            wb_sensors_armjointsensors_from_string(this, str); 
#else 
            std::istringstream iss(str); 
            std::string strings[SENSORS_ARMJOINTSENSORS_NUMBER_OF_VARIABLES]; 
            memset(strings, 0, sizeof(strings)); 
            std::string token; 
            int count = 0; 
            while (getline(iss, token, ',')) 
            { 
                token.erase(token.find_last_not_of(' ') + 1);   // trim right 
                token.erase(0, token.find_first_not_of(' '));   // trim left 

                size_t pos = token.find('='); 

                if (pos != std::string::npos) 
                { 
                     token.erase(0, pos+1); 
                } 

                token.erase(token.find_last_not_of(' ') + 1);   // trim right 
                token.erase(0, token.find_first_not_of(' '));   // trim left 
                strings[count] = token; 
                count++; 
            } 

            if (!strings[0].empty()) 
                set_LShoulderPitch (float(atof(strings[0].c_str()))); 

            if (!strings[1].empty()) 
                set_LShoulderRoll (float(atof(strings[1].c_str()))); 

            if (!strings[2].empty()) 
                set_LElbowRoll (float(atof(strings[2].c_str()))); 

            if (!strings[3].empty()) 
                set_LElbowYaw (float(atof(strings[3].c_str()))); 

            if (!strings[4].empty()) 
                set_LWristYaw (float(atof(strings[4].c_str()))); 

            if (!strings[5].empty()) 
                set_RShoulderPitch (float(atof(strings[5].c_str()))); 

            if (!strings[6].empty()) 
                set_RShoulderRoll (float(atof(strings[6].c_str()))); 

            if (!strings[7].empty()) 
                set_RElbowRoll (float(atof(strings[7].c_str()))); 

            if (!strings[8].empty()) 
                set_RElbowYaw (float(atof(strings[8].c_str()))); 

            if (!strings[9].empty()) 
                set_RWristYaw (float(atof(strings[9].c_str()))); 

#endif /// USE_WB_SENSORS_ARMJOINTSENSORS_C_CONVERSION
        } 
#endif ///   WHITEBOARD_POSTER_STRING_CONVERSION
    }; 
} /// namespace guWhiteboard 
#endif /// SENSORSArmJointSensors_DEFINED 
