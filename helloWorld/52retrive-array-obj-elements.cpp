#include<iostream>
#include<array>
using namespace std;

void sumarray(array<int, 10>theArray,int& theSum);


int main() {

	array<int, 10>primeryArray{ 1,1,3,1,4,6,2,2,2,2 };
	int resultByRef;
	sumArray(primeryArray, resultByRef);
	cout << "result by ref is :" << resultByRef << endl;
	return 0;
}

void sumarray(array<int, 10>theArray, int& theSum) {

	theSum = 0;
	for (int item : theArray) {
		theSum += item;
	}

}