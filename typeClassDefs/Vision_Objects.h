/*
 * VisionObjects.h
 *
 *  Created on: 23/04/2013
 *      Author: eugene
 */

#include <bitset>
#include <gu_util.h>
#include <../guvision/SimpleShapes.h>
#include <stdint.h>
#include <sstream>
#include <stdio.h>
#include <string>
#include <algorithm>


#ifndef VisionObjects_DEFINED
#define VisionObjects_DEFINED

struct WbBallInfo {
	uint16_t radius;
	GUPoint<int16_t> position;
};

struct WbGoalPostInfo {
	GUPoint<int16_t> outerBottom;
	GUPoint<int16_t> outerTop;

	GUPoint<int16_t> innerBottom;
	GUPoint<int16_t> innerTop;
};

struct WbLineInfo {
	uint16_t startX, startY, endX, endY;
};


namespace VisionObjectTypes {enum object {
	Ball = 0,
	LeftGoalPost,
	RightGoalPost,
	Line1,
	Line2,
	Line3,
	Line4,
	Line5,
	NUM_VISION_OBJECTS
};}

static const char* Objects[] = {"BALL", "LEFTGOAL", "RIGHTGOAL", "LINE1", "LINE2", "LINE3", "LINE4", "LINE5"};
namespace guWhiteboard
{
class VisionObjects {
private:
	std::bitset<VisionObjectTypes::NUM_VISION_OBJECTS> objectMask;
	WbLineInfo _lines[5];
	WbBallInfo _ball;
	WbGoalPostInfo _leftGoalPost;
	WbGoalPostInfo _rightGoalPost;
        unsigned long frameNumber;
public:
	VisionObjects() {
		memset(this, 0, sizeof(*this));
	}
        
private:
        GUPoint<int16_t> getPoint(std::string *str) {
            GUPoint<int16_t> point;
            point.x = (short)atoi(str->substr(1, str->find(",")-1).c_str());
            int pointEnd = (int)str->find(")")-1;
            point.y = (short)atoi(str->substr(str->find(",")+1, pointEnd).c_str());
            pointEnd += 2;
            *str = str->substr(pointEnd, str->length()-pointEnd);
            return point;
        }
public:
        VisionObjects(std::string s) {
		memset(this, 0, sizeof(*this));
		size_t n;
		std::string command;
		std::transform(s.begin(), s.end(), s.begin(), ::toupper);
		for (unsigned i = 0; i<VisionObjectTypes::NUM_VISION_OBJECTS; ++i) {
			command = std::string(Objects[i]);
			n = s.find(command);
			if (n!=std::string::npos) {
                                std::string t = s.substr(n+command.length()+1);
                                WbGoalPostInfo goalInfo;
				WbBallInfo ballInfo;
                                switch(i) {
                                    case VisionObjectTypes::LeftGoalPost://formate of LeftGoal=(9,9)(9,9)(9,9)(9,9)
                                        goalInfo.outerBottom = getPoint(&t);
                                        goalInfo.outerTop = getPoint(&t);
                                        goalInfo.innerBottom = getPoint(&t);
                                        goalInfo.innerTop = getPoint(&t);
                                        setLeftGoalPost(goalInfo);
                                        break;
                                    case VisionObjectTypes::RightGoalPost:
                                        goalInfo.outerBottom = getPoint(&t);
                                        goalInfo.outerTop = getPoint(&t);
                                        goalInfo.innerBottom = getPoint(&t);
                                        goalInfo.innerTop = getPoint(&t);
                                        setRightGoalPost(goalInfo);
                                        break;
				    case VisionObjectTypes::Ball: //formate of Ball=(x,y)@r
					ballInfo.position = getPoint(&t);
					ballInfo.radius = short(atoi(t.substr(1, t.substr(1, t.size()-2).find_first_not_of("-0123456789")).c_str()));
					setBall(ballInfo);
					break;
                                }
                        }
                }
        }
        
	void setBall(WbBallInfo ballInfo) {
		_ball = ballInfo;
		objectMask[VisionObjectTypes::Ball]  = 1;
	}
	WbBallInfo* ball() {
		if(objectMask[VisionObjectTypes::Ball])
			return &_ball;
		return NULL;
	}
	void setLeftGoalPost(WbGoalPostInfo postInfo) {
		_leftGoalPost = postInfo;
		objectMask[VisionObjectTypes::LeftGoalPost]  = 1;
	}
	WbGoalPostInfo* LeftGoalPost() {
		if(objectMask[VisionObjectTypes::LeftGoalPost])
			return &_leftGoalPost;
		return NULL;
	}

	void setRightGoalPost(WbGoalPostInfo postInfo) {
		_rightGoalPost = postInfo;
		objectMask[VisionObjectTypes::RightGoalPost]  = 1;
	}
	WbGoalPostInfo* RightGoalPost() {
		if(objectMask[VisionObjectTypes::RightGoalPost])
			return &_rightGoalPost;
		return NULL;
	}

	void addLine(WbLineInfo line) {
		for(int i = VisionObjectTypes::Line1; i<VisionObjectTypes::Line5; ++i) {
			if(objectMask[i] == 0) {
				_lines[i-VisionObjectTypes::Line1] = line;
				objectMask[i] = 1;
				break;
			}
		}
	}

	WbLineInfo* Line(VisionObjectTypes::object line) {
		if(line >= VisionObjectTypes::Line1 && line <= VisionObjectTypes::Line5)
			if(objectMask[line])
				return & _lines[line - VisionObjectTypes::Line1];
		return NULL;
	}
        void setFrameNumber(unsigned long fn) {
            frameNumber = fn;
        }
        
        unsigned long FrameNumer() {
            return frameNumber;
        }


	void ClearMask() {
		objectMask.reset();
	}
#ifdef WHITEBOARD_POSTER_STRING_CONVERSION
	std::string description() {
		std::stringstream result;
		if(objectMask[VisionObjectTypes::Ball]) {
			result << "Ball:(" << ball()->position.x << "," << ball()->position.y << "," << ball()->radius << ") ";
		}
		if(objectMask[VisionObjectTypes::LeftGoalPost])
			result << "LeftGoalPost:(" << _leftGoalPost.outerBottom.x << "," << _leftGoalPost.outerBottom.y << ","
			<< _leftGoalPost.outerTop.x << "," << _leftGoalPost.outerTop.y << ","
			<< _leftGoalPost.innerBottom.x << "," << _leftGoalPost.innerBottom.y << ","
			<< _leftGoalPost.innerTop.x << "," << _leftGoalPost.innerTop.y << ") ";
		if(objectMask[VisionObjectTypes::RightGoalPost])
			result << "RightGoalPost:(" << _rightGoalPost.outerBottom.x << "," << _rightGoalPost.outerBottom.y << ","
			<< _rightGoalPost.outerTop.x << "," << _rightGoalPost.outerTop.y << ","
			<< _rightGoalPost.innerBottom.x << "," << _rightGoalPost.innerBottom.y << ","
			<< _rightGoalPost.innerTop.x << "," << _rightGoalPost.innerTop.y << ") ";
		for(int i = VisionObjectTypes::Line1; i<=VisionObjectTypes::Line5; ++i)
			if(objectMask[i])
				result << "Line" << (i-VisionObjectTypes::Line1+1) << "(" << _lines[i-VisionObjectTypes::Line1].startX
				<< "," << _lines[i-VisionObjectTypes::Line1].startY
				<< "," << _lines[i-VisionObjectTypes::Line1].endX
				<< "," << _lines[i-VisionObjectTypes::Line1].endY << ") ";
                result << "FrameNumber=" << frameNumber;
		return result.str();
	}
#endif
};
}



#endif /* VisionObjects_DEFINED */
