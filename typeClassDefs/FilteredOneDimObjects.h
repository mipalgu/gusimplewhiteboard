/*
 *  FilteredKalmanObject.h
 *  gusimplewhiteboard / clfsm
 *
 *  Created by Rene Hexel on 25/03/13.
 *  Copyright (c) 2013 Rene Hexel. All rights reserved.
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
 *        This product includes software developed by Rene Hexel.
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
#ifndef FilteredOneDimObjects_DEFINED
#define FilteredOneDimObjects_DEFINED
#define FilteredVisionObject_DEFINED
#define FilteredSonarObject_DEFINED
#define FilteredSonarObjects_DEFINED

#include <cstdlib>
#include <sstream>
#include <gu_util.h>

namespace guWhiteboard
{
        /**
         * Discriminate sigthings 
         */
        enum FilteredVisionObjectType
        {
            FVOGoalPost,          ///< Filtered informaiton for a post we cannot tell is Left or right
            FVOGoalPostLeft,          ///< Filtered informaiton for a post we know is Left 
            FVOGoalPostRight,          ///< Filtered informaiton for a post we know is right 
            FVOGoalCrossBar,          ///< Filtered informaiton for the Ball
            FVO_NUM_OBJECTS          ///< number of different kind of objects
        };


        enum FilteredSonarObjectType
        {
	    FSLeft,
	    FSRight,
            FSO_NUM_OBJECTS          ///< number of different kind SONAR of objects
        };


        /**
         * Class for a single Sonar sigthing.
         */
        class FilteredSonarObject
        {
            PROPERTY(bool, isVisible) //  is this a credible sighting
            PROPERTY(int16_t, distance) //  distance to landmark in cm
            PROPERTY(int32_t, frameCounter) //  frame counter in cm

        public:
            /** designated constructor */
            FilteredSonarObject( bool isVisible = false,
                                       int16_t distance =0,
				       int32_t frameCounter =0
				       ):
                                      _isVisible(isVisible), 
                                      _distance(distance), 
                                      _frameCounter(frameCounter)
                                         { /*  */ }

            /** string constructor */
            FilteredSonarObject(const std::string &names) { from_string(names); }

            /** copy constructor */
            FilteredSonarObject(const FilteredSonarObject &other):
                      _isVisible(other._isVisible),
                      _distance(other._distance),
                      _frameCounter(other._frameCounter)
                       {}

            /** convert to a string */
            std::string description() const
            {
                std::ostringstream ss;

		if ( isVisible())
                { ss<<" is visible at distance " << distance() <<  " "; }
		else ss << " is NOT visible ";

		ss << " at frame  " << frameCounter();
                return ss.str();
            }

	    //*** TODO: still incomplete */
            void from_string(const std::string &str)
            {
                std::istringstream iss(str);
            }

        };


        /**
         * Class for a single Vision sigthing.
         */
        class FilteredVisionObject
        {
            PROPERTY(bool, isVisible) //  is this a credible sighting
            PROPERTY(int16_t, distance) //  distance to landmark in cm
            PROPERTY(int32_t, frameCounter) //  frame counter in cm
            PROPERTY(int16_t, x) //  center x-coordinate in image
            PROPERTY(int16_t, y) //  cneter y-coordinate in image
            PROPERTY(int16_t, yaw) //  the Yaw in Degress when the object was alst used to generated filtered values

        public:
            /** designated constructor */
            FilteredVisionObject( bool isVisible = false,
                                       int16_t distance =0,
				       int32_t frameCounter =0,
                                       int16_t x = 0,
				       int16_t y = 0,
				       int16_t yaw=0):
                                      _isVisible(isVisible), 
                                      _distance(distance), 
                                      _frameCounter(frameCounter), 
                                       _x(x), _y(y), _yaw(yaw)  { /* better than set_x(x); set_y(y) */ }

            /** string constructor */
            FilteredVisionObject(const std::string &names) { from_string(names); }

            /** copy constructor */
            FilteredVisionObject(const FilteredVisionObject &other):
                      _isVisible(other._isVisible),
                      _distance(other._distance),
                      _frameCounter(other._frameCounter),
                      _x(other._x), _y(other._y), _yaw(other._yaw) {}

            /** convert to a string */
            std::string description() const
            {
                std::ostringstream ss;

		if ( isVisible())
                { ss<<"Visible ";
		  ss << "dist=" << distance() << " ("  <<  x() << "," << y() << "," << yaw() << ")";
		}
		//else ss << "NOT visible "; ss << " at frame  " << frameCounter();

                return ss.str();
            }

            /** Only grab the distance x,y positions convert from a string */
	    //*** TODO: still incomplete */
            void from_string(const std::string &str)
            {
                std::istringstream iss(str);
                std::string token;
                if (getline(iss, token, ','))
                {
		    set_x(  int16_t(atoi(token.c_str())));
		    set_y(0);
                    if (getline(iss, token, ','))
                    {
		        set_y(int16_t(atoi(token.c_str())));
                    }
                }
            }

        };

	/**
	 * Filtered vision objects on the whiteboard
	 */
        class FilteredOneDimObjects
	{
	class FilteredVisionObject     _objects[FVO_NUM_OBJECTS];

        public:
	    FilteredOneDimObjects()
	    {}

	    /** single vision object setter */
	    FilteredOneDimObjects(const class FilteredVisionObject &obj, enum FilteredVisionObjectType landmarkType  = FVOGoalPost)
	    {
		    /*
		for ( int i =FVOGoalPost; i< FO_NUM_OBJECTS; i++ )
		{ FilteredVisionObjectType iThLandmarkType = FilteredVisionObjectType(i);
		}
			*/
		_objects[landmarkType]=obj;
	    }

            /** string constructor */
            FilteredOneDimObjects(const std::string &names) { from_string(names); }

            /** copy constructor */
            FilteredOneDimObjects(const FilteredOneDimObjects &other)
	    {
		    memcpy(this, &other, sizeof(other));
	    }

	    /** property getter */
	    class FilteredVisionObject *objects() { return _objects; }

	    /** property setter */
	    void set_objects(const class FilteredVisionObject *objects)
	    {
		    memcpy(_objects, objects, sizeof(_objects));
	    }

	    /** single vision object setter */
	    void set_object(const class FilteredVisionObject &obj, enum FilteredVisionObjectType landmarkType  = FVOGoalPost)
	    {
		_objects[landmarkType]=obj;
	    }

	    /** single vision object setter */
	    FilteredVisionObject &get_object( enum FilteredVisionObjectType landmarkType  = FVOGoalPost)
	    {
		return _objects[landmarkType];
	    }

                /** single vision object getter */
                const FilteredVisionObject &get_object( enum FilteredVisionObjectType landmarkType  = FVOGoalPost) const
                {
                        return _objects[landmarkType];
                }
                
            /** convert to a string */
            std::string description() const
            {
                std::ostringstream ss;
		for ( int i =FVOGoalPost; i< FVO_NUM_OBJECTS; i++ )
		{ 
			FilteredVisionObjectType landmarkType = FilteredVisionObjectType(i);
		  switch (landmarkType )
		   {
		    case FVOGoalPost : ss << "aGoalPost:";
			break;
		    case FVOGoalPostLeft : ss << "aLeftGoalPost:";
			break;
		    case FVOGoalPostRight : ss << "aRightGoalPost:";
			break;
		    case FVOGoalCrossBar : ss << "aCrossBar:";
			break;
		    case FVO_NUM_OBJECTS : mipal_warn( "ERROR:");
			break;
		  }// switch
		  ss <<_objects[landmarkType].description();
                        if (i < FVO_NUM_OBJECTS-1)
                                ss << ", ";
		} //for
                return ss.str();
	  }

	    /*
	     * TODO, this is only for the BALL, the axiom from_string() is inverse of description() 
	     * NOT WORKING
	     */
            void from_string(const std::string &str)
            {
		  _objects[FVOGoalPost].from_string( str );
            }

	};


	/**
	 * Filtered sonar objects on the whiteboard
	 */
        class FilteredSonarObjects
	{
	class FilteredSonarObject     _objects[FSO_NUM_OBJECTS];

        public:
	    FilteredSonarObjects()
	    {}

	    /** constructor with one setter */
	    FilteredSonarObjects(const class FilteredSonarObject &obj, enum FilteredSonarObjectType landmarkType  = FSLeft)
	    {
		_objects[landmarkType]=obj;
	    }

            /** string constructor */
            FilteredSonarObjects(const std::string &names) { from_string(names); }

            /** copy constructor */
            FilteredSonarObjects(const FilteredSonarObjects &other)
	    {
		    memcpy(this, &other, sizeof(other));
	    }

	    /** property getter */
	    class FilteredSonarObject *objects() { return _objects; }

	    /** property setter */
	    void set_objects(const class FilteredSonarObject *objects)
	    {
		    memcpy(_objects, objects, sizeof(_objects));
	    }

	    /** single vision object setter */
	    void set_object(const class FilteredSonarObject &obj, enum FilteredSonarObjectType landmarkType  = FSLeft)
	    {
		_objects[landmarkType]=obj;
	    }

	    /** single vision object setter */
	    FilteredSonarObject  get_object( enum FilteredSonarObjectType landmarkType  = FSLeft)
	    {
		return _objects[landmarkType];
	    }

            /** convert to a string */
            std::string description()
            {
                std::ostringstream ss;
		for ( int i =FSLeft; i< FSO_NUM_OBJECTS; i++ )
		{ 
			FilteredSonarObjectType landmarkType = FilteredSonarObjectType(i);
		  switch (landmarkType )
		   { 
		    case FSLeft : ss << "aLeftSonar:";
			break;
		    case FSRight : ss << "aRightSonar:";
			break;
		    case FSO_NUM_OBJECTS : mipal_warn( "ERROR:");
			break;
		  }// switch
		  ss <<_objects[landmarkType].description();
		} //for
                return ss.str();
	  }

	    /*
	     * TODO, this is only for the BALL, the axiom from_string() is inverse of description() 
	     * NOT WORKING
	     */
            void from_string(const std::string &str)
            {
		  _objects[FVOGoalPost].from_string( str );
            }

	};
}


#endif // FilteredSonarObjects_DEFINED
