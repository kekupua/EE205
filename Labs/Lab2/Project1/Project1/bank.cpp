#include <iostream>
#include <stdlib.h>
#include <string>

#define ACCOUNTS 3

#include "bank.h"

int main() {
	account accounts[ACCOUNTS];
	saving savings[ACCOUNTS];
	int starting = rand() % 100; 
	for (int i = 0; i < ACCOUNTS; ++i) {
		accounts[i].number = starting + i;
		accounts[i].balance = rand() % 10000;
	}
	strcpy_s(accounts[0].name, "Alice");
	strcpy_s(accounts[1].name, "Bob");
	strcpy_s(accounts[2].name, "Charlie");

	starting = rand() % 100;
	for (int j = 0; j < ACCOUNTS; ++j) {
		savings[j].general.number = starting + j;
		savings[j].general.balance = rand() % 10000;
	}
	strcpy_s(savings[0].general.name, "Xing");
	strcpy_s(savings[1].general.name, "Yu");
	strcpy_s(savings[2].general.name, "ZiggyPop");

	return 0;
}

void withdrawG(account *gAccount, float amount) {
	if (gAccount->balance < 100) {
		gAccount->balance -= 10;
	}
	gAccount->balance -= amount;
}

void withdrawS(saving *sAccount, float amount) {
	if (sAccount->withdrawls > 2) {
		sAccount->general.balance -= 2;
	}
	sAccount->withdrawls++;
	sAccount->general.balance -= amount;
	if (sAccount->general.balance < 100) {
		sAccount->general.balance -= 10;
	}
}

void depositG(account *gAccount, float amount) {
	gAccount->balance += amount;
}

void depositS(saving *sAccount, float amount) {
	sAccount->general.balance += amount;
}