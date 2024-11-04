/// Includes /////////
#include "Surface.h"
/// //////////////////


/////////////////////////////////////////////////////
/// TrilangleSurface

ei::TrilangleSurface::TrilangleSurface(
	Vector2f point0,
	Vector2f point1,
	Vector2f point2
) {
	this->setTrilangleSurface(
		point0,
		point1,
		point2
	);

}

ei::TrilangleSurface::TrilangleSurface(
	Vector2f position,
	Vector2f radius
) {
	this->generateTrilangleSurface(
		position,
		radius
	);

}

void ei::TrilangleSurface::setTrilangleSurface(
	Vector2f point0,
	Vector2f point1,
	Vector2f point2
) {
	this->_point0 = point0;
	this->_point1 = point1;
	this->_point2 = point2;

}

void ei::TrilangleSurface::generateTrilangleSurface(
	Vector2f position,
	Vector2f radius
) {
	///
	///
	///
	///
}

std::vector<ei::Vector2f> ei::TrilangleSurface::getTrilangleSurfacePoints() const {
	std::vector<Vector2f> points;
	points.resize(3);
	points[0] = this->_point0;
	points[1] = this->_point1;
	points[2] = this->_point2;

	return points;

}

void ei::TrilangleSurface::outInformation() const {
	using namespace std;

	cout
		<< "Trilangle surface points - "
		<< "Point0: "
		<< this->_point0.x
		<< ":"
		<< this->_point0.y
		<< " Point1: "
		<< this->_point1.x
		<< ":"
		<< this->_point1.y
		<< " Point2: "
		<< this->_point2.x
		<< ":"
		<< this->_point2.y
		<< endl
		;

}
