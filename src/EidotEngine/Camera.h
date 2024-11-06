#pragma once

/// Includes /////////
#include "Vectors.h"
/// //////////////////
#include <iostream>
#include <vector>
/// //////////////////


namespace ei {

	/////////////////////////////////
	/// Camera                         
	/// position camera - Vector3f(x, y, z)
	/// direction camera - Vector2i(x, y)
	/// point0 - Vector2f(x, y)
	/// point1 - Vector2f(x, y)
	/// point2 - Vector2f(x, y)
	/// point3 - Vector2f(x, y)
	/// view - unsigned int 
	/// speed - float
	class Camera {
	private:
		Vector3f _position_camera;
		Vector2i _direction_camera;
		Vector2f _point0;
		Vector2f _point1;
		Vector2f _point2;
		Vector2f _point3;
		unsigned int _view = 110;
		float _speed = 1.f;
		
		void UPDATE__POINTS();

	public:

		/////////////////////////////
		/// Constructors

		Camera() = default;
	
		/////////////////////////////
		/// Function

		void setPosition(Vector3f position);
		Vector3f getPosition() const;

		void setDirection(Vector2i direction);
		Vector2i getDirection() const;

		void outInformation() const;

	};


}