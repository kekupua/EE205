#include <iostream>
#include "stackVector.h"
#include "stackList.h"
using namespace std;

int main(){
  // Vector
  cout << "Vector\n=============\n";
  stackVector testStackV;
  testStackV.push(12);
  testStackV.push(15);
  testStackV.push(20);
  testStackV.prettyPrint();
  testStackV.pop();
  testStackV.prettyPrint();

  cout << endl << endl;

  // List
  cout << "List\n=============\n";
  stackList testStackL;
  testStackL.push(10);
  testStackL.push(20);
  testStackL.push(35);
  testStackL.prettyPrint();
  testStackL.pop();
  testStackL.prettyPrint();
return 0;
}
