#pragma once
typedef struct account {
	long int number;
	char name[35];
	float balance;
} account;

typedef struct saving {
	account general;
	int withdrawls = 0;
} saving;

void withdrawS(saving *sAccount, float amount);
void depositG(account *gAccount, float amount);
void depositS(saving *sAccount, float amount);
void clearCount(saving sAccounts[]);