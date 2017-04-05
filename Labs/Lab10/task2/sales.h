#ifndef SALES_H
#define SALES_H
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class sales : public employee {
public:
  sales() {commission = 0;}
  sales(long int i, string n, float sa, float c) : employee(i,n), commission(c) {
    setSalary(sa);
  }
  float monthlySalary(float bonus);

  float getCommission();
  void setCommission(float value);

private:
  float commission;
};

#endif
