/*
 *  guwhiteboardgetter.h
 *
 *  Created by Rene Hexel on 29/04/13.
 *  Copyright (c) 2013 Rene Hexel.
 *  All rights reserved.
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
 *    software must display the following acknowledgment:
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
#ifndef gusimplewhiteboard_guwhiteboardgetter_h
#define gusimplewhiteboard_guwhiteboardgetter_h

#include "guwhiteboardposter.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * A generic C function that posts to the whiteboard.
 * Both the message type and the message content are strings.
 * The returned message string has to be freed!
 */
char *whiteboard_get(const char *message_type, gu_simple_message *msg);

/**
 * Generic C function that posts a message with a given message number
 * to the whiteboard.
 * The returned message string has to be freed!
 */
char *whiteboard_getmsg(int message_index, gu_simple_message *msg);

#ifdef __cplusplus
} // extern "C"

namespace guWhiteboard
{
        /**
         * A generic C++ function that gets a string from the whiteboard.
         * Both the message type and the message content are strings.
         * @param message_type the string version of the type
         * @param msg the data container, if NULL then the message is gotten from the whiteboard
         * @return the pretty printed data string
         */
        std::string getmsg(std::string message_type, gu_simple_message *msg = NULL);

        /**
         * Generic C++ function that gets a message with a given message number
         * to the whiteboard.
         * @param message_index the offset or enum value of the type to get
         * @param msg the data container, if NULL then the message is gotten from the whiteboard
         * @return the pretty printed data string
         */
        std::string getmsg(guWhiteboard::WBTypes message_index, gu_simple_message *msg = NULL);
}
#endif // __cplusplus

#endif
