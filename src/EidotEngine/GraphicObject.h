#pragma once

/// Includes /////////
#include "Vectors.h"
#include "Color.h"
#include "Surface.h"
/// //////////////////
#include <iostream>
#include <vector>
/// //////////////////


namespace ei {

	/////////////////////////////////
	/// DefaultTrilangleGraphicObject                         
	/// position - Vector(x, y)
	/// color - Color(r, g, b, a)
	/// radius - float
	class DefaultTrilangleGraphicObject : TrilangleSurface{
	private:
		Color _color_graphic_object;
		Vector2f _position_graphic_object;
		float _radius_graphic_object = 0.f;

	public:

		/////////////////////////////
		/// Constructors

		DefaultTrilangleGraphicObject() = default;
		DefaultTrilangleGraphicObject(
			Vector2f position,
			Color color,
			float radius
		);

		/////////////////////////////
		/// Function
	
		void setDefaultTrilangleGraphicObject(
			Vector2f position,
			Color color,
			float radius
		);

		std::vector<Vector2f> getDefaultTrilangleGraphicObjectPoints() const;

		void setPosition(Vector2f position);
		Vector2f getPosition() const;

		void setColor(Color color);
		Color getColor() const;

		void setRadius(float radius);
		float getRadius() const;

		void outInformation() const;

	};

}