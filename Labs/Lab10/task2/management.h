// Management makes fixed salary and regular bonus.
#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class management : public employee {
public:
  management() {stock = 0;}
  management(long int i, string n, float sa, float b, float s) : employee(i,n), bonus(b), stock(s){
    setSalary(sa);
  }
  float monthlySalary();

  float getBonus();
  void setBonus(float value);

  float getStock();
  void setStock(float value);
private:
  float bonus;
  float stock;
};

#endif
