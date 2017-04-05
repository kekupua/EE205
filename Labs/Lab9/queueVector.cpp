#include <iostream>
#include <vector>
#include "queueVector.h"
using namespace std;

void queueVector::enqueue(int value){
  cout << "Adding "  << value << " to queue" << endl;
  data.push_back(value);
};

void queueVector::dequeue(){
  cout << "Removing "  << data[0] << " from queue" << endl;
  data.erase(data.begin());
};

void queueVector::prettyPrint(){
  for(int i = 0; i < data.size(); ++i){
    cout << data[i] << " ";
  }
  cout << endl;
};
