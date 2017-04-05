#include <iostream>
#include "stackVector.h"
using namespace std;

void stackVector::pop(){
  cout << "Popping " << data[data.size()-1] << endl;
  data.pop_back();
};
void stackVector::push(int value){
  cout << "Pushing " << value << endl;
  data.push_back(value);
};
void stackVector::prettyPrint(){
  for(int i = 0; i < data.size(); ++i){
    cout << data[i] << " ";
  }
  cout << endl;
};
