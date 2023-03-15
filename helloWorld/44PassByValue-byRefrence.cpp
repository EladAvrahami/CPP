#include<iostream>
using namespace std;

void valueChanged1(int someNum);
//make thuis function pass by reference
void valueChanged2(int& someNum);//using & to point to the same memory location.
void multipleBy3(int& num1);
void threeTimesN(int input, int& output);
int main() {
	int num = 20;

	cout << "befor valueChanged1 call, my num was " << num << endl;
	valueChanged1(num);//by val
	cout << "After valueChanged1 call, my num was " << num << endl;

	cout << endl << endl;


	cout << "My num is currently: " << num << endl;
	valueChanged2(num);//using a function that that set to change vars by ref using the "&" at the prototype above.
	cout << "After valueChanged2 function is: " << num << endl;
	

	cout << endl << endl;
	int EnteredNum;
	cout << "enter new num:" << endl;
	cin >> EnteredNum;
	multipleBy3(EnteredNum);
	
	cout << endl << endl;

	int myOutputNum;
	threeTimesN(100, myOutputNum);
	cout << "after threeTimesN myoutputnum is: " << myOutputNum << endl;




	return 0;
}

void valueChanged1(int someNum) {
	someNum = 100;
	cout << "some num in valueChanged1 is : " << someNum << endl;
}

//becouse we add & to the function prototype above the main function
//we made this function to behave by refrance
//it means that everything i do to the parameter inside that function will affect the original argument (in this case num) 
//unlike by value i used so far that just copy the value but not piont to tha same memory location
void valueChanged2(int& someNum) {
	someNum = 200;
	cout << "some num in valueChanged2 is : " << someNum << endl;
}



void threeTimesN(int input, int& output) {

	output = input * 3;
}

void multipleBy3(int& num1) {
	cout << "Entered num was " << num1 << endl;
	int num = num1 * 3;
	cout << "The new num is " << num << endl;
}