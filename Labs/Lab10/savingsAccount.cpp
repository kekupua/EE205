#include <iostream>
#include <string>
#include "basicAccount.h"
#include "savingsAccount.h"
using namespace std;

void savingsAccount::withdrawS(float amount) {
	withdrawls++;
	if (withdrawls > 2) {
		cout << "Withdrawls over 2!" << endl;
		deduct(2);
	}

	deduct(amount);
	if (getBalance() < 100) {
		cout << "Under $100!" << endl;
		deduct(10);
	}
	cout << getName() << " remaining balance: " << getBalance() << endl;
}

void savingsAccount::setWithdrawls(int amount) {
	withdrawls = amount;
}

void savingsAccount::prettyPrint(){
	cout << getName() << "'s Account" << endl;
	cout << "Balance: " << getBalance() << endl;
	cout << "Withdrawls: " << withdrawls << endl;
	cout << endl;
}
