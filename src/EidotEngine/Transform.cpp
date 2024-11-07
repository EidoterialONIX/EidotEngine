/// Includes /////////
#include "Transform.h"
/// //////////////////


/////////////////////////////////////////////////////
/// Transform

void ei::Transform::transformCORDINAT(
	std::vector<Vector2f>& points,
	Vector2f screen_size
) {
	for (int i{ 0 }; i < points.size(); i++) {
		points[i] = Vector2f(
			points[i].x = (points[i].x / (screen_size.x / 2.0f / 100.0f) - 100) / 100.0f,
			points[i].y = -(points[i].y / (screen_size.y / 2.0f / 100.0f) - 100) / 100.0f
		);
	}

}

void ei::Transform::transformSCALE(
	std::vector<Vector2f>& points,
	float scale
) {
	for (int i{ 0 }; i < points.size(); i++) {
		points[i] *= Vector2f(scale, scale);
	}

}

void ei::Transform::transformROTATE(
	std::vector<Vector2f>& points,
	float rotate
) {
	///
	///
	///
	///
	///
	///
}