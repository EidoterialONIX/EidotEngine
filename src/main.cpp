#include "EidotEngine/Vectors.h"
#include "EidotEngine/Color.h"
#include "EidotEngine/Surface.h"
#include "EidotEngine/GraphicObject.h"
#include "EidotEngine/RenderObject.h"
#include "EidotEngine/Camera.h"


int main() {
	
	ei::Camera camera;

	camera.setPosition(
		ei::Vector3f(200.f, 200.f, 1.5f)
	);
	camera.setSize(
		ei::Vector2f(700.f, 200.f)
	);
	camera.setDirection(
		ei::Vector2f(0.f, 0.f)
	);

	camera.outInformation();

	return 0;
}