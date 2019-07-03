/*
 * file MissionPriorityForObstacles.swift
 *
 * This file was generated by classgenerator from mission_priority_for_obstacles.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Vlad Estivill-Castro. All rights reserved.
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
 *        This product includes software developed by Vlad Estivill-Castro.
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
 * This message should be posted when a machine calls sub-machines with knowledge of the priority of the mission. High priority
 * mission like chasing the soccer ball should ignore obstacles when walking because getting to the ball is very important and
 * another robot nearby should not detract from the mission of reaching the ball. When super-machines are trying to position
 * the robot somewhere, the priority of getting there is less relevant over avoiding obstacles and not being penalised. Thus,
 * navigation super-machines for tactical positions should set the ignore_obstacles to false.
 */
extension wb_mission_priority_for_obstacles {

    /**
     * Create a new `wb_mission_priority_for_obstacles`.
     */
    public static func make() -> wb_mission_priority_for_obstacles {
        return wb_mission_priority_for_obstacles(true)
    }

    /**
     * Create a new `wb_mission_priority_for_obstacles`.
     */
    public init(_ ignore_obstacles: Bool = true) {
        self.init()
        self.ignore_obstacles = ignore_obstacles
    }

    /**
     * Create a `wb_mission_priority_for_obstacles` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            let ignore_obstacles = dictionary["ignore_obstacles"] as? Bool
        else {
            fatalError("Unable to convert \(dictionary) to wb_mission_priority_for_obstacles.")
        }
        self.ignore_obstacles = ignore_obstacles
    }

}

extension wb_mission_priority_for_obstacles: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "ignore_obstacles=\(self.ignore_obstacles)"
        return descString
    }

}

extension wb_mission_priority_for_obstacles: Equatable {}

public func == (lhs: wb_mission_priority_for_obstacles, rhs: wb_mission_priority_for_obstacles) -> Bool {
    return lhs.ignore_obstacles == rhs.ignore_obstacles
}
