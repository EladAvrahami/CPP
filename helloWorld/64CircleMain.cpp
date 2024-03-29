#include "Circle.h"
#include<iostream>
using namespace std;

void printCircleData(const Circle& c);
int main() {

	Circle circ1;
	Circle circ2(5);
	printCircleData(circ1);
	printCircleData(circ2);

	return 0;
}

void printCircleData(const Circle& c) {
	cout << "Circle with radius " << c.getRadius() << endl;
	cout << "    circumeference:" << c.circumeference() << endl;
	cout << "    area:" << c.area() << endl;
}