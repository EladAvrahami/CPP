#include "Rectangle.h"

Rectangle::Rectangle() {//no args constructor
	this->length = 1.0;
	this->width = 1.0;
}

Rectangle::Rectangle(double length, double width) {//all args constructor
	this->length = length;
	this->width = width;
}

double Rectangle::getLength() const{ //
	return length;
}

double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setLength(double length) {
	this->length = length;
}

void Rectangle::setWidth(double width) {
	this->width = width;
}

double Rectangle::area() const {
	return length * width;
}

double Rectangle::perimeter() const {
	return 2 * (length + width);
}