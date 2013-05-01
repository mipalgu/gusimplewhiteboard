/*
 *  WALK_ControlStatus.h
 *  gusimplewhiteboard / nao walk
 *
 *  Created by Carl Lusty on 25/03/13.
 *  Copyright (c) 2013 Carl Lusty and Rene Hexel. All rights reserved.
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

                                                                        
#ifndef WALK_ControlStatus_DEFINED
#define WALK_ControlStatus_DEFINED

#include <gu_util.h>

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <string>
#include <sstream>
#include <ctype.h>
#endif

namespace guWhiteboard
{
        /**
         * command for ControlStatus
         */
        enum WALK_ControlStatus_Mode
        {
                WALK_Disconnected,  ///< walk is disconnected
                WALK_Stop,          ///< walk stopped / stop walk
                WALK_Ready,         ///< walk ready
                WALK_Run            ///< walking
        };

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
        static const char *WALK_statusNames[] =
        {
                "disconnected", "ready", "stopped", "walking"
        };
        static const char *WALK_commandNames[] =
        {
                "disconnect", "connect", "stop", "walk"
        };
#endif // WHITEBOARD_POSTER_STRING_CONVERSION
        /**
         * Nao Walk control and status class
         */
        class WALK_ControlStatus
        {
                PROPERTY(float, forward)
                PROPERTY(float, left)
                PROPERTY(float, turn)
                PROPERTY(float, power)

                PROPERTY(WALK_ControlStatus_Mode, controlStatus)

        public:
                /** designated constructor */
                WALK_ControlStatus(guWhiteboard::WALK_ControlStatus_Mode c = WALK_Disconnected, float forward = 0, float left = 0, float turn = 0, float power = 0): _forward(forward), _left(left), _turn(turn), _power(power), _controlStatus(c) {}

                /** copy constructor */
                WALK_ControlStatus(const guWhiteboard::WALK_ControlStatus &other): _forward(other._forward), _left(other._left), _turn(other._turn), _power(other._power), _controlStatus(other._controlStatus) {}

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
                /** string constructor */
                WALK_ControlStatus(const std::string &command) { from_string(command); }

                /** convert to a string */
                std::string description() const
                {
                        std::string status(WALK_statusNames[controlStatus()]);
                        if (controlStatus() != WALK_Run)
                                return status;

                        std::ostringstream ss(status);
                        ss << "(" << forward() << "," << left() << "," << turn() << "," << power() << ")";

                        return ss.str();
                }

                /** convert from a string */
                void from_string(const std::string &command)
                {
                        for (int cmd = WALK_Disconnected; cmd <= WALK_Run; cmd++)
                        {
                                if (command == WALK_statusNames[cmd] ||
                                    command == WALK_commandNames[cmd])
                                {
                                        set_controlStatus(WALK_ControlStatus_Mode(cmd));
                                        if (cmd != WALK_Run)
                                                return;
                                        std::istringstream iss(command);
                                        std::string token;
                                        if (getline(iss, token, ','))
                                        {
                                                const char *str = token.c_str();
                                                while (!isdigit(*str))
                                                {
                                                        if (!*str) break;
                                                        str++;
                                                }
                                                set_forward(float(atof(str)));
                                        }
                                        else set_forward(0);

                                        if (getline(iss, token, ','))
                                        {
                                                const char *str = token.c_str();
                                                while (!isdigit(*str))
                                                {
                                                        if (!*str) break;
                                                        str++;
                                                }
                                                set_left(float(atof(str)));
                                        }
                                        else set_left(0);

                                        if (getline(iss, token, ','))
                                        {
                                                const char *str = token.c_str();
                                                while (!isdigit(*str))
                                                {
                                                        if (!*str) break;
                                                        str++;
                                                }
                                                set_power(float(atof(str)));
                                        }
                                        else set_power(0);
                                }
                        }
                }
#endif // WHITEBOARD_POSTER_STRING_CONVERSION
        };
}

#endif // WALK_ControlStatus_DEFINED