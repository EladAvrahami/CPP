#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;

int main() {

	vector<string> names(5);
	names.at(0) = "ELAD";
	names.at(1) = "bob1";
	names.at(2) = "bob2";
	names.at(3) = "bob3";
	names.at(4) = "bob4";
	
	for (string name : names) {
		cout << name << endl;
	}
	
	try {
		names.at(5) = "exception";
	}
	catch(const out_of_range& err){
		cout << err.what() << endl;//what() method printing our invalid vector subscript
	}
	

	return 0;
}