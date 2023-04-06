//#include<iostream>
//#include<string>
//using namespace std;
////modifiers -public privete
//class House {
//	//behaviors of the class
//public:
//	//this 3 called MEMBER functions / methods live inside a class .
//	//setters -way to modify internal privet data of an obj
//	void setNumStories(int numStories) { this->numStories = numStories; }
//	//the this keyword means that i mean to the data member not the parameter
//	void setNumWindows(int numWindows) { this->numWindows = numWindows; }
//	//void setNumWindows(int nw) { numWindows = nw; }
//	
//
//	void setcolor(string color) { this->color = color; }
//
//	//getters- return data that stored inside the class
//	int getNumStories() const {//const not necceccery but it prefer to give a method as much access as it needs but no more 
//		return numStories;
//	}
//
//	int getNumWindows() const {
//		return numStories;
//	}
//
//	string getColor() const {
//		return color;
//	} 
//
//
//	//the data of the class 
//private:
//	//this 3 called data members or fileds
//	int numStories;
//	int numWindows;
//	string color;
//
//};
//
//void printHouseData(const House& house);//pass by ref(&) +security that it cant be change(const)
//
//
//int main() {
//	House myHouse;
//	House yourHouse;
//
//	myHouse.setNumStories(3);
//	myHouse.setNumWindows(6);
//	myHouse.setcolor("blue");
//
//	yourHouse.setNumStories(2);
//	yourHouse.setNumWindows(4);
//	yourHouse.setcolor("red");
//	//because color windows and stories are privet i cant accss them directly.
//	//for exm like: yourHouse.color="orange"; will made an error because it unaccesible 
//
//	cout << "My house is " << myHouse.getColor() << "and has " << myHouse.getNumStories() << " stories and"
//		<< myHouse.getNumWindows() << "windows." << endl;
//
//	cout << "Your House is " << yourHouse.getColor() << "and has " << yourHouse.getNumStories() << " stories and"
//		<< yourHouse.getNumWindows() << "windows." << endl;
//
//
//	printHouseData(yourHouse);
//
//	return 0;
//}
//
//void printHouseData(const House& house) {
//
//	cout << "print data using function: My house is " << house.getColor() << "and has "
//		<< house.getNumStories() << " stories and "
//		<< house.getNumWindows() << " windows." << endl;
//
//}