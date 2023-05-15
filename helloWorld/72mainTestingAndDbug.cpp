#include <iostream>
#include<stdexcept>
using namespace std;

int imBroken(int num1, int num2);

int main() {

	int a;
	try
	{
		a = imBroken(10, 5);
		cout << a << endl;
		a = imBroken(10, 0);
		cout << a << endl;
	}
	catch (const invalid_argument& err)//insted of crushing it cath the exception
	{
		cerr << err.what() << endl;
	}
	

	return 0;
}
int imBroken(int num1, int num2) {

	int result = 0;
	if (num2 != 0) { 
		result = num1 / num2;
	}
	else { 
		throw invalid_argument("cannot divide by zero");
	}
	return result;
}