// Factory employees are paid per product, based on how many they produce.
#include "factory.h"
using namespace std;

float factory::monthlySalary(float value){
  cout << getName() << "\n=======" << endl;
  cout << "Products Made: " << madeProducts << endl;
  cout << "Resulting Pay: " << madeProducts*value << endl << endl;
  return madeProducts*value;
}

float factory::getProducts(){
  return madeProducts;
}

void factory::setProducts(float value){
  madeProducts = value;
}
