/*
 * file MachineFilteredVision.swift
 *
 * This file was generated by classgenerator from machine_filtered_vision.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 13:18, 09/10/2018.
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
 * Results of the FSM (and sub machines) "SMFilterVision".
 * This machine applies some basic filtering to vision output messages.
 * It also handles the coord conversion and kinematics for distance and bearing calculations on the Nao robot.
 */
extension wb_machine_filtered_vision {

    public var _lineSightings: [wb_machine_line_sighting] {
        get {
            var lineSightings = self.lineSightings
            return withUnsafePointer(to: &lineSightings.0) { lineSightings_p in
                var lineSightings: [wb_machine_line_sighting] = []
                lineSightings.reserveCapacity(8)
                for lineSightings_index in 0..<8 {
                    lineSightings.append(lineSightings_p[lineSightings_index])
                }
                return lineSightings
            }
        } set {
            _ = withUnsafeMutablePointer(to: &self.lineSightings.0) { lineSightings_p in
                for lineSightings_index in 0..<8 {
                    lineSightings_p[lineSightings_index] = newValue[lineSightings_index]
                }
            }
        }
    }

    /**
     * Create a new `wb_machine_filtered_vision`.
     */
    public static func make() -> wb_machine_filtered_vision {
        return wb_machine_filtered_vision(0)
    }

    /**
     * Create a new `wb_machine_filtered_vision`.
     */
    public init(_ ball_direction: Int8 = 0, ball_distance: UInt16 = 0, ball_visible: Bool = 0, goal_direction: Int8 = 0, goal_distance: UInt16 = 0, goal_visible: Bool = 0, goal_sightingType: GoalSightingType = NoSightingType, horizon_direction: Int8 = 0, horizon_distance: UInt16 = 0, horizon_visible: Bool = 0, horizon_sightingType: HorizonSightingType = NoHorizonSightingType, lineSightings: [wb_machine_line_sighting] = [wb_machine_line_sighting(), wb_machine_line_sighting(), wb_machine_line_sighting(), wb_machine_line_sighting(), wb_machine_line_sighting(), wb_machine_line_sighting(), wb_machine_line_sighting(), wb_machine_line_sighting()], numLineSightings: Int32 = 0) {
        self.init()
        self.ball_direction = ball_direction
        self.ball_distance = ball_distance
        self.ball_visible = ball_visible
        self.goal_direction = goal_direction
        self.goal_distance = goal_distance
        self.goal_visible = goal_visible
        self.goal_sightingType = goal_sightingType
        self.horizon_direction = horizon_direction
        self.horizon_distance = horizon_distance
        self.horizon_visible = horizon_visible
        self.horizon_sightingType = horizon_sightingType
        self._lineSightings = lineSightings
        self.numLineSightings = numLineSightings
    }

    /**
     * Create a `wb_machine_filtered_vision` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            let ball_direction = dictionary["ball_direction"] as? Int8,
            let ball_distance = dictionary["ball_distance"] as? UInt16,
            let ball_visible = dictionary["ball_visible"] as? Bool,
            let goal_direction = dictionary["goal_direction"] as? Int8,
            let goal_distance = dictionary["goal_distance"] as? UInt16,
            let goal_visible = dictionary["goal_visible"] as? Bool,
            let goal_sightingType = dictionary["goal_sightingType"] as? GoalSightingType,
            let horizon_direction = dictionary["horizon_direction"] as? Int8,
            let horizon_distance = dictionary["horizon_distance"] as? UInt16,
            let horizon_visible = dictionary["horizon_visible"] as? Bool,
            let horizon_sightingType = dictionary["horizon_sightingType"] as? HorizonSightingType,
            var lineSightings = dictionary["lineSightings"],
            let numLineSightings = dictionary["numLineSightings"] as? Int32
        else {
            fatalError("Unable to convert \(dictionary) to wb_machine_filtered_vision.")
        }
        self.ball_direction = ball_direction
        self.ball_distance = ball_distance
        self.ball_visible = ball_visible
        self.goal_direction = goal_direction
        self.goal_distance = goal_distance
        self.goal_visible = goal_visible
        self.goal_sightingType = goal_sightingType
        self.horizon_direction = horizon_direction
        self.horizon_distance = horizon_distance
        self.horizon_visible = horizon_visible
        self.horizon_sightingType = horizon_sightingType
        self.lineSightings = withUnsafePointer(to: &lineSightings) {
            $0.withMemoryRebound(to: type(of: wb_machine_filtered_vision().lineSightings), capacity: 1) {
                $0.pointee
            }
        }
        self.numLineSightings = numLineSightings
    }

}

extension wb_machine_filtered_vision: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "ball_direction=\(self.ball_direction)"
        descString += ", "
        descString += "ball_distance=\(self.ball_distance)"
        descString += ", "
        descString += "ball_visible=\(self.ball_visible)"
        descString += ", "
        descString += "goal_direction=\(self.goal_direction)"
        descString += ", "
        descString += "goal_distance=\(self.goal_distance)"
        descString += ", "
        descString += "goal_visible=\(self.goal_visible)"
        descString += ", "
        descString += "goal_sightingType=\(self.goal_sightingType.rawValue)"
        descString += ", "
        descString += "horizon_direction=\(self.horizon_direction)"
        descString += ", "
        descString += "horizon_distance=\(self.horizon_distance)"
        descString += ", "
        descString += "horizon_visible=\(self.horizon_visible)"
        descString += ", "
        descString += "horizon_sightingType=\(self.horizon_sightingType.rawValue)"
        descString += ", "
        if self._lineSightings.isEmpty {
            descString += "lineSightings={}"
        } else {
            let first = "{" + self.lineSightings.0.description + "}"
            descString += "lineSightings={"
            descString += self._lineSightings.dropFirst().reduce("\(first)") { $0 + ", " + "{" + $1.description + "}" }
            descString += "}"
        }
        descString += ", "
        descString += "numLineSightings=\(self.numLineSightings)"
        return descString
    }

}

extension wb_machine_filtered_vision: Equatable {}

public func == (lhs: wb_machine_filtered_vision, rhs: wb_machine_filtered_vision) -> Bool {
    return lhs.ball_direction == rhs.ball_direction
        && lhs.ball_distance == rhs.ball_distance
        && lhs.ball_visible == rhs.ball_visible
        && lhs.goal_direction == rhs.goal_direction
        && lhs.goal_distance == rhs.goal_distance
        && lhs.goal_visible == rhs.goal_visible
        && lhs.goal_sightingType == rhs.goal_sightingType
        && lhs.horizon_direction == rhs.horizon_direction
        && lhs.horizon_distance == rhs.horizon_distance
        && lhs.horizon_visible == rhs.horizon_visible
        && lhs.horizon_sightingType == rhs.horizon_sightingType
        && lhs._lineSightings == rhs._lineSightings
        && lhs.numLineSightings == rhs.numLineSightings
}
