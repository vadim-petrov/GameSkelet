/**
 *  File: GraphicTypes.h
 *  Project: Kore-Engine
 *
 *  Description: This file contains basic structures used for graphic
 *		 operations
 *
 *  Created by Sean Chapel on 1/21/06.
 *  Copyright 2006 Seoushi Games. All rights reserved.
 *
 */

#ifndef GTYPES
#define GTYPES

#include "globals.h"

namespace Kore{
	///
	///Defines a Point with coordinates x and y
	///
	struct sPoint{
		float x;	/**< The X coordinate */
		float y;	/**< The Y coordinate */
	};
	
	///
	///A basic rectangle structure
	///
	struct sRect{
		float Top; 	/**< The top most point on the rectangle 	*/
		float Right; 	/**< The right most point on the rectangle 	*/
		float Bottom; /**< the bottom most point on the rectangle 	*/
		float Left; 	/**< The left most point on the rectangle 	*/
	};
}

#endif
