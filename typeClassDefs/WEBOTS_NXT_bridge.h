/*
 *  WEBOTS_NXT_bridge.h
 *
 *  Created by Vald Estivill-Castro on 25/10/13.
 *  Copyright (c) 2013 Rene Hexel. All rights reserved.
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
 *        This product includes software developed by Rene Hexel.
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
#ifndef WEBOTS_NXT_bridge_DEFINED
#define WEBOTS_NXT_bridge_DEFINED

#include <cstdlib>
#include <sstream>
#include <gu_util.h>

namespace guWhiteboard
{
       //ID's for motor's in differential robots
        enum DifferentialMotor {
                LEFT_MOTOR_DIFFERENTIAL = 0,
                RIGHT_MOTOR_DIFFERENTIAL = 1,
                NXT_MOTOR3 = 2 //constant for the third motor on nxt's
             };

        enum SonarSensorID {
                LEFT_SONAR_SENSOR = 0,
                RIGHT_SONAR_SENSOR = 1
	};

        enum LightSensorID {
                LEFT_LIGHT_SENSOR = 0,
                RIGHT_LIGHT_SENSOR = 1
	};

        enum NXT_Sensor_Ports {
                NXT_PORT_1= 1,
                NXT_PORT_2= 2,
                NXT_PORT_3= 3,
                NXT_PORT_4= 4
             };
	/**
	 * The MOVE_MOTORS instruction sets the sppeds of a Webots Differential Robot
	 * the FIRST parameter will be the LEFT motor
	 * the SECOND parameter will be the SECOND motor
	 * according to the Webots documentaiton, this is radians per second.
	 * but it does not seem tight.
	 * TODO: CHECK OR DETERMINE THE SPEED
	 */

       enum DifferentialInstructions {
	       // ACTUATROS
                MOVE_MOTORS= 0,
		PLAY_SOUND= 1,
		LIGHTUP_LED = 2, //constant for the third motor on nxt's
	       // SENSORS
                DISTANCE= 3,
		INTENSITY_LIGHT= 4,
		ROTATION_ENCODER = 5 //constant for the third motor on nxt's
             };

        /**
         * Class for for demonstrating OO-messages.
         */
        class WEBOTS_NXT_bridge
        {
            PROPERTY(int16_t, theRobotID) /// Which robot are we talking to 
            PROPERTY(DifferentialInstructions, theInstruction) ///  The command (when it is not data)
            PROPERTY(int16_t, firstParameter) ///  the first parameter
            PROPERTY(int16_t, secondParameter) ///  the first parameter
            PROPERTY(bool, isSensorData) ///  IT is data about a sensor

        public:
            /** designated constructor */
            WEBOTS_NXT_bridge(int16_t theRobotID =0 ,DifferentialInstructions  theInstruction = MOVE_MOTORS, int16_t firstParameter = 0, int16_t secondParameter=0, bool isSensorData =false): _theRobotID(theRobotID),  _theInstruction(theInstruction), _firstParameter(firstParameter), _secondParameter(secondParameter), _isSensorData(isSensorData)  { /* better than set_x(x); set_y(y) */ }

            /** string constructor */
            WEBOTS_NXT_bridge(const std::string &names) { from_string(names); }

            /** copy constructor */
            WEBOTS_NXT_bridge(const WEBOTS_NXT_bridge &other): _theRobotID(other._theRobotID), _theInstruction(other._theInstruction), _firstParameter(other._firstParameter), _secondParameter(other._secondParameter), _isSensorData(other._isSensorData) {}

            /** convert to a string */
            std::string description()
            {
                std::ostringstream ss;
		ss<< _theRobotID <<",";
		if (_isSensorData)
		{
		     switch(_theInstruction)
		     {
		          case ROTATION_ENCODER : ss << "SENSOR"<<"ROTATION_ENCODER" << "," << _firstParameter << "," << _secondParameter << "," ;
			               break;
		          case INTENSITY_LIGHT : ss << "SENSOR"<<"INTENSITY_LIGHT" << "," << _firstParameter << "," << _secondParameter << "," ;
					break;
		          case DISTANCE : ss << "SENSOR"<< "DISTANCE" << "," << _firstParameter << "," << _secondParameter << "," ;
			               break;
                         case MOVE_MOTORS:
                         case PLAY_SOUND:
			 case LIGHTUP_LED: //std::cerr << "LOG-error ** This shoudl not hold data" << std::endl;
					   break;
		     }
		}
		else
		{ switch(_theInstruction)
			/*
			 * Apply power=_firstParameter to LEFT MOTOR
			 * Apply power=_secondParameter to RIGHT MOTOR
			 */
		  { case MOVE_MOTORS : ss << "MOVE_MOTORS" << "," << _firstParameter << "," << _secondParameter << "," ;
			               break;
			/*
			 * Play sound for as long as _firstParameter
			 */
		  case PLAY_SOUND : ss << "PLAY_SOUND" << "," << _firstParameter  << ",";
			               break;
			/*
			 * LIGHTUP_LED if 0<> _firstParameter
			 */
		  case LIGHTUP_LED : ss << "LIGHTUP_LED" << "," << ((0!=_firstParameter)? 1: 0) << ",";
			               break;
			/*
			 * Start posting Distance from SOnar in potrt _firstParameter if 0<> _secondParameter
			 * Stop posting Distance from SOnar in potrt _firstParameter if 0== _secondParameter
			 */
		  case DISTANCE : ss << "DISTANCE" << "," << _firstParameter << "," << _secondParameter << "," ;
			               break;
			/*
			 * Start posting light measurement from light sensor in port _firstParameter if 0<> _secondParameter
			 * Stop posting lisght measurement from light in port _firstParameter if 0== _secondParameter
			 */
		  case INTENSITY_LIGHT : ss << "INTENSITY_LIGHT" << "," << _firstParameter << "," << _secondParameter << "," ;
			               break;
			/*
			 * Start posting rotations from encoder in port _firstParameter if 0<> _secondParameter
			 * Stop posting rotations from encoder in port _firstParameter if 0== _secondParameter
			 */
		  case ROTATION_ENCODER : ss << "ROTATION_ENCODER" << "," << _firstParameter << "," << _secondParameter << "," ;
			               break;
		   };
		}
                return ss.str();
            }

            /** convert from a string */
            void from_string(const std::string &strWithID)
            {
                std::istringstream iss(strWithID);
                std::string token;
                if (getline(iss, token, ','))
		{ int16_t numberForID = int16_t ( atoi(token.c_str())) ;
			// Robots id are 0,1,2 .....
		  if (numberForID <0) set_theRobotID(-numberForID); else set_theRobotID(-numberForID);
		   std::string comaDel (",");
		   std::size_t found = strWithID.find(comaDel);
		   if (std::string::npos!=found )
		   { std::string str=strWithID.substr (found+comaDel.size());
			// string without the Robot ID
                    set_firstParameter(0);
		    set_secondParameter(0);
		    set_isSensorData(false);
		    switch (token[0])
		    { case 'M' :  // expect a MOVE_MOTORS
		     case 'm' :
		     case 'p' :
		      case 'P' : // expect a PLAY_SOUND
		     case 'l' :
		      case 'L' : // expect a LIGHTUP_LED
		     case 'd' :
		      case 'D' : // expect a DISTANCE
		     case 'i' :
		      case 'I' : // expect a INTENSITY_LIGHT
		     case 'r' :
		      case 'R' : // expect a ROTATION_ENCODER
	                           instruction_from_string ( str );
			           break;	
		      case 's' :
		      case 'S' : // expect SENSOR data
				   //std:: cerr<< "Sensor data detected " << std:: endl;
		                   set_isSensorData(true);
				   // remove the prefix SENSOR
				   std::string sensorStr ("SENSOR");
				   found = str.find(sensorStr);
				   if (std::string::npos!=found )
				   { std::string strWithoutPrefix =str.substr (found+sensorStr.size());
					   measurement_from_string ( strWithoutPrefix );
				   }
				   break;
		    }
		  }
		}
            }

	private :
	    /*
	     * Extract the First parameter as an NXT in port
	     * the second parameter as a binary {0,1} value
	     */
	void set_parameters2ndBinary ( const std::string &str  )
	                 { 
                              std::istringstream iss(str);
                              std::string token;
			      // advance the token
                               getline(iss, token, ',');

                                   if (getline(iss, token, ','))
                                     { int16_t value = int16_t ( atoi(token.c_str())) ;
					     if (NXT_PORT_1 <= value && value <= NXT_PORT_4)
						     set_firstParameter(value);
					     else 
						     set_firstParameter(NXT_PORT_1);
                                      }
                                   if (getline(iss, token, ','))
                                     { set_secondParameter(int16_t(
					   (0== atoi(token.c_str())? 0 :1 )
					    ));
				     }
	                  }

	void set_parameters2ndNum ( const std::string &str  )
	                 { 
                              std::istringstream iss(str);
                              std::string token;
			      // advance the token
                               getline(iss, token, ',');

                                   if (getline(iss, token, ','))
                                     { int16_t value = int16_t ( atoi(token.c_str())) ;
					     if (NXT_PORT_1 <= value && value <= NXT_PORT_4)
						     set_firstParameter(value);
					     else 
						     set_firstParameter(NXT_PORT_1);
                                      }
                                   if (getline(iss, token, ','))
                                     { set_secondParameter(int16_t(
					    atoi(token.c_str())
					    ));
				     }
	                  }



	/*
	 * Extract the effector type and its parameters
	 */
	void instruction_from_string ( const std::string &str )
	{ std::istringstream iss(str);
          std::string token;
                getline(iss, token, ',');
		switch (token[0])
		    { case 'M' :  // expect a MOVE_MOTORS
		     case 'm' : set_theInstruction(MOVE_MOTORS);
                                   if (getline(iss, token, ','))
                                     { set_firstParameter(int16_t(atoi(token.c_str()))); }
                                   if (getline(iss, token, ','))
                                     { set_secondParameter(int16_t(atoi(token.c_str()))); }
			    break;
		     case 'p' :
		      case 'P' : // expect a PLAY_SOUND
		               set_theInstruction(PLAY_SOUND);
                                   if (getline(iss, token, ','))
                                     { // always positive
					     int16_t value= int16_t ( atoi(token.c_str()) );
					     value = value >0 ? value : -1*value;
					     set_firstParameter(value);
                                      }
			    break;
		     case 'l' :
		      case 'L' : // expect a LIGHTUP_LED
		                   set_theInstruction(LIGHTUP_LED);
                                   if (getline(iss, token, ','))
                                     { set_firstParameter(int16_t(
					   (0== atoi(token.c_str())? 0 :1 )
					    ));
                                      }
			    break;
		     case 'd' :
		      case 'D' : // expect a DISTANCE
		                   set_theInstruction(DISTANCE);
				   set_parameters2ndBinary(str);
			           break;	
		     case 'i' :
		      case 'I' : // expect a INTENSITY_LIGHT
		                   set_theInstruction(INTENSITY_LIGHT);
				   set_parameters2ndBinary(str);
			           break;	
		     case 'r' :
		      case 'R' : // expect a ROTATION_ENCODER
		                   set_theInstruction(ROTATION_ENCODER);
				   set_parameters2ndBinary(str);
			           break;	
		    }//switch
	}

	/*
	 * Extract the sensor type and its parameters
	 */
	void measurement_from_string ( const std::string &str )
	{ std::istringstream iss(str);
          std::string token;
                getline(iss, token, ',');
		switch (token[0])
		    { 
		     case 'd' :
		      case 'D' : // expect a DISTANCE
		                   set_theInstruction(DISTANCE);
				   set_parameters2ndNum(str);
			           break;	
		     case 'i' :
		      case 'I' : // expect a INTENSITY_LIGHT
		                   set_theInstruction(INTENSITY_LIGHT);
				   set_parameters2ndNum(str);
			           break;	
		     case 'r' :
		      case 'R' : // expect a ROTATION_ENCODER
		                   set_theInstruction(ROTATION_ENCODER);
				   set_parameters2ndNum(str);
			           break;	
		    }//switch
	}

        };
}


#endif // WEBOTS_NXT_bridge_DEFINED
