/*
 *  FSMControlStatus.h
 *  gusimplewhiteboard / clfsm
 *
 *  Created by Rene Hexel on 25/03/13.
 *  Copyright (c) 2013, 2014 Rene Hexel. All rights reserved.
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
#ifndef guWhiteboard_FSMControlStatus_DEFINED
#define guWhiteboard_FSMControlStatus_DEFINED
#define guWhiteboard_FSMNames_DEFINED 
#define guWhiteboard_FSMNames_DEFINED 


#include <cstdlib>
#include <cstring>
#include <bitset>
#include <gu_util.h>
#include "wb_fsm_control_status.h"
#include "wb_fsm_state_status.h"
#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
#include <sstream>
#include <ctype.h>
#endif

namespace guWhiteboard
{
        /**
         * Class for controlling and getting the status of FSMs.
         * This is implemented as a bit vector with an enum for control and
         * one bit per FSM.
         */
        class FSMControlStatus: public wb_fsm_control_status
        {
        public:
            /** designated constructor */
            FSMControlStatus(FSMControlType t = FSMStatus): wb_fsm_control_status() { set_command(t); }

            /** copy constructor */
            FSMControlStatus(const FSMControlStatus &other) { memcpy(this, &other, sizeof(wb_fsm_control_status)); }

            /** assignment operator */
            const FSMControlStatus &operator=(const FSMControlStatus &other) { memcpy(this, &other, sizeof(wb_fsm_control_status)); return *this; }

            /** command getter */
            FSMControlType command() const { return static_cast<FSMControlType>(CONTROLSTATUS_GET_CMD(this)); }

            /** command setter */
            void set_command(FSMControlType command) { CONTROLSTATUS_SET_CMD(this, command); }

            /** machine status setter */
            bool get(int fsm) const { return CONTROLSTATUS_GET_FSM(this, fsm); }

            /** machine control/status setter */
            void set(int fsm) { CONTROLSTATUS_SET_FSM(this, fsm); }

            /** machine control/status clearer */
            void clr(int fsm) { CONTROLSTATUS_CLR_FSM(this, fsm); }

            /** machine control/status setter / clearer */
            void set(int fsm, bool value) { value ? set(fsm) : clr(fsm); }

            /** clear all machines and reset back to status */
            void reset() { memset(this, 0, sizeof(*this)); }

            /** comparison operator **/
            bool operator==(const FSMControlStatus &other) const { return memcmp(this, &other, sizeof(*this)) == 0; }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
            /** string constructor */
            FSMControlStatus(const std::string &names): wb_fsm_control_status() { from_string(names); }

            /** convert to a string */
            std::string description() const
            {
                std::ostringstream ss;
                ss << command();
                for (size_t i = 0; i < CONTROLSTATUS_NUM_FSMS; i++)
                    if (CONTROLSTATUS_GET_FSM(this, i))
                        ss << "," << i;

                return ss.str();
            }

            /** convert from a string */
            void from_string(const std::string &str)
            {
                std::istringstream iss(str);
                std::string token;
                if (getline(iss, token, ','))
                {
                    set_command(static_cast<enum FSMControlType>(atoi(token.c_str())));
                    while (getline(iss, token, ','))
                    {
                        size_t i = static_cast<size_t>(atol(token.c_str()));
                        if (i < CONTROLSTATUS_BIT_SIZE)
                            CONTROLSTATUS_SET_FSM(this, i);
                    }
                }
            }
#endif //WHITEBOARD_POSTER_STRING_CONVERSION
        };

        /**
         * Class for transmitting machine names over the whiteboard
         */
        class FSMNames
        {
	    /** start offset */
            PROPERTY(uint16_t, startoffs)
	    /** names array */
            char _names[sizeof(gsw_simple_message)-sizeof(uint16_t)];
        public:
            /** designated constructor */
            FSMNames(uint16_t startoffs = 0, const char *names = NULLPTR): _startoffs(startoffs)
            {
                int i = names ? int(strlen(names) + 1) : 0;
                if (names) strcpy(_names, names);
                else _names[i++] = '\0';
                _names[i] = '\0';
            }

            /** copy constructor */
            FSMNames(const FSMNames &other): _startoffs(other._startoffs)
            {
                memcpy(_names, other._names, sizeof(_names));
            }

            /** assignment operator */
            const FSMNames &operator=(const FSMNames &other) { memcpy(this, &other, sizeof(other)); return *this; }

            /** names getter */
            char *names() { return _names; }

            /** end of string */
            const char *end() { return &_names[sizeof(_names)]; }

            /** get the next name */
            char *next_name(const char *name = NULLPTR) { if (!name) return names(); while (name < end() && *name++) {} return const_cast<char *>(name); }

            /** get the next empty slot */
            char *next_slot(const char *name = NULLPTR) { while (*(name = next_name(name)) && name < end()) {} return const_cast<char *>(name); }

            /** return the available space after a given pointer */
            int available_space(const char *pos) { return int(end() - pos); }

            /** try to add a new name */
            char *add_name(char *name)
            {
                char *pos = next_slot();
                int n = available_space(pos);
                if (n <= 0) return NULLPTR;
                gu_strlcpy(pos, name, size_t(n));
                return pos;
            }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
            /** string constructor */
            FSMNames(std::string names) { from_string(names); }

            /** convert to a string */
            std::string description()
            {
                std::stringstream ss;
                ss << startoffs();
                for (const char *s = names(); s < end() && *s; s = next_name(s))
                    ss << "," << s;

                return ss.str();
            }

            /** convert from a string */
            void from_string(const std::string &str)
            {
                char *dst = names();
                std::istringstream iss(str);
                std::string token;
                if (getline(iss, token, ','))
                {
                    set_startoffs(static_cast<uint16_t>(atoi(token.c_str())));
                    while (getline(iss, token, ','))
                    {
                        int len = int(token.length());
                        if (len >= available_space(dst))
                            break;
                        strcpy(dst, token.c_str());
                        dst += len;
                        *dst++ = '\0';
                    }
                }
                else set_startoffs(0);

                if (available_space(dst)) *dst++ = '\0';
                if (available_space(dst)) *dst = '\0';
            }
#endif //WHITEBOARD_POSTER_STRING_CONVERSION
        };

        /**
         * Class for transmitting machine names over the whiteboard
         */
        class FSMState: public wb_fsm_state_status
        {

        public:
            /** designated constructor */
            FSMState(): wb_fsm_state_status() {}

            /** copy constructor */
            FSMState(const FSMState &other) { memcpy(this, &other, sizeof(wb_fsm_state_status)); }

            /** assignment operator */
            const FSMState &operator=(const FSMState &other) { memcpy(this, &other, sizeof(other)); return *this; }

            /** names getter */
            uint8_t getStateForMachineID(uint8_t machineID) {

                if (machineID >= STATE_BYTE_SIZE) {
                    return INVALIDMACHINE;
                }

                return STATESTATUS_GET_STATE(this, machineID);
            }

            /**
             * Record the given state for the given Machine ID.
             * @param machineID Machine to record the state number for
             * @param state     State number for the machine
             */
            void setStateForMachineID (uint8_t machineID, uint8_t state)
            {
                if (machineID < STATE_BYTE_SIZE)
                    STATESTATUS_SET_STATE(this, machineID, state);
            }

            /** Reset all machines to INVALIDMACHINE */
            void reset() { memset(this, INVALIDMACHINE, sizeof(wb_fsm_state_status)); }

#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
            /** string constructor */
            FSMState(std::string states) { from_string(states); }

            /** convert to a string */
            std::string description()
            {
                std::stringstream ss;
                size_t sizeAtLastValidState = 0;
                for (uint8_t machineID =0; machineID < STATE_BYTE_SIZE; machineID++) {
                    uint8_t state = STATESTATUS_GET_STATE(this, machineID);
                    ss << static_cast<unsigned>(state) << ((machineID < (STATE_BYTE_SIZE-1))? "," : "");
                    if (state != INVALIDMACHINE) {
                        sizeAtLastValidState = ss.str().size() - static_cast<size_t>(((machineID < (STATE_BYTE_SIZE-1))? 1 : 0));
                    }
                }
                std::string message = ss.str();
                message.erase(sizeAtLastValidState, message.size()-sizeAtLastValidState);

                return message;
            }

            /** convert from a string */
            void from_string(const std::string &states)
            {
                std::istringstream iss(states);
                std::string token;
                uint8_t machineID = 0;
                while (!iss.eof() && machineID < STATE_BYTE_SIZE) {
                  getline(iss, token, ',');
                  STATESTATUS_SET_STATE(this, machineID++, static_cast<uint8_t>(atoi(token.c_str())));
                }
            }
#endif //WHITEBOARD_POSTER_STRING_CONVERSION
        };
}


#endif // FSMControlStatus_DEFINED
