#include <iostream>
#include <list>
using namespace std;

class stackList{
public:
  void pop();
  void push(int value);
  void prettyPrint();
private:
  list<int> data;
};
