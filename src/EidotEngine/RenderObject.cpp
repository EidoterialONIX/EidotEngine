/// Includes /////////
#include "RenderObject.h"
/// //////////////////


/////////////////////////////////////////////////////
/// GraphicRenderObject

void ei::GraphicRenderObject::generateGraphicRenderObject(
	std::string name,
	DefaultTrilangleGraphicObject dtgo
) {
	this->_name = name;
	this->_count_trilangls = 1;

	this->_points.resize(3);
	this->_points[0] = dtgo.getDefaultTrilangleGraphicObjectPoints()[0];
	this->_points[1] = dtgo.getDefaultTrilangleGraphicObjectPoints()[1];
	this->_points[2] = dtgo.getDefaultTrilangleGraphicObjectPoints()[2];

	this->_color = dtgo.getColor();

}

void ei::GraphicRenderObject::setOrigin(Vector2f origin) {
	this->_origin = origin;

}
ei::Vector2f ei::GraphicRenderObject::getOrigin() const {
	return this->_origin;

}

void ei::GraphicRenderObject::setRotate(unsigned int rotate) {
	this->_rotate = rotate;

}
unsigned int ei::GraphicRenderObject::getRotate() const {
	return this->_rotate;

}

void ei::GraphicRenderObject::setScale(float scale) {
	this->_scale = scale;

}
float ei::GraphicRenderObject::getScale() const {
	return this->_scale;

}

void ei::GraphicRenderObject::outInformation() const {
	using namespace std;

	cout
		<< "Name: " << this->_name << " " << endl
		<< "Point0: " << "(X: " << this->_points[0].x << ", Y: " << this->_points[0].y << ") " << endl
		<< "Point1: " << "(X: " << this->_points[1].x << ", Y: " << this->_points[1].y << ") " << endl
		<< "Point2: " << "(X: " << this->_points[2].x << ", Y: " << this->_points[2].y << ") " << endl
		<< "Color: " << "(R: " << this->_color.getColor()[0] << ", G: " << this->_color.getColor()[1]
		<< ", B: " << this->_color.getColor()[2] << ", A: " << this->_color.getColor()[3] << ") " << endl
		<< "Count trilangls: " << this->_count_trilangls << endl
		<< "Origin: " << "(X: " << this->_origin.x << ", Y: " << this->_origin.y << ") " << endl
		<< "Rotate: " << this->_rotate << endl
		<< "Scale: " << this->_scale << endl
		;

}