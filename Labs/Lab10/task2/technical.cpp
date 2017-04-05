// Technical employees make a fixed salary and can earn bonus.
// Technical employees can be full timers or consultants (which makes them hourly).
// Technical and management employees can earn stock options too.
#include "technical.h"
using namespace std;

float technical::monthlySalary(float bonus = 0){
  if(status == "c"){
    cout << getName() << "\n=======" << endl;
    cout << "Hourly Rate (+Bonus): " << getSalary()+bonus << endl << endl;
  }
  else{
    cout << getName() << "\n=======" << endl;
    cout << "Salary (+Bonus): " << getSalary()+bonus << endl;
  }
  if(stock) cout << "Stock Option Worth: " << stock << endl;
  cout << endl;
  return getSalary()+bonus;

}

string technical::getStatus(){
  return status;
}

void technical::setStatus(string s){
  status = s;
}

float technical::getStock(){
  return stock;
}

void technical::setStock(float value){
  stock = value;
}
