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
	float radius
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
	float radius
) {
	float frag = radius / 90.f;

	this->_point0 = Vector2f(position.x, position.y - radius);
	this->_point1 = Vector2f(
		(position.x + radius) - (radius - frag * 30.f),
		(position.y + radius) - (radius - frag * 30.f)
	);
	this->_point2 = Vector2f(
		(position.x - radius) + (radius - frag * 30.f),
		(position.y + radius) - (radius - frag * 30.f)
	);

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
		<< "Point0: ( X: " << this->_point0.x
		<< ", Y: " << this->_point0.y
		<< ") Point1: ( X: " << this->_point1.x
		<< ", Y: " << this->_point1.y
		<< ") Point2: ( X: " << this->_point2.x
		<< ", Y: " << this->_point2.y
		<< ")"
		<< endl
		;

}


/////////////////////////////////////////////////////
/// RectangleSurface

ei::RectangleSurface::RectangleSurface(
	Vector2f position,
	Vector2f size
) {
	this->setRectangleSurface(
		position,
		size
	);

}

void ei::RectangleSurface::setRectangleSurface(
	Vector2f position,
	Vector2f size
) {
	this->_point0 = position;
	this->_point1 = Vector2f(position.x + size.x, position.y);
	this->_point2 = position + size;
	this->_point3 = Vector2f(position.x, position.y + size.y);

}

std::vector<ei::Vector2f> ei::RectangleSurface::getRectangleSurfacePoints() const {
	std::vector<Vector2f> points;
	points.resize(4);
	points[0] = this->_point0;
	points[1] = this->_point1;
	points[2] = this->_point2;
	points[3] = this->_point3;

	return points;

}

void ei::RectangleSurface::outInformation() const {
	using namespace std;

	cout
		<< "Rectangle surface points - "
		<< "Point0: ( X: " << this->_point0.x
		<< ", Y: " << this->_point0.y
		<< ") Point1: ( X: " << this->_point1.x
		<< ", Y: " << this->_point1.y
		<< ") Point2: ( X: " << this->_point2.x
		<< ", Y: " << this->_point2.y
		<< ") Point3: ( X: " << this->_point3.x
		<< ", Y: " << this->_point3.y
		<< ")"
		<< endl
		;

}


/////////////////////////////////////////////////////
/// PoligonSurface

ei::PoligonSurface::PoligonSurface(
	Vector2f position,
	float radius,
	unsigned int count_points
) {
	this->generatePoligonSurface(
		position,
		radius,
		count_points
	);

}

ei::PoligonSurface::PoligonSurface(
	std::vector<Vector2f> points
) {
	this->setPoligonSurface(
		points
	);

}

void ei::PoligonSurface::generatePoligonSurface(
	Vector2f position,
	float radius,
	unsigned int count_points
) {
	if (this->_points.size() != 0) this->_points.resize(0);
	this->_points.resize(count_points);

	float rotate = 0.f;
	float step_rotate = 360.f / count_points;
	float frag = radius / 90.f;

	this->_points[0] = Vector2f(position.x, position.y - radius);
	for (int i{ 1 }; i < count_points; i++) {
		rotate += step_rotate;
		if (rotate > 360.f) rotate = 0.f;

		if (rotate <= 90.f) {
			this->_points[i] = Vector2f(
				position.x + (frag * rotate),
				(position.y - radius) + (frag * rotate)
			);
		}
		else if (rotate <= 180.f) {
			this->_points[i] = Vector2f(
				(position.x + radius) - (frag * (rotate - 90.f)),
				position.y + (frag * (rotate - 90.f))
			);
		}
		else if (rotate <= 270.f) {
			this->_points[i] = Vector2f(
				position.x - (frag * (rotate - 180.f)),
				(position.y + radius) - (frag * (rotate - 180.f))
			);
		}
		else if (rotate <= 360.f) {
			this->_points[i] = Vector2f(
				(position.x - radius) + (frag * (rotate - 270.f)),
				position.y - (frag * (rotate - 270.f))
			);
		}

	}

}

void ei::PoligonSurface::setPoligonSurface(
	std::vector<Vector2f> points
) {
	if (this->_points.size() != 0) this->_points.resize(0);
	this->_points.resize(points.size());

	for (int i{ 0 }; i < points.size(); i++) {
		this->_points[i] = points[i];
	}

}

std::vector<ei::Vector2f> ei::PoligonSurface::getPoligonSurfacePoints() const {
	return this->_points;

}

void ei::PoligonSurface::outInformation() const {
	using namespace std;

	for (int i{ 0 }; i < this->_points.size(); i++) {
		cout
			<< "Point" << i
			<< ": (X: " << this->_points[i].x
			<< ", Y: " << this->_points[i].y
			<< ")"
			<< endl
			;
	}

}

