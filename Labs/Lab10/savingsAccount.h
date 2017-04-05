#ifndef SAVINGS
#define SAVINGS
#include <string>
#include "basicAccount.h"
using namespace std;

class savingsAccount : public basicAccount {
public:
	savingsAccount() {};
	savingsAccount(long int id, string n, float bal) : basicAccount(id, n, bal), withdrawls(0) { }
	void withdrawS(float amount);
	void setWithdrawls(int amount);
	void prettyPrint();

private:
	int withdrawls;
};
#endif
