#include <string>
using namespace std;
#pragma once
class savingsAccount {
public:
	savingsAccount();
	savingsAccount(long id, string name, double bal, int n) : b(id, name, bal), withdrawls(n) {}
	
	basicAccount b;
	
	void withdrawS(float amount);
	void setWithdrawls(int amount);
	void prettyPrint();

private:
	int withdrawls;
};