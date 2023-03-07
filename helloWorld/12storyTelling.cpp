#include<iostream>
#include<string>
using namespace std;

int main() {
	string adjictive1, girlsName, adjictive2, occupation1, placeName, clothing, hobby, adjictive3, occupation2, boysName, mansName;

	cout << "enter adjictive1 " << endl;
	cin >> adjictive1;
	cout << "enter girlsName " << endl;
	cin >> girlsName;
	cout << "enter adjictive2 " << endl;
	cin >> adjictive2;
	cout << "enter occupation1 " << endl;
	cin >> occupation1;
	cout << "enter placeName " << endl;
	cin >> placeName;
	cout << "enter clothing " << endl;
	cin >> clothing;
	cout << "enter hobby " << endl;
	cin >> hobby;
	//u can also use this way: (because there is no int var here)
	//getline(cin,hobby);






	/*cout << "enter adjictive3 " << endl;
	cin >> adjictive3;
	cout << "enter occupation2 " << endl;
	cin >> occupation2;
	cout << "enter boysName " << endl;
	cin >> boysName;
	cout << "enter mansName " << endl;
	cin >> mansName;*/

	string story = "There once was a " + adjictive1 + " girl named " + girlsName + " who was a " +
		adjictive2 + occupation1 + " in the kingdom of " + placeName + ". she love to wear " +
		clothing + " and " + hobby;
	cout << story << endl;

	

	return 0;
}