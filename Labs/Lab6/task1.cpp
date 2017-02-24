#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> test;
  test.push_back(10);
  test.push_back(20);
  test.push_back(30);
  test.push_back(40);
  for(int i = 0; i < test.size(); ++i){
    cout << test[i] << " ";
  }
  return 0;
}
