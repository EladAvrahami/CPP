#include<iostream>
#include <stdexcept>
#include "74warpDriveOverheating.h"
using namespace std;


void warpTest(int temp);

int main() {

	cout << "testing" << endl;

	try
	{
		for (int i = 0; i < 10; i++) {
			warpTest(50 + (i * 10));
		}
	}
	catch (const WarpDriveOverheating& err)
	{
		cerr << err.what() << endl;
	}
	return 0;
}

void  warpTest(int temp) {
	if (temp <= 80) { cout << "temp is good " << endl; }
	else { throw WarpDriveOverheating(); }

}