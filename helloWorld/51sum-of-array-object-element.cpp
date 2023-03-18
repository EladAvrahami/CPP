#include<iostream>
#include<array>
using namespace std;

const int ARRAY1_SIZE = 5;


int sumArray(array<int, ARRAY1_SIZE>myArray);


int main() {
	array<int, ARRAY1_SIZE>primeryArray{ 2,4,6,8,2 };
	int theResult = sumArray(primeryArray);
	cout << "the result is : " << theResult << endl;

	return 0;
}

int sumArray(array<int, ARRAY1_SIZE>myArray) {
	int sum = 0;
	for (int i = 0; i < myArray.size(); i++) {
		sum += myArray[i];
	}
	return sum;

}