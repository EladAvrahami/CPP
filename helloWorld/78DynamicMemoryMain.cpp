#include<iostream>
using namespace std;


int main() {

	int* myIntPtr = new int(123);//can be written like tow lines down
	//int* myIntPtr = new int;
	//*myIntPtr = 123;

	cout << *myIntPtr << endl;
	delete myIntPtr;//delete - remove the pointer value from the heap memory and prevent "memory leak"
	myIntPtr = nullptr; //nullptr - represent the memmory address at location zero
	
	
	bool* myBoolPtr = new bool;
	*myBoolPtr = true;
	cout << boolalpha << *myBoolPtr << endl;//boolalpha -to print true or false instead 0&1 
	delete myBoolPtr;//delete memory adress value
	myBoolPtr = nullptr;//delete memmory address
	
	
	
	return 0;
}