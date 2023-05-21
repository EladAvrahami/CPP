#include <iostream>
using namespace std;


int main() {

	int originalVar = 150;
	int* somePointer = &originalVar;//use by ref to get 

	cout << "my original int is : " << originalVar << endl;
	cout << "pointer holds value : " << somePointer << endl;//show the memmory address (hexadecemal)
	cout << "pointer dereferenced (מבוטל) : " << *somePointer << endl;//show its value

	*somePointer = 200;
	cout << "my originalVar is now : " << originalVar << endl;//the new ref change also the original var 


	double myDouble = 3.14;
	double* doublePtr = &myDouble;
	cout << doublePtr << endl;
	cout << *doublePtr << endl;
		return 0;
}