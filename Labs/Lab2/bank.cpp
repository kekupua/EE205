#include <iostream>
#include <stdlib.h>
#include <string>

#define ACCOUNTS 3

#include "bank.h"

int main() {
	// Declare Variables
	account accounts[ACCOUNTS];
	saving savings[ACCOUNTS];
	int starting = rand() % 100;

	// Construct General accounts
	for (int i = 0; i < ACCOUNTS; ++i) {
		accounts[i].number = starting + i;
		accounts[i].balance = rand() % 10000;
	}
	strcpy_s(accounts[0].name, "Alice");
	strcpy_s(accounts[1].name, "Bob");
	strcpy_s(accounts[2].name, "Charlie");

	// Construct Savings Accounts
	for (int j = 0; j < ACCOUNTS; ++j) {
		savings[j].general.number = starting + j;
		savings[j].general.balance = rand() % 10000;
	}
	strcpy_s(savings[0].general.name, "Xing");
	strcpy_s(savings[1].general.name, "Yu");
	strcpy_s(savings[2].general.name, "ZiggyPop");

	// Print Savings Accounts
	for (int y = 0; y < ACCOUNTS; ++y) {
		std::cout << savings[y].general.number << " " << savings[y].general.name << " Balance: " << savings[y].general.balance << std::endl;
		if (y == 2) std::cout << std::endl;
	}

	// Test Cases
	for (int z = 0; z < 11; ++z) {
		if (z == 0) {
			std::cout << "Month: January" << std::endl;
			clearCount(savings);
			withdrawS(&savings[0], 9000);
			withdrawS(&savings[0], 500);
			withdrawS(&savings[0], 200);
		}
		if (z == 1) {
			std::cout << std::endl << "Month: February" << std::endl;
			clearCount(savings);
			withdrawS(&savings[0], 10);
		}
	}

	clearCount(savings);

	return 0;
}

void withdrawS(saving *sAccount, float amount) {
	sAccount->withdrawls++;
	if (sAccount->withdrawls > 2) {
		std::cout << "Withdrawls over 2!" << std::endl;
		sAccount->general.balance -= 2;
	}

	sAccount->general.balance -= amount;
	if (sAccount->general.balance < 100) {
		std::cout << "Under $100!" << std::endl;
		sAccount->general.balance -= 10;
	}
	std::cout << sAccount->general.name << " remaining balance: " << sAccount->general.balance << std::endl;
}

void depositG(account *gAccount, float amount) {
	gAccount->balance += amount;
}

void depositS(saving *sAccount, float amount) {
	sAccount->general.balance += amount;
}

void clearCount(saving sAccounts[]) {
	for (int k = 0; k < ACCOUNTS; ++k) {
		sAccounts[k].withdrawls = 0;
	}
}