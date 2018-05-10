/*
 * file TopParticles.swift
 *
 * This file was generated by classgenerator from TopParticles.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Vlad Estivill-Castro at 15:28, 02/05/2018.
 * Copyright © 2018 Vlad Estivill-Castro. All rights reserved.
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
 * The class of the top particles in a Localization Filter
 */
extension wb_top_particles {

    public var _particles: [wb_particle_position] {
        get {
            var particles = self.particles
            return withUnsafePointer(to: &particles.0) { particles_p in
                var particles: [wb_particle_position] = []
                particles.reserveCapacity(4)
                for particles_index in 0..<4 {
                    particles.append(particles_p[particles_index])
                }
                return particles
            }
        } set {
            _ = withUnsafeMutablePointer(to: &self.particles.0) { particles_p in
                for particles_index in 0..<4 {
                    particles_p[particles_index] = newValue[particles_index]
                }
            }
        }
    }

    /**
     * Create a new `wb_top_particles`.
     */
    public static func make() -> wb_top_particles {
        return wb_top_particles([wb_particle_position(), wb_particle_position(), wb_particle_position(), wb_particle_position()])
    }

    /**
     * Create a new `wb_top_particles`.
     */
    public init(_ particles: [wb_particle_position] = [wb_particle_position(), wb_particle_position(), wb_particle_position(), wb_particle_position()], dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable: Int32 = 0) {
        self.init()
        self._particles = particles
        self.dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable = dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable
    }

    /**
     * Create a `wb_top_particles` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            var particles = dictionary["particles"],
            let dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable = dictionary["dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable"] as? Int32
        else {
            fatalError("Unable to convert \(dictionary) to wb_top_particles.")
        }
        self.particles = withUnsafePointer(to: &particles) {
            $0.withMemoryRebound(to: type(of: wb_top_particles().particles), capacity: 1) {
                $0.pointee
            }
        }
        self.dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable = dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable
    }

}

extension wb_top_particles: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable=\(self.dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable)"
        return descString
    }

}

extension wb_top_particles: Equatable {}

public func == (lhs: wb_top_particles, rhs: wb_top_particles) -> Bool {
    return lhs._particles == rhs._particles
        && lhs.dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable == rhs.dummyValuePleaseRemoveOnceArrayParsingIsImplementedOtherwiseTheParserHasAnUnUsedVariable
}
