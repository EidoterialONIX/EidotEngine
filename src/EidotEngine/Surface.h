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
			float radius
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
			float radius
		);

		std::vector<Vector2f> getTrilangleSurfacePoints() const;

		void outInformation() const;

	};

	/////////////////////////////////
	/// RectangleSurface                         
	/// point0 - Vector2f(0.0f, 0.0f)
	/// point1 - Vector2f(0.0f, 0.0f) 
	/// point2 - Vector2f(0.0f, 0.0f)
	/// point3 - Vector2f(0.0f, 0.0f)
	class RectangleSurface {
	private:
		Vector2f _point0;
		Vector2f _point1;
		Vector2f _point2;
		Vector2f _point3;

	public:

		/////////////////////////////
		/// Constructors

		RectangleSurface() = default;
		RectangleSurface(
			Vector2f position,
			Vector2f size
		);

		/////////////////////////////
		/// Function

		void setRectangleSurface(
			Vector2f position,
			Vector2f size
		);

		std::vector<Vector2f> getRectangleSurfacePoints() const;

		void outInformation() const;

	};

	/////////////////////////////////
	/// PoligonSurface                         
	/// points - std::vector(Vector2f)
	class PoligonSurface {
	private:
		std::vector<Vector2f> _points;

	public:

		/////////////////////////////
		/// Constructors
		PoligonSurface() = default;
		PoligonSurface(
			Vector2f position,
			float radius,
			unsigned int count_points
		);
		PoligonSurface(
			std::vector<Vector2f> points
		);

		/////////////////////////////
		/// Function

		void generatePoligonSurface(
			Vector2f position,
			float radius,
			unsigned int count_points
		);

		void setPoligonSurface(
			std::vector<Vector2f> points
		);

		std::vector<Vector2f> getPoligonSurfacePoints() const;

		void outInformation() const;

	};
}