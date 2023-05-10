#include<iostream>
#include<stdexcept>
using namespace std;

//function prototypes:
void processPositive(int num);
void doSomething(int num);

int main() {
	int input;

	try
	{
		cout << "Enter a num to process" << endl;
		cin >> input;
		doSomething(input);
		cout << "Yay! main able to completely"
			<< "process the num" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "main says ther is an error " << endl;
		cout << err.what() << endl;
	}
	catch (const out_of_range& err) {
		cout << "main says the num is too big" << endl;
		cout << err.what() << endl;
	}

}

//functions defenitions:
void processPositive(int num) {
	cout << "welcome to positive integer processor !" << endl;
	if (num > 100) {
		cout << "processPositive syas the num is too big" << endl;
		throw out_of_range("num cant be greater than 100  ");
	}else if (num >= 0) {
		cout << "good job its positive!" << endl;
	}
	else {
		throw invalid_argument("Negative num passed in !");
	}

}
void doSomething(int num) {
	try {
		processPositive(num);
		cout << "doSomething function process this num " << endl;
	}
	catch (const invalid_argument& err) {
		cerr << "doSomething says there is a problem" << endl;
		throw;//rethrow -if u dont spesify throe error it will throw the err by defoult(in the catch)
	}
	catch (const out_of_range& err) {
		cout << "doSomething says the num is too big " << endl;
		throw;
	}
}