#include <list>
using namespace std;
class queueList{
public:
  void enqueue(int value);
  void dequeue();
  void prettyPrint();
private:
  list<int> data;
};
