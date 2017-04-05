#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> findSubstring(string base, string sub);

int main(){
  string subString, baseString;
  cout << "Enter a baseString: " << endl;
  cin >> baseString;
  cout << "Enter a subString: " << endl;
  cin >> subString;
  vector<int> result;
  result = findSubstring(baseString, subString);

  if(result.size() > 0){
    for(int i = 0; i < result.size(); ++i){
      cout << result[i] << endl;
    }
  }
  else{
    cout << "No substring found!" << endl;
  }
  return 0;
}

vector<int> findSubstring(string base, string sub){
  vector<int> result;

  for(int i = 0; i < base.size(); ++i){

    // If the letters match the first of the substring
    if(base[i] == sub[0]){
      int status = 1;

      // Look over the next few chars to check if they're equal
      for(int j = 0; j < sub.size(); ++j){
        if(i+j < base.size()){
          if(base[i+j] != sub[j]) status = 0;
        }
        if(i+j > base.size()) status = 0;
      }
      // Found substring
      if(status == 1){
        result.push_back(i);
      }
    }
  }

  return result;
}
