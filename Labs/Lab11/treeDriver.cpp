#include <iostream>
#include "tree.h"
using namespace std;

int main(){
  int rootValue;
  cout << "Please enter a root value: " << endl;
  cin >> rootValue;
  Node* root = new Node(rootValue);
  BinaryTree binary(root);
  // Loop
  while(1){
    char input;
    cout << "\nInsert (1)";
    cout << "\nFind  (2)\n> ";
    cin >> input;
    if(input == '1'){
      int value;
      cout << "Value: ";
      cin >> value;
      binary.insert(binary.getHead(), value);
    }
    else if(input == '2'){
      int value;
      cout << "Value: ";
      cin >> value;
      Node* ans;
      ans = binary.find(binary.getHead(), value);
    }

    // Print Tree
    cout << "1st Row: Left Leaves | 2nd Row: Head | 3rd Row: Right Leaves" << endl;
    if(binary.getHead()->left == NULL) cout << "No Left Leaves!\n";
    if(binary.getHead()->right == NULL) cout << "No Right Leaves!\n";
    binary.printTree(binary.getHead());
    cout << endl;
  }

  return 0;
}
