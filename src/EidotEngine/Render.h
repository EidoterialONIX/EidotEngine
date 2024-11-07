#pragma once

/// Includes /////////
#include "Scena.h"
#include "Transform.h"
/// //////////////////
#include "glad/glad.h"
/// //////////////////
#include <iostream>
#include <vector>
/// //////////////////


namespace ei {

	class Render {
	public:

		Render() = default;

		void renderScena(Scena __scena__);


	};

}