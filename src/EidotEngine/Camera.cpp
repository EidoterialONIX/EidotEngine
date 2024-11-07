/// Includes /////////
#include "Camera.h"
/// //////////////////


/////////////////////////////////////////////////////
/// Camera

void ei::Camera::UPDATE__POINTS() {
	
	float frag_view = this->_view / 2.f;
	float frag = this->_position_camera.z / 90.f;

	this->_point0 = Vector2f(
		(this->_position_camera.x - (frag * (frag_view - this->_direction_camera.x))) * 2.f,
		(this->_position_camera.y - (frag * (frag_view - this->_direction_camera.y))) * 2.f
	);
	this->_point1 = Vector2f(
		(this->_position_camera.x + (frag * (frag_view + this->_direction_camera.x))) * 2.f,
		(this->_position_camera.y - (frag * (frag_view - this->_direction_camera.y))) * 2.f
	);
	this->_point2 = Vector2f(
		(this->_position_camera.x - (frag * (frag_view - this->_direction_camera.x))) * 2.f,
		(this->_position_camera.y + (frag * (frag_view + this->_direction_camera.y))) * 2.f
	);
	this->_point3 = Vector2f(
		(this->_position_camera.x + (frag * (frag_view + this->_direction_camera.x))) * 2.f,
		(this->_position_camera.y + (frag * (frag_view + this->_direction_camera.y))) * 2.f
	);

}

std::vector<ei::Vector2f> ei::Camera::getCameraPoints() const {
	std::vector<Vector2f> points;
	points.resize(4);
	points[0] = this->_point0;
	points[1] = this->_point1;
	points[2] = this->_point2;
	points[3] = this->_point3;

	return points;

}

void ei::Camera::setPosition(Vector3f position) {
	this->_position_camera = position;

	this->UPDATE__POINTS();

}
ei::Vector3f ei::Camera::getPosition() const {
	return this->_position_camera;

}

void ei::Camera::setDirection(Vector2i direction) {
	this->_direction_camera = direction;

	this->UPDATE__POINTS();
	
}
ei::Vector2i ei::Camera::getDirection() const {
	return this->_direction_camera;

}

void ei::Camera::setView(unsigned int view) {
	this->_view = view;

}
unsigned int ei::Camera::getView() const {
	return this->_view;

}

void ei::Camera::setSpeed(float speed) {
	this->_speed = speed;

}
float ei::Camera::getSpeed() const {
	return this->_speed;

}

void ei::Camera::outInformation() const {
	using namespace std;

	cout
		<< "Position camera: "
		<< "(X: " << this->_position_camera.x << ", Y: " << this->_position_camera.y
		<< ", Z: " << this->_position_camera.z << ") " << endl
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
		<< "Speed: " << this->_speed << endl
		;
}