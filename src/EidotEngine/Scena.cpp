/// Includes /////////
#include "Scena.h"
/// //////////////////


/////////////////////////////////////////////////////
/// ScenaUnit

void ei::ScenaUnit::setScenaUnit(
	std::string name,
	Vector3f position,
	Vector2i direction,
	unsigned int view
) {
	this->_name = name;

	this->_scena_camera.position = position;
	this->_scena_camera.direction = direction;
	this->_scena_camera.view = view;

}

void ei::ScenaUnit::addGraphicRenderObject(
	std::string name,
	DefaultTrilangleGraphicObject dtgo
) {
	this->_graphic_render_objects.resize(this->_graphic_render_objects.size() + 1);
	this->_graphic_render_objects[this->_graphic_render_objects.size() - 1].generateGraphicRenderObject(
		name,
		dtgo
	);

}

ei::GraphicRenderObject& ei::ScenaUnit::takeGraphicRenderObject(std::string name) {
	for (int i{ 0 }; i < this->_graphic_render_objects.size(); i++) {
		if (this->_graphic_render_objects[i].getName() == name) return this->_graphic_render_objects[i];
	}

	std::cout << "ERROR NAME: DON'T FIND GRAPHIC__RENDER__OBJECT -- " << name << std::endl;
	return GraphicRenderObject();

}

std::string ei::ScenaUnit::getName() const {
	return this->_name;

}

void ei::ScenaUnit::outInformation() const {
	using namespace std;

	cout
		<< "Name scena: " << this->_name << endl
		<< "Camera scena" << endl
		<< "Position camera: "
		<< "(X: " << this->_scena_camera.position.x << ", Y: " << this->_scena_camera.position.y
		<< ", Z: " << this->_scena_camera.position.z << ")" << endl
		<< "Direction camera: "
		<< "(X: " << this->_scena_camera.direction.x << ", Y: " << this->_scena_camera.direction.y << ")" << endl
		<< "View camera: " << this->_scena_camera.view << endl
		<< "GraphicRenderObject: " << endl
		;
	for (int i{ 0 }; i < this->_graphic_render_objects.size(); i++) {
		cout
			<< "Name graphic__render__object: " << this->_graphic_render_objects[i].getName()
			<< endl
			;
	}

}


/////////////////////////////////////////////////////
/// Scena

void ei::Scena::createScenaUnit(
	std::string name,
	Vector3f position,
	Vector2i direction,
	unsigned int view
) {
	this->_scena_units.resize(this->_scena_units.size() + 1);
	this->_scena_units[this->_scena_units.size() - 1].setScenaUnit(
		name,
		position,
		direction,
		view
	);

}

ei::ScenaUnit& ei::Scena::takeScenaUnit(std::string name) {
	for (int i{ 0 }; i < this->_scena_units.size(); i++) {
		if (this->_scena_units[i].getName() == name) return this->_scena_units[i];
	}

	std::cout << "ERROR NAME: DON'T FIND SCENA__UNIT -- " << name << std::endl;
	return ScenaUnit();

}

void ei::Scena::outInformation() const {
	using namespace std;

	for (int i{ 0 }; i < this->_scena_units.size(); i++) {
		cout
			<< "Name scena__unit: " << this->_scena_units[i].getName()
			<< endl
			;
	}

}