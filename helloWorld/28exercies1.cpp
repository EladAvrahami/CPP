//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main() {
//
//	char package;
//	int units;
//	cout << "what package do you owne? A B or C ?" << endl;
//	cin >> package;
//	cout << "how many products do you buy thus month? " << endl;
//	cin >> units;
//	int packageLimit;
//	int membershipPrice;
//	int pOverLimit;
//	double totalprice =0;
//	int extraUnits;
//	
//	
//	switch (package)
//	{
//	case 'A':
//	case 'a':
//		packageLimit =2;
//		membershipPrice = 8;
//		pOverLimit = 5;
//		if (units <= packageLimit) {
//			totalprice = membershipPrice;
//			cout << "total to pay is: " << totalprice << "$" << endl;
//		}
//		else {
//			extraUnits = units - packageLimit;
//			totalprice = extraUnits * pOverLimit + membershipPrice;
//			cout << "total to pay is: " << totalprice << "$" << endl;
//			break;
//		}
//	case 'B':
//	case 'b':
//		
//	default:
//		cout << "U dont choose currect package letter" << endl;
//		cout << "GOOD BYE"<< endl;
//
//
//		break;
//	}
//
//
//
//
//	return 0;
//}
//
