#include<iostream>
#include<exception>
#include "angryCatException.h"
using namespace std;


void feedKitty(int numTreats);

int main() {
	int numTreats = 0;
	cout << "how many treats ? " << endl;
	cin >> numTreats;

	try
	{
		feedKitty(numTreats);
	}
	catch (const AngeyCatException& err)
	{
		cerr << err.what() << endl;
	}

	return 0;
}

void feedKitty(int numTreats) {
	if (numTreats < 3) {
		throw AngeyCatException();
	}
	else if (numTreats < 6) {
		throw AngeyCatException("well im still not happy");
	}
	cout << "Kitty is happy with " << numTreats << " treats." << endl;
}