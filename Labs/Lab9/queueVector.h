#include <vector>
using namespace std;
class queueVector{
public:
  void enqueue(int value);
  void dequeue();
  void prettyPrint();
private:
  vector<int> data;
};
