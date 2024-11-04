/// Includes /////////
#include "Color.h"
/// //////////////////


/////////////////////////////////////////////////////
/// Color

ei::Color::Color(
	unsigned int r,
	unsigned int g,
	unsigned int b,
	unsigned int a
) {
	this->setColor(
		r,
		g,
		b,
		a
	);

}

void ei::Color::setColor(
	unsigned int r,
	unsigned int g,
	unsigned int b,
	unsigned int a
) {
	if (r > 255) r = 255;
	this->_r = r / 255.f;

	if (g > 255) g = 255;
	this->_g = g / 255.f;

	if (b > 255) b = 255;
	this->_b = b / 255.f;

	if (a > 255) a = 255;
	this->_a = a / 255.f;

}

std::vector<float> ei::Color::getColor() const {
	std::vector<float> color;
	color.resize(4);
	color[0] = this->_r;
	color[1] = this->_g;
	color[2] = this->_b;
	color[3] = this->_a;

	return color;

}

void ei::Color::outInformation() const {
	using namespace std;

	cout
		<< "Color - "
		<< "R: "
		<< this->_r
		<< " G: "
		<< this->_g
		<< " B: "
		<< this->_b
		<< " A: "
		<< this->_a
		<< endl
		;

}
