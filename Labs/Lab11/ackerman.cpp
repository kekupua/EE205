#include <iostream>
using namespace std;

int ack(int m, int n);

int main() {
  int answer;
  int Mi, Ni;
  cout << "Enter M and N: " << endl;
  cin >> Mi >> Ni;
  answer = ack(Mi,Ni);
  cout << "The answer is: " << answer << endl;

  return 0;
}

int ack(int m, int n){
  int value;
  cout << "a(" << m << "," << n <<")\n";
  if(m == 0){
    return n+1;
  }
  if(m > 0 && n == 0){
    value = ack(m-1,1);
  }
  if(m > 0 && n > 0){
    value = ack(m-1, ack(m,n-1));
  }
  return value;
}
