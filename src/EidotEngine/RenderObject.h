#pragma once

/// Includes /////////
#include "GraphicObject.h"
/// //////////////////
#include <iostream>
#include <vector>
#include <string>
/// //////////////////

namespace ei {

	/////////////////////////////////
	/// GraphicRenderObject
	/// name - std::string                       
	/// points - std::vector(Vector2f(x, y))
	/// color - Color(r, g, b, a)
	/// count_trilangls - unsigned int
	/// origin - Vector2f(x, y)
	/// rotate - unsigned int
	/// scale - float
	class GraphicRenderObject {
	private:
		std::string _name;
		std::vector<Vector2f> _points;
		Color _color;
		unsigned int _count_trilangls = 0;
		Vector2f _origin;
		unsigned int _rotate = 0;
		float _scale = 1.f;

	public:

		/////////////////////////////
		/// Constructors
		
		GraphicRenderObject() = default;

		/////////////////////////////
		/// Function
		
		void generateGraphicRenderObject(
			std::string name,
			DefaultTrilangleGraphicObject dtgo
		);

		void setOrigin(Vector2f origin);
		Vector2f getOrigin() const;

		void setRotate(unsigned int rotate);
		unsigned int getRotate() const;

		void setScale(float scale);
		float getScale() const;

		void outInformation() const;

	};


}