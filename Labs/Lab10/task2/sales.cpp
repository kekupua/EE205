// Salespeople are paid basic salary and commission.
#include "sales.h"
using namespace std;

float sales::monthlySalary(float amountSold){
  cout << getName() << "\n=======" << endl;
  cout << "Amount Sold (in $): " << amountSold << endl;
  commission = amountSold*.05;
  cout << "Salary (+Commission @ 5%): " << getSalary()+commission << endl << endl;
  return getSalary()+(amountSold*.05);
}

float sales::getCommission(){
  return commission;
}

void sales::setCommission(float value){
  commission = value;
}
