/*
 * file SENSORSLegJointSensors.swift
 *
 * This file was generated by classgenerator from SENSORS_LegJointSensors.txt.
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
 * @brief Leg joints
 */
extension wb_sensors_legjointsensors {

    /**
     * Create a new `wb_sensors_legjointsensors`.
     */
    public static func make() -> wb_sensors_legjointsensors {
        return wb_sensors_legjointsensors(0.0)
    }

    /**
     * Create a new `wb_sensors_legjointsensors`.
     */
    public init(_ LKneePitch: Float = 0.0, LAnklePitch: Float = 0.0, LAnkleRoll: Float = 0.0, RKneePitch: Float = 0.0, RAnklePitch: Float = 0.0, RAnkleRoll: Float = 0.0, LHipYawPitch: Float = 0.0, LHipRoll: Float = 0.0, LHipPitch: Float = 0.0, RHipYawPitch: Float = 0.0, RHipRoll: Float = 0.0, RHipPitch: Float = 0.0) {
        self.init()
        self.LKneePitch = LKneePitch
        self.LAnklePitch = LAnklePitch
        self.LAnkleRoll = LAnkleRoll
        self.RKneePitch = RKneePitch
        self.RAnklePitch = RAnklePitch
        self.RAnkleRoll = RAnkleRoll
        self.LHipYawPitch = LHipYawPitch
        self.LHipRoll = LHipRoll
        self.LHipPitch = LHipPitch
        self.RHipYawPitch = RHipYawPitch
        self.RHipRoll = RHipRoll
        self.RHipPitch = RHipPitch
    }

    /**
     * Create a `wb_sensors_legjointsensors` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            let LKneePitch = dictionary["LKneePitch"] as? Float,
            let LAnklePitch = dictionary["LAnklePitch"] as? Float,
            let LAnkleRoll = dictionary["LAnkleRoll"] as? Float,
            let RKneePitch = dictionary["RKneePitch"] as? Float,
            let RAnklePitch = dictionary["RAnklePitch"] as? Float,
            let RAnkleRoll = dictionary["RAnkleRoll"] as? Float,
            let LHipYawPitch = dictionary["LHipYawPitch"] as? Float,
            let LHipRoll = dictionary["LHipRoll"] as? Float,
            let LHipPitch = dictionary["LHipPitch"] as? Float,
            let RHipYawPitch = dictionary["RHipYawPitch"] as? Float,
            let RHipRoll = dictionary["RHipRoll"] as? Float,
            let RHipPitch = dictionary["RHipPitch"] as? Float
        else {
            fatalError("Unable to convert \(dictionary) to wb_sensors_legjointsensors.")
        }
        self.LKneePitch = LKneePitch
        self.LAnklePitch = LAnklePitch
        self.LAnkleRoll = LAnkleRoll
        self.RKneePitch = RKneePitch
        self.RAnklePitch = RAnklePitch
        self.RAnkleRoll = RAnkleRoll
        self.LHipYawPitch = LHipYawPitch
        self.LHipRoll = LHipRoll
        self.LHipPitch = LHipPitch
        self.RHipYawPitch = RHipYawPitch
        self.RHipRoll = RHipRoll
        self.RHipPitch = RHipPitch
    }

}

extension wb_sensors_legjointsensors: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "LKneePitch=\(self.LKneePitch)"
        descString += ", "
        descString += "LAnklePitch=\(self.LAnklePitch)"
        descString += ", "
        descString += "LAnkleRoll=\(self.LAnkleRoll)"
        descString += ", "
        descString += "RKneePitch=\(self.RKneePitch)"
        descString += ", "
        descString += "RAnklePitch=\(self.RAnklePitch)"
        descString += ", "
        descString += "RAnkleRoll=\(self.RAnkleRoll)"
        descString += ", "
        descString += "LHipYawPitch=\(self.LHipYawPitch)"
        descString += ", "
        descString += "LHipRoll=\(self.LHipRoll)"
        descString += ", "
        descString += "LHipPitch=\(self.LHipPitch)"
        descString += ", "
        descString += "RHipYawPitch=\(self.RHipYawPitch)"
        descString += ", "
        descString += "RHipRoll=\(self.RHipRoll)"
        descString += ", "
        descString += "RHipPitch=\(self.RHipPitch)"
        return descString
    }

}

extension wb_sensors_legjointsensors: Equatable {}

public func == (lhs: wb_sensors_legjointsensors, rhs: wb_sensors_legjointsensors) -> Bool {
    return lhs.LKneePitch == rhs.LKneePitch
        && lhs.LAnklePitch == rhs.LAnklePitch
        && lhs.LAnkleRoll == rhs.LAnkleRoll
        && lhs.RKneePitch == rhs.RKneePitch
        && lhs.RAnklePitch == rhs.RAnklePitch
        && lhs.RAnkleRoll == rhs.RAnkleRoll
        && lhs.LHipYawPitch == rhs.LHipYawPitch
        && lhs.LHipRoll == rhs.LHipRoll
        && lhs.LHipPitch == rhs.LHipPitch
        && lhs.RHipYawPitch == rhs.RHipYawPitch
        && lhs.RHipRoll == rhs.RHipRoll
        && lhs.RHipPitch == rhs.RHipPitch
}
