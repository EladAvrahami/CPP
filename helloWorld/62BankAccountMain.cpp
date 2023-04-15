#include<iostream>
#include "BankAccount.h"
using namespace std;

int main() {
	BankAccount myAccount("Elad Avrahami", 5000);
	BankAccount bobsAccount("Bob robinson");
	bobsAccount.deposit(500);
	cout << "bob's account contains " << bobsAccount.getBalance() << endl;

	bobsAccount.withdraw(1000);//shouid couse warning -try pull more than have

	cout << "Bob's account is still " << bobsAccount.getBalance() << endl;

	cout << myAccount.getOwner() << "account contains "
		<< myAccount.getBalance() << endl;

	return 0;
}