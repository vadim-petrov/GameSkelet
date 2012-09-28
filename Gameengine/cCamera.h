/**
 *  File: cCamera.h
 *  Project: Kore-Engine
 *
 *  Description: This file contains defination of a camera
 *
 *  Created by Sean Chapel on 1/21/06.
 *  Copyright 2006 Seoushi Games. All rights reserved.
 *
 */

#ifndef CAMERA
#define CAMERA

#include "globals.h"

namespace Kore{
	///
	/// The camera handles what the view is looking at
	///
	class cCamera{
		public:
			/// Default Constructor
			cCamera();
			/// Default Destructor
			~cCamera();
	
			/// Moves the camera by x and y units
			void Move(float x, float y);
			/// Sets the absolute position of the camera
			void SetPosition(float x, float y);
	
			/// Returns the x cooridinate of the camera
			float GetXposition();
			/// Returns the y  cooridinate of the camera
			float GetYposition();
		private:
			float m_Xpos;		/**< The x position of the camera 	*/
			float m_Ypos;		/**< The y position of the camera 	*/
	};
}

#endif
