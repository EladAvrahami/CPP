#include<iostream>
#include<stdexcept>
#include "dog.h"

int main() {

	try
	{
		Dog myDog("german");
		Dog yourDog("retriver");
		Dog their("poodle");
		cout << myDog.getBreed() << endl;
		cout << yourDog.getBreed()<<endl;
		cout << their.getBreed() << endl;

	}
	catch (const runtime_error& err)
	{
		cerr << err.what();
	}
	return 0;

}


