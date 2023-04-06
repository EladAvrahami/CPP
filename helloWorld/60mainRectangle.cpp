#include<iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	//create instances of Rectangle class
	Rectangle r1;
	Rectangle r2(5.0,2.0);

	cout << "r1 area is " << r1.area() << endl;
	cout << "r2 area is " << r2.area() << endl;

	r1.setLength(22);
	r1.setWidth(12);
	cout << "now r1 length is " << r1.getLength() << " and is width is " << r1.getWidth() << endl;
	cout << "r1 area is now " << r1.area() << endl;

	cout << "the perimeter of r1 is " << r1.perimeter() << endl;
	return 0;
}