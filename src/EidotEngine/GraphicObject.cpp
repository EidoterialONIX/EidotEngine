/// Includes /////////
#include "GraphicObject.h"
/// //////////////////


/////////////////////////////////////////////////////
/// DefaultTrilangleGraphicObject

ei::DefaultTrilangleGraphicObject::DefaultTrilangleGraphicObject(
	Vector2f position,
	Color color,
	float radius
) {
	this->setDefaultTrilangleGraphicObject(
		position,
		color,
		radius
	);

}

void ei::DefaultTrilangleGraphicObject::setDefaultTrilangleGraphicObject(
	Vector2f position,
	Color color,
	float radius
) {
	this->generateTrilangleSurface(
		position,
		radius
	);

	this->_position_graphic_object = position;
	this->_color_graphic_object = color;
	this->_radius_graphic_object = radius;

}

std::vector<ei::Vector2f> ei::DefaultTrilangleGraphicObject::getDefaultTrilangleGraphicObjectPoints() const {
	return this->getTrilangleSurfacePoints();

}

void ei::DefaultTrilangleGraphicObject::setPosition(Vector2f position) {
	this->generateTrilangleSurface(
		position,
		this->_radius_graphic_object
	);

	this->_position_graphic_object = position;

}
ei::Vector2f ei::DefaultTrilangleGraphicObject::getPosition() const {
	return this->_position_graphic_object;

}

void ei::DefaultTrilangleGraphicObject::setColor(Color color) {
	this->_color_graphic_object = color;

}
ei::Color ei::DefaultTrilangleGraphicObject::getColor() const {
	return this->_color_graphic_object;

}

void ei::DefaultTrilangleGraphicObject::setRadius(float radius) {
	this->generateTrilangleSurface(
		this->_position_graphic_object,
		radius
	);

	this->_radius_graphic_object = radius;

}
float ei::DefaultTrilangleGraphicObject::getRadius() const {
	return this->_radius_graphic_object;

}

void ei::DefaultTrilangleGraphicObject::outInformation() const{
	using namespace std;

	cout
		<< "Position: "
		<< "(X: " << this->_position_graphic_object.x
		<< ", Y: " << this->_position_graphic_object.y
		<< ") Radius: " << this->_radius_graphic_object
		<< endl
		;
	this->_color_graphic_object.outInformation();

}