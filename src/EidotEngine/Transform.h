#pragma once

/// Includes /////////
#include "Vectors.h"
/// //////////////////
#include <iostream>
#include <vector>
#include <string>
/// //////////////////


namespace ei {

	class Transform {
	public:

		/////////////////////////////
		/// Constructors
	
		Transform() = default;

		/////////////////////////////
		/// Function

		void transformCORDINAT(
			std::vector<Vector2f>& points,
			Vector2f screen_size
		);
		
		void transformSCALE(
			std::vector<Vector2f>& points,
			float scale
		);

		void transformROTATE(
			std::vector<Vector2f>& points,
			float rotate
		);

	};

}
