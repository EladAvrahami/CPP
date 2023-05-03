#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int main() {

	vector<int> myNums;
	try {
	
		myNums.resize(myNums.max_size() + 1);  //max_size bring me the max size of the vector and by adding 1 we couse an exception and the main crush without try catch 
	}
	catch (const length_error& err) {
		cout << err.what() << endl;
	}


	//print error using cerr insted of cout
	try {

		myNums.resize(myNums.max_size() + 1);  
	}
	catch (const length_error& err) {
		cout << err.what() << endl;
	}
	
	cerr << "yayyy it big vector!" << endl;
	
	return 0;
}