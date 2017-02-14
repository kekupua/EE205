/*
	Name:		Sean Teramae
	Login:		teramae8
	Section:	1
	Date:		1/30/2017
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "basicAccount.h"
#include "savingsAccount.h"
#define ACCOUNTS 3
using namespace std;

void clearCount(savingsAccount sAccounts[]);

int main() {
	basicAccount accounts[ACCOUNTS];
	savingsAccount savings[ACCOUNTS];
	int starting = rand() % 100;

	// Construct General accounts
	for (int i = 0; i < ACCOUNTS; ++i) {
		++starting;
		accounts[i].setAcctNum(starting);
		accounts[i].setBalance(rand() % 10000);
	}
	accounts[0].setName("Alice");
	accounts[1].setName("Bob");
	accounts[2].setName("Charlie");

	// Construct Savings Accounts
	for (int j = 0; j < ACCOUNTS; ++j) {
		savings[j].b.setAcctNum(starting + j);
		savings[j].b.setBalance(rand() % 10000);
	}
	savings[0].b.setName("Xing");
	savings[1].b.setName("Yi");
	savings[2].b.setName("Zed");

	// Test Cases
	for (int z = 0; z < 11; ++z) {
		if (z == 0) {
			cout << "Month: January" << endl;
			clearCount(savings);
			savings[0].withdrawS(9000);
			savings[0].withdrawS(9000);
			savings[0].withdrawS(9000);
		}
		if (z == 1) {
			cout << endl << "Month: February" << endl;
			clearCount(savings);
			savings[0].withdrawS(9000);
		}
	}

	// Pretty Print Savings Accounts
	cout << endl;
	for (int z = 0; z < ACCOUNTS; ++z) {
		savings[z].prettyPrint();
	}

	// Test Copy Constructor
	basicAccount blank;
	basicAccount full;
	full.setAcctNum(12);
	full.setName("Copied Account");
	full.setBalance(123.23);
	blank = full;
	blank.prettyPrint();

	// Test == overload
	if (blank == full) cout << "They're Equal!" << endl;
	else cout << "Not equal :(" << endl;

	clearCount(savings);

	return 0;
}

void clearCount(savingsAccount sAccounts[]) {
	for (int k = 0; k < ACCOUNTS; ++k) {
		sAccounts[k].setWithdrawls(0);
	}
}
