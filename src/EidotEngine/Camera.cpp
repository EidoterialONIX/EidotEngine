/// Includes /////////
#include "Camera.h"
/// //////////////////


/////////////////////////////////////////////////////
/// Camera

void ei::Camera::UPDATE__POINTS() {
	this->_size_camera *= Vector2f(
		this->_position_camera.z,
		this->_position_camera.z
	);

	this->_point0 = Vector2f(
		this->_position_camera.x - this->_size_camera.x,
		this->_position_camera.y - this->_size_camera.y
	);
	this->_point1 = Vector2f(
		this->_position_camera.x + this->_size_camera.x,
		this->_position_camera.y - this->_size_camera.y
	);
	this->_point2 = Vector2f(
		this->_position_camera.x - this->_size_camera.x,
		this->_position_camera.y + this->_size_camera.y
	);
	this->_point3 = Vector2f(
		this->_position_camera.x + this->_size_camera.x,
		this->_position_camera.y + this->_size_camera.y
	);


}

void ei::Camera::setPosition(Vector3f position) {
	this->_position_camera = position;

	this->UPDATE__POINTS();

}
ei::Vector3f ei::Camera::getPosition() const {
	return this->_position_camera;

}

void ei::Camera::setSize(Vector2f size) {
	this->_size_camera = size;

	this->UPDATE__POINTS();

}
ei::Vector2f ei::Camera::getSize() const {
	return this->_size_camera;

}

void ei::Camera::setDirection(Vector2f direction) {
	this->_direction_camera = direction;

	this->UPDATE__POINTS();
	
}
ei::Vector2f ei::Camera::getDirection() const {
	return this->_direction_camera;

}

void ei::Camera::outInformation() const {
	using namespace std;

	cout
		<< "Position camera: "
		<< "(X: " << this->_position_camera.x << ", Y: " << this->_position_camera.y
		<< ", Z: " << this->_position_camera.z << ") " << endl
		<< "Size: "
		<< "(X: " << this->_size_camera.x << ", Y: " << this->_size_camera.y << ") " << endl
		<< "Direction camera: "
		<< "(X: " << this->_direction_camera.x << ", Y: " << this->_direction_camera.y << endl
		<< "Point0: "
		<< "(X: " << this->_point0.x << ", Y: " << this->_point0.y << ") " << endl
		<< "Point1: "
		<< "(X: " << this->_point1.x << ", Y: " << this->_point1.y << ") " << endl
		<< "Point2: "
		<< "(X: " << this->_point2.x << ", Y: " << this->_point2.y << ") " << endl
		<< "Point3: "
		<< "(X: " << this->_point3.x << ", Y: " << this->_point3.y << ") " << endl
		<< "Rotate: " << this->_rotate << endl
		<< "Speed: " << this->_speed << endl
		;
}