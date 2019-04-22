/*
 * file Input3D.swift
 *
 * This file was generated by classgenerator from Input3D.txt.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Carl Lusty. All rights reserved.
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
 * Simple 3 dimensional input class
 */
extension wb_input3d {

    /**
     * Create a new `wb_input3d`.
     */
    public static func make() -> wb_input3d {
        return wb_input3d(0)
    }

    /**
     * Create a new `wb_input3d`.
     */
    public init(_ yaw: Int16 = 0, pitch: Int16 = 0, roll: Int16 = 0, power: Int16 = 0) {
        self.init()
        self.yaw = yaw
        self.pitch = pitch
        self.roll = roll
        self.power = power
    }

    /**
     * Create a `wb_input3d` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            let yaw = dictionary["yaw"] as? Int16,
            let pitch = dictionary["pitch"] as? Int16,
            let roll = dictionary["roll"] as? Int16,
            let power = dictionary["power"] as? Int16
        else {
            fatalError("Unable to convert \(dictionary) to wb_input3d.")
        }
        self.yaw = yaw
        self.pitch = pitch
        self.roll = roll
        self.power = power
    }

}

extension wb_input3d: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "yaw=\(self.yaw)"
        descString += ", "
        descString += "pitch=\(self.pitch)"
        descString += ", "
        descString += "roll=\(self.roll)"
        descString += ", "
        descString += "power=\(self.power)"
        return descString
    }

}

extension wb_input3d: Equatable {}

public func == (lhs: wb_input3d, rhs: wb_input3d) -> Bool {
    return lhs.yaw == rhs.yaw
        && lhs.pitch == rhs.pitch
        && lhs.roll == rhs.roll
        && lhs.power == rhs.power
}
