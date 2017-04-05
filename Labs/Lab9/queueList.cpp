#include <iostream>
#include <list>
#include "queueList.h"
using namespace std;

void queueList::enqueue(int value){
  cout << "Adding "  << value << " to queue" << endl;
  data.push_back(value);
};

void queueList::dequeue(){
  cout << "Removing " << data.front() << " from queue" << endl;
  data.pop_front();
};

void queueList::prettyPrint(){
  for (list<int>::iterator it=data.begin(); it != data.end(); ++it)
    cout << *it << " ";
  cout << endl;
};
