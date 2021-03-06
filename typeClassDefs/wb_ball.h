#ifndef WBBALL_
#define WBBALL_

#include <sys/types.h>
#include <gu_util.h>

/**
 * Whiteboard data structure for a ball sighting
 */
struct wb_ball
{
	/** the balls x coordinate in pixels, relative to the center of the image,
         * imageWidth/2 is 0, left is negative, right is positive */
	PROPERTY(int16_t, x)
	/** the balls y coordinate in pixels, relative to the center of the image, 
         * imageHeight/2 is 0, up is negative, down is positive */
        PROPERTY(int16_t, y)
	/** the balls radius in pixels */
        PROPERTY(int16_t, radius)

#ifdef __cplusplus
	/** default constructor */
	wb_ball() : _x(0), _y(0), _radius(0) {}
#endif
};

#endif
