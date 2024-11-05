#include "EidotEngine/Vectors.h"
#include "EidotEngine/Color.h"
#include "EidotEngine/Surface.h"
#include "EidotEngine/GraphicObject.h"
#include "EidotEngine/RenderObject.h"


int main() {
	
	ei::DefaultTrilangleGraphicObject dtgo;

	dtgo.setDefaultTrilangleGraphicObject(
		ei::Vector2f(100.f, 40.f),
		ei::Color(),
		10
	);

	dtgo.setRadius(100);
	dtgo.setColor(ei::Color(255, 45, 67, 9));

	ei::GraphicRenderObject gro;

	gro.generateGraphicRenderObject(
		"Object1",
		dtgo
	);

	gro.outInformation();

	return 0;
}