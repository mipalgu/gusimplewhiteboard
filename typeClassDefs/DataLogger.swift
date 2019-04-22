/*
 * file DataLogger.swift
 *
 * This file was generated by classgenerator from data_logger.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Copyright © 2019 Dimitri Joukoff. All rights reserved.
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
 *        This product includes software developed by Dimitri Joukoff.
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
 *  General purpose data logger controller.
 *  DataLogger posts an initialisation DataLogger message to the WB on start-up
 *  Current implementation captures:
 *       currentState,
 *       currentSection,
 *       DCM Time (expressed as an uint32_t),
 *       Joint positions,
 *       Inertial sensors within the torso, and
 *       Pressure sensors on feet.
 * 
 *  Current implementation allows up to 100 seconds of data to be logged at a time.
 *  After the time expires, or when logging is stopped, the data is written to
 *  a CSV file (delimited using semi-colons) in /tmp using the following naming
 *  convention:
 *    (MachineName)-(DCM-TimeStampAtStartOfLogRun).csv
 * 
 * In states where there is a recurring internal section, CurrentSection will most likely record any value assigned within the internal section, unless the onEntry
 * or onExit sections execution time is greater than 10mS.  Thus, the CurrentSection can be used to record internal state of the internal section.
 * 
 *  Important:
 *  The output file is written immediately when:
 *  1) "loggerRunning" is set back to false or
 *  2) MAX_LOG_POINTS (see dataLogger.cc code) have been recorded, or
 *  3) shouldExit is set to true and there is accumulated data.
 */
extension wb_data_logger {

    public var _machineName: String {
        get {
            var machineName = self.machineName
            return String(cString: withUnsafePointer(to: &machineName.0) { $0 })
        } set {
            _ = withUnsafeMutablePointer(to: &self.machineName.0) { machineName_p in
                let arr = newValue.utf8CString
                _ = arr.withUnsafeBufferPointer {
                    strncpy(machineName_p, $0.baseAddress!, 40)
                }
            }
        }
    }

    public var _comment: String {
        get {
            var comment = self.comment
            return String(cString: withUnsafePointer(to: &comment.0) { $0 })
        } set {
            _ = withUnsafeMutablePointer(to: &self.comment.0) { comment_p in
                let arr = newValue.utf8CString
                _ = arr.withUnsafeBufferPointer {
                    strncpy(comment_p, $0.baseAddress!, 30)
                }
            }
        }
    }

    /**
     * Create a new `wb_data_logger`.
     */
    public static func make() -> wb_data_logger {
        return wb_data_logger("")
    }

    /**
     * Create a new `wb_data_logger`.
     */
    public init(_ machineName: String = "", currentState: UInt32 = 0, currentSection: UInt32 = 0, dataSet: UInt8 = 0, loggerRunning: Bool = false, shouldExit: Bool = false, comment: String = "") {
        self.init()
        self._machineName = machineName
        self.currentState = currentState
        self.currentSection = currentSection
        self.dataSet = dataSet
        self.loggerRunning = loggerRunning
        self.shouldExit = shouldExit
        self._comment = comment
    }

    /**
     * Create a `wb_data_logger` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            var machineName = dictionary["machineName"],
            let currentState = dictionary["currentState"] as? UInt32,
            let currentSection = dictionary["currentSection"] as? UInt32,
            let dataSet = dictionary["dataSet"] as? UInt8,
            let loggerRunning = dictionary["loggerRunning"] as? Bool,
            let shouldExit = dictionary["shouldExit"] as? Bool,
            var comment = dictionary["comment"]
        else {
            fatalError("Unable to convert \(dictionary) to wb_data_logger.")
        }
        self.machineName = withUnsafePointer(to: &machineName) {
            $0.withMemoryRebound(to: type(of: wb_data_logger().machineName), capacity: 1) {
                $0.pointee
            }
        }
        self.currentState = currentState
        self.currentSection = currentSection
        self.dataSet = dataSet
        self.loggerRunning = loggerRunning
        self.shouldExit = shouldExit
        self.comment = withUnsafePointer(to: &comment) {
            $0.withMemoryRebound(to: type(of: wb_data_logger().comment), capacity: 1) {
                $0.pointee
            }
        }
    }

}

extension wb_data_logger: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "machineName=\(self._machineName)"
        descString += ", "
        descString += "currentState=\(self.currentState)"
        descString += ", "
        descString += "currentSection=\(self.currentSection)"
        descString += ", "
        descString += "dataSet=\(self.dataSet)"
        descString += ", "
        descString += "loggerRunning=\(self.loggerRunning)"
        descString += ", "
        descString += "shouldExit=\(self.shouldExit)"
        descString += ", "
        descString += "comment=\(self._comment)"
        return descString
    }

}

extension wb_data_logger: Equatable {}

public func == (lhs: wb_data_logger, rhs: wb_data_logger) -> Bool {
    return lhs._machineName == rhs._machineName
        && lhs.currentState == rhs.currentState
        && lhs.currentSection == rhs.currentSection
        && lhs.dataSet == rhs.dataSet
        && lhs.loggerRunning == rhs.loggerRunning
        && lhs.shouldExit == rhs.shouldExit
        && lhs._comment == rhs._comment
}
