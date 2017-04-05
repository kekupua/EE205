// Management makes fixed salary and regular bonus.
#include "management.h"
using namespace std;

float management::monthlySalary(){
  cout << getName() << "\n=======" << endl;
  cout << "Bonus: " << bonus << endl;
  cout << "Salary (+Bonus): " << getSalary()+bonus << endl;
  if(stock) cout << "Stock Option Worth: " << stock << endl << endl;
  return getSalary()+bonus;
}

float management::getBonus(){
  return bonus;
}

void management::setBonus(float value){
  bonus = value;
}

float management::getStock(){
  return stock;
}

void management::setStock(float value){
  stock = value;
}
