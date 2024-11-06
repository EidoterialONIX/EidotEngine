#include "EidotEngine/Vectors.h"
#include "EidotEngine/Color.h"
#include "EidotEngine/Surface.h"
#include "EidotEngine/GraphicObject.h"
#include "EidotEngine/RenderObject.h"
#include "EidotEngine/Camera.h"
#include "EidotEngine/Scena.h"


int main() {
	
	
	ei::Scena __scena__;

	__scena__.createScenaUnit(
		"Scena0",
		ei::Vector3f(100.f, 100.f, 300.f),
		ei::Vector2i(0, 0),
		110
	);

	ei::DefaultTrilangleGraphicObject dtgo;

	for (int i{ 0 }; i < 10; i++) {

		dtgo.setDefaultTrilangleGraphicObject(
			ei::Vector2f(100.f * i, 100.f * i),
			ei::Color(),
			10.f
		);

		__scena__.takeScenaUnit("Scena0").addGraphicRenderObject(
			"Trilangle" + std::to_string(i),
			dtgo
		);

	}

	__scena__.takeScenaUnit("Scena0").takeGraphicRenderObject("Trilangle0").outInformation();

	return 0;
}