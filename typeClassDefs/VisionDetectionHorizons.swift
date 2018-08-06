/*
 * file VisionDetectionHorizons.swift
 *
 * This file was generated by classgenerator from vision_detection_horizons.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Carl Lusty at 09:26, 07/08/2018.
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
 * Array of fieldHorizons, one instance reported by each camera. Using the guvision camera ordering for top and bottom, on the Nao.
 */
extension wb_vision_detection_horizons {

    public var _horizons: [wb_vision_detection_horizon] {
        get {
            var horizons = self.horizons
            return withUnsafePointer(to: &horizons.0) { horizons_p in
                var horizons: [wb_vision_detection_horizon] = []
                horizons.reserveCapacity(2)
                for horizons_index in 0..<2 {
                    horizons.append(horizons_p[horizons_index])
                }
                return horizons
            }
        } set {
            _ = withUnsafeMutablePointer(to: &self.horizons.0) { horizons_p in
                for horizons_index in 0..<2 {
                    horizons_p[horizons_index] = newValue[horizons_index]
                }
            }
        }
    }

    /**
     * Create a new `wb_vision_detection_horizons`.
     */
    public static func make() -> wb_vision_detection_horizons {
        return wb_vision_detection_horizons(0)
    }

    /**
     * Create a new `wb_vision_detection_horizons`.
     */
    public init(_ frameNumber: UInt64 = 0, horizons: [wb_vision_detection_horizon] = [wb_vision_detection_horizon(), wb_vision_detection_horizon()]) {
        self.init()
        self.frameNumber = frameNumber
        self._horizons = horizons
    }

    /**
     * Create a `wb_vision_detection_horizons` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            let frameNumber = dictionary["frameNumber"] as? UInt64,
            var horizons = dictionary["horizons"]
        else {
            fatalError("Unable to convert \(dictionary) to wb_vision_detection_horizons.")
        }
        self.frameNumber = frameNumber
        self.horizons = withUnsafePointer(to: &horizons) {
            $0.withMemoryRebound(to: type(of: wb_vision_detection_horizons().horizons), capacity: 1) {
                $0.pointee
            }
        }
    }

}

extension wb_vision_detection_horizons: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "frameNumber=\(self.frameNumber)"
        descString += ", "
        if self._horizons.isEmpty {
            descString += "horizons={}"
        } else {
            let first = "{" + self.horizons.0.description + "}"
            descString += "horizons={"
            descString += self._horizons.dropFirst().reduce("\(first)") { $0 + ", " + "{" + $1.description + "}" }
            descString += "}"
        }
        return descString
    }

}

extension wb_vision_detection_horizons: Equatable {}

public func == (lhs: wb_vision_detection_horizons, rhs: wb_vision_detection_horizons) -> Bool {
    return lhs.frameNumber == rhs.frameNumber
        && lhs._horizons == rhs._horizons
}
