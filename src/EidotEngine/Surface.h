#pragma once

/// Includes /////////
#include "Vectors.h"
/// //////////////////
#include <iostream>
#include <vector>
/// //////////////////


namespace ei {

	/////////////////////////////////
	/// TrilangleSurface                         
	/// point0 - Vector2f(0.0f, 0.0f)
	/// point1 - Vector2f(0.0f, 0.0f) 
	/// point2 - Vector2f(0.0f, 0.0f)
	class TrilangleSurface {
	private:
		Vector2f _point0;
		Vector2f _point1;
		Vector2f _point2;

	public:

		/////////////////////////////
		/// Constructors

		TrilangleSurface() = default;
		TrilangleSurface(
			Vector2f point0,
			Vector2f point1,
			Vector2f point2
		);
		TrilangleSurface(
			Vector2f position,
			Vector2f radius
		);

		/////////////////////////////
		/// Function

		void setTrilangleSurface(
			Vector2f point0,
			Vector2f point1,
			Vector2f point2
		);

		void generateTrilangleSurface(
			Vector2f position,
			Vector2f radius
		);

		std::vector<Vector2f> getTrilangleSurfacePoints() const;

		void outInformation() const;

	};


}