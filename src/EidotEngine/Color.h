#pragma once

/// Includes /////////
#include <iostream>
#include <vector>
/// //////////////////


namespace ei {

	/////////////////////////////////
	/// Color
	/// R   G   B   A
	/// 0   0   0   0	 
	class Color {
	private:
		float _r = 0.f;
		float _g = 0.f;
		float _b = 0.f;
		float _a = 0.f;

	public:

		/////////////////////////////
		/// Constructors

		Color() = default;
		Color(
			unsigned int r,
			unsigned int g,
			unsigned int b,
			unsigned int s
		);

		/////////////////////////////
		/// Function

		void setColor(
			unsigned int r,
			unsigned int g,
			unsigned int b,
			unsigned int s
		);

		std::vector<float> getColor() const;

		void outInformation() const;

	};

}