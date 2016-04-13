/** 
 * file SENSORSBodySensors.h 
 * 
 * This file was generated by classgenerator from SENSORSBodySensors.txt. 
 * DO NOT CHANGE MANUALLY! 
 * 
 * Created by Carl Lusty on 12:26, 13/4/2016 
 * Copyright (c) 2016 Carl Lusty 
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
 *    This product includes software developed by Carl Lusty. 
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


#ifndef SENSORSBodySensors_DEFINED 
#define SENSORSBodySensors_DEFINED 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
#include <cstdlib> 
#include <string.h> 
#include <sstream> 
#endif 

#include "wb_sensors_bodysensors.h" 

namespace guWhiteboard 
{
    /** 
     * @brief Contains the current values of sensors located in the robots chest (designed for Nao) 
     * Examples 
     * -------- 
     * Get the state of the Chest Button 
     *     SENSORSBodySensors s = SENSORSBodySensors_t.get(); //get from the whiteboard 
     *     bool button_state = s.ChestBoard_Button(); //pull the variable out of the class 
     */ 
    class SENSORSBodySensors: public wb_sensors_bodysensors 
    { 
    public:
        /** Constructor */ 
        SENSORSBodySensors(float InertialSensor_AccX = 0.0f, float InertialSensor_AccY = 0.0f, float InertialSensor_AccZ = 0.0f, float InertialSensor_GyrX = 0.0f, float InertialSensor_GyrY = 0.0f, float InertialSensor_GyrRef = 0.0f, float InertialSensor_AngleX = 0.0f, float InertialSensor_AngleY = 0.0f, float Battery_Charge         = 0.0f, float Battery_Current        = 0.0f, float US                     = 0.0f, bool ChestBoard_Button       = false, bool pad1 = false, int16_t pad2 = 0)
        { 
            set_InertialSensor_AccX(InertialSensor_AccX); 
            set_InertialSensor_AccY(InertialSensor_AccY); 
            set_InertialSensor_AccZ(InertialSensor_AccZ); 
            set_InertialSensor_GyrX(InertialSensor_GyrX); 
            set_InertialSensor_GyrY(InertialSensor_GyrY); 
            set_InertialSensor_GyrRef(InertialSensor_GyrRef); 
            set_InertialSensor_AngleX(InertialSensor_AngleX); 
            set_InertialSensor_AngleY(InertialSensor_AngleY); 
            set_Battery_Charge        (Battery_Charge        ); 
            set_Battery_Current       (Battery_Current       ); 
            set_US                    (US                    ); 
            set_ChestBoard_Button      (ChestBoard_Button      ); 
            set_pad1(pad1); 
            set_pad2(pad2); 
        } 

        /** Copy Constructor */ 
        SENSORSBodySensors(const SENSORSBodySensors &other) : wb_sensors_bodysensors() 
        { 
            set_InertialSensor_AccX(other.InertialSensor_AccX()); 
            set_InertialSensor_AccY(other.InertialSensor_AccY()); 
            set_InertialSensor_AccZ(other.InertialSensor_AccZ()); 
            set_InertialSensor_GyrX(other.InertialSensor_GyrX()); 
            set_InertialSensor_GyrY(other.InertialSensor_GyrY()); 
            set_InertialSensor_GyrRef(other.InertialSensor_GyrRef()); 
            set_InertialSensor_AngleX(other.InertialSensor_AngleX()); 
            set_InertialSensor_AngleY(other.InertialSensor_AngleY()); 
            set_Battery_Charge        (other.Battery_Charge        ()); 
            set_Battery_Current       (other.Battery_Current       ()); 
            set_US                    (other.US                    ()); 
            set_ChestBoard_Button      (other.ChestBoard_Button      ()); 
            set_pad1(other.pad1()); 
            set_pad2(other.pad2()); 
        } 

        /** Copy Assignment Operator */ 
        SENSORSBodySensors &operator = (const SENSORSBodySensors &other) 
        { 
            set_InertialSensor_AccX(other.InertialSensor_AccX()); 
            set_InertialSensor_AccY(other.InertialSensor_AccY()); 
            set_InertialSensor_AccZ(other.InertialSensor_AccZ()); 
            set_InertialSensor_GyrX(other.InertialSensor_GyrX()); 
            set_InertialSensor_GyrY(other.InertialSensor_GyrY()); 
            set_InertialSensor_GyrRef(other.InertialSensor_GyrRef()); 
            set_InertialSensor_AngleX(other.InertialSensor_AngleX()); 
            set_InertialSensor_AngleY(other.InertialSensor_AngleY()); 
            set_Battery_Charge        (other.Battery_Charge        ()); 
            set_Battery_Current       (other.Battery_Current       ()); 
            set_US                    (other.US                    ()); 
            set_ChestBoard_Button      (other.ChestBoard_Button      ()); 
            set_pad1(other.pad1()); 
            set_pad2(other.pad2()); 
            return *this; 
        } 

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION 
        /** String Constructor */ 
        SENSORSBodySensors(const std::string &str) { from_string(str.c_str()); }  

        std::string description() 
        { 
#ifdef USE_WB_SENSORSBODYSENSORSC_CONVERSION 
            char buffer[SENSORSBODYSENSORSDESC_BUFFER_SIZE]; 
            wb_sensors_bodysensors_description(this, buffer, sizeof(buffer)); 
            std::string descr = buffer; 
            return descr; 
#else 
            std::ostringstream ss; 
            ss << "InertialSensor_AccX=" << InertialSensor_AccX(); 
            ss << ", "; 
            ss << "InertialSensor_AccY=" << InertialSensor_AccY(); 
            ss << ", "; 
            ss << "InertialSensor_AccZ=" << InertialSensor_AccZ(); 
            ss << ", "; 
            ss << "InertialSensor_GyrX=" << InertialSensor_GyrX(); 
            ss << ", "; 
            ss << "InertialSensor_GyrY=" << InertialSensor_GyrY(); 
            ss << ", "; 
            ss << "InertialSensor_GyrRef=" << InertialSensor_GyrRef(); 
            ss << ", "; 
            ss << "InertialSensor_AngleX=" << InertialSensor_AngleX(); 
            ss << ", "; 
            ss << "InertialSensor_AngleY=" << InertialSensor_AngleY(); 
            ss << ", "; 
            ss << "Battery_Charge        =" << Battery_Charge        (); 
            ss << ", "; 
            ss << "Battery_Current       =" << Battery_Current       (); 
            ss << ", "; 
            ss << "US                    =" << US                    (); 
            ss << ", "; 
            ss << "ChestBoard_Button      =" << ChestBoard_Button      (); 
            ss << ", "; 
            ss << "pad1=" << pad1(); 
            ss << ", "; 
            ss << "pad2=" << pad2(); 

            return ss.str(); 

#endif /// USE_WB_SENSORSBODYSENSORSC_CONVERSION
        } 

        std::string to_string() 
        { 
#ifdef USE_WB_SENSORSBODYSENSORSC_CONVERSION 
            char buffer[SENSORSBODYSENSORSDESC_BUFFER_SIZE]; 
            wb_sensors_bodysensors_to_string(this, buffer, sizeof(buffer)); 
            std::string toString = buffer; 
            return toString; 
#else 
            std::ostringstream ss; 
            ss << InertialSensor_AccX(); 
            ss << ", "; 
            ss << InertialSensor_AccY(); 
            ss << ", "; 
            ss << InertialSensor_AccZ(); 
            ss << ", "; 
            ss << InertialSensor_GyrX(); 
            ss << ", "; 
            ss << InertialSensor_GyrY(); 
            ss << ", "; 
            ss << InertialSensor_GyrRef(); 
            ss << ", "; 
            ss << InertialSensor_AngleX(); 
            ss << ", "; 
            ss << InertialSensor_AngleY(); 
            ss << ", "; 
            ss << Battery_Charge        (); 
            ss << ", "; 
            ss << Battery_Current       (); 
            ss << ", "; 
            ss << US                    (); 
            ss << ", "; 
            ss << ChestBoard_Button      (); 
            ss << ", "; 
            ss << pad1(); 
            ss << ", "; 
            ss << pad2(); 

            return ss.str(); 

#endif /// USE_WB_SENSORSBODYSENSORSC_CONVERSION
        } 

        void from_string(const std::string &str) 
        { 
#ifdef USE_WB_SENSORSBODYSENSORSC_CONVERSION 
            wb_sensors_bodysensors_from_string(this, str); 
#else 
            std::istringstream iss(str); 
            std::string strings[SENSORSBODYSENSORSNUMBER_OF_VARIABLES]; 
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
                set_InertialSensor_AccX(float(atof(strings[0].c_str()))); 

            if (!strings[1].empty()) 
                set_InertialSensor_AccY(float(atof(strings[1].c_str()))); 

            if (!strings[2].empty()) 
                set_InertialSensor_AccZ(float(atof(strings[2].c_str()))); 

            if (!strings[3].empty()) 
                set_InertialSensor_GyrX(float(atof(strings[3].c_str()))); 

            if (!strings[4].empty()) 
                set_InertialSensor_GyrY(float(atof(strings[4].c_str()))); 

            if (!strings[5].empty()) 
                set_InertialSensor_GyrRef(float(atof(strings[5].c_str()))); 

            if (!strings[6].empty()) 
                set_InertialSensor_AngleX(float(atof(strings[6].c_str()))); 

            if (!strings[7].empty()) 
                set_InertialSensor_AngleY(float(atof(strings[7].c_str()))); 

            if (!strings[8].empty()) 
                set_Battery_Charge        (float(atof(strings[8].c_str()))); 

            if (!strings[9].empty()) 
                set_Battery_Current       (float(atof(strings[9].c_str()))); 

            if (!strings[10].empty()) 
                set_US                    (float(atof(strings[10].c_str()))); 

            if (!strings[11].empty()) 
                set_ChestBoard_Button      (strings[11].compare("true") == 0  || strings[11].compare("1") == 0 ? true : false); 

            if (!strings[12].empty()) 
                set_pad1(strings[12].compare("true") == 0  || strings[12].compare("1") == 0 ? true : false); 

            if (!strings[13].empty()) 
                set_pad2(int16_t(atoi(strings[13].c_str()))); 

#endif /// USE_WB_SENSORSBODYSENSORSC_CONVERSION
        } 
#endif ///   WHITEBOARD_POSTER_STRING_CONVERSION
    }; 
} /// namespace guWhiteboard 
#endif /// SENSORSBodySensors_DEFINED 
