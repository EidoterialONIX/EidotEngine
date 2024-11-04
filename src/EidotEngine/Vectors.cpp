/// Includes /////////
#include "Vectors.h"
/// //////////////////


/////////////////////////////////////////////////////
/// Vector2f

ei::Vector2f::Vector2f(
	float x,
	float y
) : x(x), y(y) {}

void ei::Vector2f::outInformation() const{
	using namespace std;

	cout
		<< "Vector 2 float - "
		<< "X: "
		<< this->x
		<< " Y: "
		<< this->y
		<< endl
		;

}

void ei::Vector2f::operator=(Vector2f v) {
	this->x = v.x; this->y = v.y;

}

bool ei::Vector2f::operator==(Vector2f v) {
	if (this->x == v.x && this->y == v.y) return true;
	else return false;

}

bool ei::Vector2f::operator!=(Vector2f v) {
	if (this->x == v.x && this->y == v.y) return false;
	else return true;

}

bool ei::Vector2f::operator<=(Vector2f v) {
	if (this->x <= v.x && this->y <= v.y) return true;
	else return false;

}

bool ei::Vector2f::operator>=(Vector2f v) {
	if (this->x >= v.x && this->y >= v.y) return true;
	else return false;

}

bool ei::Vector2f::operator<(Vector2f v) {
	if (this->x < v.x && this->y < v.y) return true;
	else return false;

}

bool ei::Vector2f::operator>(Vector2f v) {
	if (this->x > v.x && this->y > v.y) return true;
	else return false;

}

void ei::Vector2f::operator+=(Vector2f v) {
	this->x += v.x; this->y += v.y;

}

void ei::Vector2f::operator-=(Vector2f v) {
	this->x -= v.x; this->y -= v.y;

}

void ei::Vector2f::operator*=(Vector2f v) {
	this->x *= v.x; this->y *= v.y;

}

void ei::Vector2f::operator/=(Vector2f v) {
	this->x /= v.x; this->y /= v.y;

}

ei::Vector2f ei::Vector2f::operator+(Vector2f v) {
	return Vector2f(
		this->x + v.x,
		this->y + v.y
	);

}

ei::Vector2f ei::Vector2f::operator-(Vector2f v) {
	return Vector2f(
		this->x - v.x,
		this->y - v.y
	);

}

ei::Vector2f ei::Vector2f::operator*(Vector2f v) {
	return Vector2f(
		this->x * v.x,
		this->y * v.y
	);

}

ei::Vector2f ei::Vector2f::operator/(Vector2f v) {
	return Vector2f(
		this->x / v.x,
		this->y / v.y
	);

}

/////////////////////////////////////////////////////
/// Vector3f

ei::Vector3f::Vector3f(
	float x,
	float y,
	float z
) : x(x), y(y), z(z) {}

ei::Vector3f::Vector3f(
	Vector2f v,
	float z
) : x(v.x), y(v.y), z(z) {}

void ei::Vector3f::outInformation() const {
	using namespace std;

	cout
		<< "Vector 3 float - "
		<< "X: "
		<< this->x
		<< " Y: "
		<< this->y
		<< " Z: "
		<< this->z
		<< endl
		;

}

void ei::Vector3f::operator=(Vector3f v) {
	this->x = v.x; this->y = v.y; this->z = v.z;

}

bool ei::Vector3f::operator==(Vector3f v) {
	if (this->x == v.x && this->y == v.y && this->z == v.z) return true;
	else return false;

}

bool ei::Vector3f::operator!=(Vector3f v) {
	if (this->x == v.x && this->y == v.y && this->z == v.z) return false;
	else return true;

}

bool ei::Vector3f::operator<=(Vector3f v) {
	if (this->x <= v.x && this->y <= v.y && this->z <= v.z) return true;
	else return false;

}

bool ei::Vector3f::operator>=(Vector3f v) {
	if (this->x >= v.x && this->y >= v.y && this->z >= z) return true;
	else return false;

}

bool ei::Vector3f::operator<(Vector3f v) {
	if (this->x < v.x && this->y < v.y && this->z < v.z) return true;
	else return false;

}

bool ei::Vector3f::operator>(Vector3f v) {
	if (this->x > v.x && this->y > v.y && this->z > v.z) return true;
	else return false;

}

void ei::Vector3f::operator+=(Vector3f v) {
	this->x += v.x; this->y += v.y; this->z += v.z;

}

void ei::Vector3f::operator-=(Vector3f v) {
	this->x -= v.x; this->y -= v.y; this->z -= v.z;

}

void ei::Vector3f::operator*=(Vector3f v) {
	this->x *= v.x; this->y *= v.y; this->z *= v.z;

}

void ei::Vector3f::operator/=(Vector3f v) {
	this->x /= v.x; this->y /= v.y; this->z /= v.z;

}

ei::Vector3f ei::Vector3f::operator+(Vector3f v) {
	return Vector3f(
		this->x + v.x,
		this->y + v.y,
		this->z + v.z
	);

}

ei::Vector3f ei::Vector3f::operator-(Vector3f v) {
	return Vector3f(
		this->x - v.x,
		this->y - v.y,
		this->z - v.z
	);

}

ei::Vector3f ei::Vector3f::operator*(Vector3f v) {
	return Vector3f(
		this->x * v.x,
		this->y * v.y,
		this->z * v.z
	);

}

ei::Vector3f ei::Vector3f::operator/(Vector3f v) {
	return Vector3f(
		this->x / v.x,
		this->y / v.y,
		this->z / v.z
	);

}
