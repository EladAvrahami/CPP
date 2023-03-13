#include <iostream>
using namespace std;

int main() {

	//2 dimensional array
	int myNums[2][3]{
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << myNums[0][2] << endl;

	myNums[1][0] = 14;

	//nested loop print 2d+ arrays
	for (int row = 0; row < 2; row++) {
	
		for (int col = 0;col < 3; col++)
		{
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;


	for (int i = 1; i >=0; i--) {
	
		for (int j = 2; j >= 0; j--) {
			cout << myNums[i][j]<<" ";
		}
		cout << " " << endl;
	}
	return 0;

}