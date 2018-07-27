/*
 * file VisionControlStatus.swift
 *
 * This file was generated by classgenerator from vision_control_status.gen.
 * DO NOT CHANGE MANUALLY!
 *
 * Created by Eugene Gilmore at 10:58, 27/07/2018.
 * Copyright © 2018 Eugene Gilmore. All rights reserved.
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
 *        This product includes software developed by Eugene Gilmore.
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
 * The control status message used by guvision, guvision will post the current state of the pipeline once a frame with the message, various properties can also be set by post a vision_controll message with this type
 */
extension wb_vision_control_status {

    public var _colourCalibration: String {
        get {
            var colourCalibration = self.colourCalibration
            return String(cString: withUnsafePointer(to: &colourCalibration.0) { $0 })
        } set {
            _ = withUnsafeMutablePointer(to: &self.colourCalibration.0) { colourCalibration_p in
                let arr = newValue.utf8CString
                _ = arr.withUnsafeBufferPointer {
                    strncpy(colourCalibration_p, $0.baseAddress!, 10)
                }
            }
        }
    }

    /**
     * Create a new `wb_vision_control_status`.
     */
    public static func make() -> wb_vision_control_status {
        return wb_vision_control_status(VGA)
    }

    /**
     * Create a new `wb_vision_control_status`.
     */
    public init(_ cameraResolution: Resolutions = VGA, pipelineRunning: Bool = true, selectedCamera: VisionCamera = Top, saveImage: SaveFileType = None, saveClassifiedImage: Bool = false, pipeline: NamedPipeline = Soccer, chooseCamera: Int32 = 0, networkTop: NeuralNetworkType = v2, networkBottom: NeuralNetworkType = v2, streamingSource: StreamingType = Normal, imageInput: Bool = false, jpegStreamQuality: Int32 = 30, jpegStreamStride: Int32 = 4, frameRate: Int32 = 0, runPipelineOnce: Bool = false, frameNumber: UInt64 = 0, colourCalibration: String = "class") {
        self.init()
        self.cameraResolution = cameraResolution
        self.pipelineRunning = pipelineRunning
        self.selectedCamera = selectedCamera
        self.saveImage = saveImage
        self.saveClassifiedImage = saveClassifiedImage
        self.pipeline = pipeline
        self.chooseCamera = chooseCamera
        self.networkTop = networkTop
        self.networkBottom = networkBottom
        self.streamingSource = streamingSource
        self.imageInput = imageInput
        self.jpegStreamQuality = jpegStreamQuality
        self.jpegStreamStride = jpegStreamStride
        self.frameRate = frameRate
        self.runPipelineOnce = runPipelineOnce
        self.frameNumber = frameNumber
        self._colourCalibration = colourCalibration
    }

    /**
     * Create a `wb_vision_control_status` from a dictionary.
     */
    public init(fromDictionary dictionary: [String: Any]) {
        self.init()
        guard
            let cameraResolution = dictionary["cameraResolution"] as? Resolutions,
            let pipelineRunning = dictionary["pipelineRunning"] as? Bool,
            let selectedCamera = dictionary["selectedCamera"] as? VisionCamera,
            let saveImage = dictionary["saveImage"] as? SaveFileType,
            let saveClassifiedImage = dictionary["saveClassifiedImage"] as? Bool,
            let pipeline = dictionary["pipeline"] as? NamedPipeline,
            let chooseCamera = dictionary["chooseCamera"] as? Int32,
            let networkTop = dictionary["networkTop"] as? NeuralNetworkType,
            let networkBottom = dictionary["networkBottom"] as? NeuralNetworkType,
            let streamingSource = dictionary["streamingSource"] as? StreamingType,
            let imageInput = dictionary["imageInput"] as? Bool,
            let jpegStreamQuality = dictionary["jpegStreamQuality"] as? Int32,
            let jpegStreamStride = dictionary["jpegStreamStride"] as? Int32,
            let frameRate = dictionary["frameRate"] as? Int32,
            let runPipelineOnce = dictionary["runPipelineOnce"] as? Bool,
            let frameNumber = dictionary["frameNumber"] as? UInt64,
            var colourCalibration = dictionary["colourCalibration"]
        else {
            fatalError("Unable to convert \(dictionary) to wb_vision_control_status.")
        }
        self.cameraResolution = cameraResolution
        self.pipelineRunning = pipelineRunning
        self.selectedCamera = selectedCamera
        self.saveImage = saveImage
        self.saveClassifiedImage = saveClassifiedImage
        self.pipeline = pipeline
        self.chooseCamera = chooseCamera
        self.networkTop = networkTop
        self.networkBottom = networkBottom
        self.streamingSource = streamingSource
        self.imageInput = imageInput
        self.jpegStreamQuality = jpegStreamQuality
        self.jpegStreamStride = jpegStreamStride
        self.frameRate = frameRate
        self.runPipelineOnce = runPipelineOnce
        self.frameNumber = frameNumber
        self.colourCalibration = withUnsafePointer(to: &colourCalibration) {
            $0.withMemoryRebound(to: type(of: wb_vision_control_status().colourCalibration), capacity: 1) {
                $0.pointee
            }
        }
    }

}

extension wb_vision_control_status: CustomStringConvertible {

    /**
     * Convert to a description String.
     */
    public var description: String {
        var descString = ""
        descString += "cameraResolution=\(self.cameraResolution.rawValue)"
        descString += ", "
        descString += "pipelineRunning=\(self.pipelineRunning)"
        descString += ", "
        descString += "selectedCamera=\(self.selectedCamera.rawValue)"
        descString += ", "
        descString += "saveImage=\(self.saveImage.rawValue)"
        descString += ", "
        descString += "saveClassifiedImage=\(self.saveClassifiedImage)"
        descString += ", "
        descString += "pipeline=\(self.pipeline.rawValue)"
        descString += ", "
        descString += "chooseCamera=\(self.chooseCamera)"
        descString += ", "
        descString += "networkTop=\(self.networkTop.rawValue)"
        descString += ", "
        descString += "networkBottom=\(self.networkBottom.rawValue)"
        descString += ", "
        descString += "streamingSource=\(self.streamingSource.rawValue)"
        descString += ", "
        descString += "imageInput=\(self.imageInput)"
        descString += ", "
        descString += "jpegStreamQuality=\(self.jpegStreamQuality)"
        descString += ", "
        descString += "jpegStreamStride=\(self.jpegStreamStride)"
        descString += ", "
        descString += "frameRate=\(self.frameRate)"
        descString += ", "
        descString += "runPipelineOnce=\(self.runPipelineOnce)"
        descString += ", "
        descString += "frameNumber=\(self.frameNumber)"
        descString += ", "
        descString += "colourCalibration=\(self._colourCalibration)"
        return descString
    }

}

extension wb_vision_control_status: Equatable {}

public func == (lhs: wb_vision_control_status, rhs: wb_vision_control_status) -> Bool {
    return lhs.cameraResolution == rhs.cameraResolution
        && lhs.pipelineRunning == rhs.pipelineRunning
        && lhs.selectedCamera == rhs.selectedCamera
        && lhs.saveImage == rhs.saveImage
        && lhs.saveClassifiedImage == rhs.saveClassifiedImage
        && lhs.pipeline == rhs.pipeline
        && lhs.chooseCamera == rhs.chooseCamera
        && lhs.networkTop == rhs.networkTop
        && lhs.networkBottom == rhs.networkBottom
        && lhs.streamingSource == rhs.streamingSource
        && lhs.imageInput == rhs.imageInput
        && lhs.jpegStreamQuality == rhs.jpegStreamQuality
        && lhs.jpegStreamStride == rhs.jpegStreamStride
        && lhs.frameRate == rhs.frameRate
        && lhs.runPipelineOnce == rhs.runPipelineOnce
        && lhs.frameNumber == rhs.frameNumber
        && lhs._colourCalibration == rhs._colourCalibration
}
