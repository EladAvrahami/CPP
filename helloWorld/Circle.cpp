#include "Circle.h"
#include<iostream>
#include<cmath>
using namespace std;

const double M_PI= 3.14159265358979323846; //M_PI is built in constant in the cmath library that equall to 3.14159265358979323846

Circle::Circle() {
	radius = 1;
}
Circle::Circle(double radius) {
	this->radius = radius;
}
double Circle::getRadius() const {
	return radius;
}
void Circle::setRadius(double radius) {
	this->radius = radius;
}

double Circle::circumeference() const {//c=2*pi*r
	return 2 * M_PI * radius;
}
double Circle::area() const{//a=pi*r^2
	return M_PI * pow(radius, 2);
}