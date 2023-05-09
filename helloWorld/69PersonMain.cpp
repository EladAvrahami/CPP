#include<iostream>
#include<stdexcept>
#include "69Person.h"

using namespace std;


int main() {
	try
	{
		Person person1("BOB");
		Person person2("john");//inharitance of the error massage i set in the person class at setname method 
		Person person3("king");

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;


	}
	catch (const runtime_error& err)
	{
		cerr << err.what() << endl;
	}

	return 0;

}