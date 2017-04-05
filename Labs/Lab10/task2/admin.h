#ifndef ADMIN_H
#define ADMIN_H
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class admin : public employee {
public:
  admin() {}
  admin(long int i, string n, float sa) : employee(i,n) {
    setSalary(sa);
  }
  float monthlySalary();
};

#endif
