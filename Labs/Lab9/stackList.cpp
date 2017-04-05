#include <iostream>
#include "stackList.h"
using namespace std;

void stackList::pop(){
  cout << "Popping " << data.back() << endl;
  data.pop_back();
};
void stackList::push(int value){
  cout << "Pushing " << value << endl;
  data.push_back(value);
};
void stackList::prettyPrint(){
  for (list<int>::iterator it=data.begin(); it != data.end(); ++it)
    cout << *it << " ";
  cout << endl;
};
