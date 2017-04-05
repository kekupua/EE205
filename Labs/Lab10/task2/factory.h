#ifndef FACTORY_H
#define FACTORY_H
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class factory : public employee {
public:
  factory() {madeProducts = 0;}
  factory(long int i, string n, float p) : employee(i,n), madeProducts(p) { }
  float monthlySalary(float products);

  float getProducts();
  void setProducts(float value);

private:
  float madeProducts;
};

#endif
