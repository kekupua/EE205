#include <iostream>
#include <vector>
using namespace std;

class stackVector{
public:
  void pop();
  void push(int value);
  void prettyPrint();
private:
  vector<int> data;
};
