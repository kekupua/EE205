#include <iostream>
#include "queueVector.h"
#include "queueList.h"
using namespace std;

int main(){
  // Vector
  cout << "Vector\n=============\n";
  queueVector testQueueV;
  testQueueV.enqueue(12);
  testQueueV.enqueue(15);
  testQueueV.enqueue(20);
  testQueueV.prettyPrint();
  testQueueV.dequeue();
  testQueueV.prettyPrint();

  cout << endl << endl;

  // List
  cout << "List\n=============\n";
  queueList testQueueL;
  testQueueL.enqueue(10);
  testQueueL.enqueue(20);
  testQueueL.enqueue(35);
  testQueueL.prettyPrint();
  testQueueL.dequeue();
  testQueueL.prettyPrint();
return 0;
}
