#ifndef TECHNICAL_H
#define TECHNICAL_H
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class technical : public employee {
public:
  technical() {status = ""; stock = 0;}
  technical(long int i, string n, string s, float sa) : employee(i,n), status(s) {
    setSalary(sa);
    stock = 0;
  }
  float monthlySalary(float bonus);

  string getStatus();
  void setStatus(string s);

  float getStock();
  void setStock(float value);
private:
  string status;
  float stock;
};

#endif
