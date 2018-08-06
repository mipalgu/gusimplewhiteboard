/*
 * file TeleoperationControlVR.swift
 *
 * This file was generated by classgenerator from teleoperationControlVR.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 09:30, 07/08/2018.
 * Copyright © 2018 Carl Lusty. All rights reserved.
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
 * Control class used by the VR TeleOp App
 */
extension wb_teleoperation_control_v_r {

    public var _sayString: String {
        get {
            var sayString = self.sayString
            return String(cString: withUnsafePointer(to: &sayString.0) { $0 })
        } set {
            _ = withUnsafeMutablePointer(to: &self.sayString.0) { sayString_p in
                let arr = newValue.utf8CString
                _ = arr.withUnsafeBufferPointer {
                    strncpy(sayString_p, $0.baseAddress!, 30)
                }
            }
        }
    }

    /**
     * Create a new `wb_teleoperation_control_v_r`.
     */
    public static func make() -> wb_teleoperation_control_v_r {
        return wb_teleoperation_control_v_r(0)
    }

    /**
     * Create a new `wb_teleoperation_control_v_r`.
     */
    public init(_ ip: UInt8 = 0, action: Int32 = 0, stance: Int32 = 0, streamType: Int32 = 0, selectedCamera: Int32 = 0, sayString: String = "", walk: Int32 = 0, turn: Int32 = 0, timestamp: Int32 = 0) {
        self.init()
        self.ip = ip
        self.action = action
        self.stance = stance
        self.streamType = streamType
        self.selectedCamera = selectedCamera
        self._sayString = sayString
        self.walk = walk
        self.turn = turn
        self.timestamp = timestamp
    }

    /**
     * Create a `wb_teleoperation_control_v_r` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            let ip = dictionary["ip"] as? UInt8,
            let action = dictionary["action"] as? Int32,
            let stance = dictionary["stance"] as? Int32,
            let streamType = dictionary["streamType"] as? Int32,
            let selectedCamera = dictionary["selectedCamera"] as? Int32,
            var sayString = dictionary["sayString"],
            let walk = dictionary["walk"] as? Int32,
            let turn = dictionary["turn"] as? Int32,
            let timestamp = dictionary["timestamp"] as? Int32
        else {
            fatalError("Unable to convert \(dictionary) to wb_teleoperation_control_v_r.")
        }
        self.ip = ip
        self.action = action
        self.stance = stance
        self.streamType = streamType
        self.selectedCamera = selectedCamera
        self.sayString = withUnsafePointer(to: &sayString) {
            $0.withMemoryRebound(to: type(of: wb_teleoperation_control_v_r().sayString), capacity: 1) {
                $0.pointee
            }
        }
        self.walk = walk
        self.turn = turn
        self.timestamp = timestamp
    }

}

extension wb_teleoperation_control_v_r: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "ip=\(self.ip)"
        descString += ", "
        descString += "action=\(self.action)"
        descString += ", "
        descString += "stance=\(self.stance)"
        descString += ", "
        descString += "streamType=\(self.streamType)"
        descString += ", "
        descString += "selectedCamera=\(self.selectedCamera)"
        descString += ", "
        descString += "sayString=\(self._sayString)"
        descString += ", "
        descString += "walk=\(self.walk)"
        descString += ", "
        descString += "turn=\(self.turn)"
        descString += ", "
        descString += "timestamp=\(self.timestamp)"
        return descString
    }

}

extension wb_teleoperation_control_v_r: Equatable {}

public func == (lhs: wb_teleoperation_control_v_r, rhs: wb_teleoperation_control_v_r) -> Bool {
    return lhs.ip == rhs.ip
        && lhs.action == rhs.action
        && lhs.stance == rhs.stance
        && lhs.streamType == rhs.streamType
        && lhs.selectedCamera == rhs.selectedCamera
        && lhs._sayString == rhs._sayString
        && lhs.walk == rhs.walk
        && lhs.turn == rhs.turn
        && lhs.timestamp == rhs.timestamp
}
