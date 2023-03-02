#include<iostream>
using namespace std;


/*

*/

int main() {

	cout << boolalpha; //when declare it stick

	int a =15;
	int b = 20;
	bool areEqual = a == b;

	cout << (a < b) << endl;
	cout << "are Equal ? = " << areEqual << endl;



	//#Sulotion 1
	int myAge = 23;
	bool isLegal = myAge >= 21;
	cout <<"is your age legal? "<< isLegal << endl;

	//#Sulotion 2
	int age = 16;
	cout << "age>=21 ? " << (age >= 21) << endl;

	
	return 0;
}