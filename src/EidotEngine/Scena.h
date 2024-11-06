#pragma once

/// Includes /////////
#include "Camera.h"
#include "RenderObject.h"
/// //////////////////
#include <iostream>
#include <vector>
/// //////////////////


namespace ei {

	struct ScenaCamera {
		Vector3f position;
		Vector2i direction;
		unsigned int view;

	};

	class ScenaUnit {
	private:
		std::string _name;
		std::vector<GraphicRenderObject> _graphic_render_objects;
		ScenaCamera _scena_camera;

	public:

		/////////////////////////////
		/// Constructors
		ScenaUnit() = default;

		/////////////////////////////
		/// Function

		void setScenaUnit(
			std::string name,
			Vector3f position,
			Vector2i direction,
			unsigned int view
		);

		void addGraphicRenderObject(
			std::string name,
			DefaultTrilangleGraphicObject dtgo
		);

		std::string getName() const;

		GraphicRenderObject& takeGraphicRenderObject(std::string);

		void outInformation() const;

	};


	class Scena {
	private:
		Camera _camera;
		std::vector<ScenaUnit> _scena_units;

	public:

		/////////////////////////////
		/// Constructors
		Scena() = default;

		/////////////////////////////
		/// Function

		void createScenaUnit(
			std::string name,
			Vector3f position,
			Vector2i direction,
			unsigned int view
		);

		ScenaUnit& takeScenaUnit(std::string);

		void outInformation() const;

	};

}