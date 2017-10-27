/*
 * file NaoWalkStatus.swift
 *
 * This file was generated by classgenerator from naoWalkStatus.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 09:53, 27/10/2017.
 * Copyright © 2017 Carl Lusty. All rights reserved.
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

//swiftlint:disable function_body_length
//swiftlint:disable file_length
//swiftlint:disable line_length
//swiftlint:disable identifier_name

/**
 * Status message for the walk engine created by UNSW.
 * LICENSE:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/blob/master/LICENSE
 * Source:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/blob/master/robot/motion/generator/Walk2014Generator.cpp
 * Some of their documentation:
 * https://github.com/UNSWComputing/rUNSWift-2017-release/wiki/Motion#walk2014-generator
 */
extension wb_nao_walk_status {



    /**
     * Create a new `wb_nao_walk_status`.
     */
    public static func make() -> wb_nao_walk_status {
        return wb_nao_walk_status(forward: 0)
    }

    /**
     * Create a new `wb_nao_walk_status`.
     */
    public init(forward: Int16 = 0, left: Int16 = 0, turn: Int8 = 0) {
        self.forward = forward
        self.left = left
        self.turn = turn
    }

    /**
     * Create a `wb_nao_walk_status` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        guard
            let forward = dictionary["forward"] as? Int16,
            let left = dictionary["left"] as? Int16,
            let turn = dictionary["turn"] as? Int8
        else {
            fatalError("Unable to convert \(dictionary) to wb_nao_walk_status.")
        }
        self.forward = forward
        self.left = left
        self.turn = turn
    }

}

extension wb_nao_walk_status: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "forward=\(self.forward)"
        descString += ", "
        descString += "left=\(self.left)"
        descString += ", "
        descString += "turn=\(self.turn)"
        return descString
    }

}

extension wb_nao_walk_status: Equatable {}

public func == (lhs: wb_nao_walk_status, rhs: wb_nao_walk_status) -> Bool {
    return lhs.forward == rhs.forward
        && lhs.left == rhs.left
        && lhs.turn == rhs.turn
}
