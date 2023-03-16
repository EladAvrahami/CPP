//#include<iostream>
//using namespace std;
//
//void someFunction(int aParam);
//double globalDouble=3.14159;//global var -lifetime var 
//int main() {
//
//	int localMain = 20;
//	cout << "my local to main var is :" << localMain << endl;
//	cout << "tha global(in main) is  :" << globalDouble << endl;
//
//	someFunction(25);
//	someFunction(28);
//	someFunction(32);
//	
//
//
//	return 0;
//}
//
//void someFunction(int aParam) {
//
//	int localNum = 100; //scop variable (inside the function)
//
//	static int myStatic = 500;//static var can live inside function but it has its owne place in memory
//	//so it not delete like ordinary local var after finish the function.
//	myStatic++;
//	localNum++;
//	globalDouble++;
//	cout << "my local num is :" << localNum << endl;
//	cout << "tha parameter is  :" << aParam << endl;
//	cout << "tha global double(in someFunction) is  :" << globalDouble << endl;
//	cout << "my static var is :" << myStatic << endl;
//
//}