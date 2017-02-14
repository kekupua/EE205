#include <iostream>
#include <string>
#include "basicAccount.h"
#include "savingsAccount.h"
using namespace std;

savingsAccount::savingsAccount(){
}

void savingsAccount::withdrawS(float amount) {
	this->withdrawls++;
	if (this->withdrawls > 2) {
		cout << "Withdrawls over 2!" << endl;
		this->b.deduct(2);
	}

	this->b.deduct(amount);
	if (this->b.getBalance() < 100) {
		cout << "Under $100!" << endl;
		this->b.deduct(10);
	}
	cout << this->b.getName() << " remaining balance: " << this->b.getBalance() << endl;
}

void savingsAccount::setWithdrawls(int amount) {
	this->withdrawls = amount;
}

void savingsAccount::prettyPrint(){
	cout << this->b.getName() << "'s Account" << endl;
	cout << "Balance: " << this->b.getBalance() << endl;
	cout << "Withdrawls: " << this->withdrawls << endl;
	cout << endl;
}