//#include<iostream>
//using namespace std;
//
//void countDownFrom(int num);
//int sumevalues(int num);
//
//int main() {
//	countDownFrom(10);
//	cout << endl << endl;
//	int totalsum = sumevalues(10);
//	cout << "the sum is :" << totalsum<<endl;
//	return 0;
//}
//
////recursive call -function call to itself with somthing that will stop it eventualy like condition param
//void countDownFrom(int num) {
//	if (num>=0) {
//		cout << num << endl;
//		countDownFrom(num - 1);
//	}
//
//}
//
//int sumevalues(int num) {
//
//	if (num >= 1) {
//		return num + sumevalues(num - 1);
//	}
//	return num;
//}