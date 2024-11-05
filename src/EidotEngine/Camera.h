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
	/// size camera - Vector2f(x, y)
	/// direction camera - Vector3f(x, y, z)
	/// point0 - Vector2f(x, y)
	/// point1 - Vector2f(x, y)
	/// point2 - Vector2f(x, y)
	/// point3 - Vector2f(x, y)
	/// rotate - unsigned int
	/// speed - float
	class Camera {
	private:
		Vector3f _position_camera;
		Vector2f _size_camera;
		Vector2f _direction_camera;
		Vector2f _point0;
		Vector2f _point1;
		Vector2f _point2;
		Vector2f _point3;
		unsigned int _rotate = 0;
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

		void setSize(Vector2f size);
		Vector2f getSize() const;

		void setDirection(Vector2f direction);
		Vector2f getDirection() const;

		void outInformation() const;



	};


}