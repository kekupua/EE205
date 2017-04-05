#include <iostream>
#include "tree.h"
using namespace std;


void BinaryTree::printTree(Node* curr){
  if(!curr){
    cout << "Empty Tree!" << endl;
  }
  else{
    // Print all left nodes
    if(curr->left){
      printTree(curr->left);
    }

    if(curr == head){
      if(head->left) cout << endl;
      cout << curr->value;
      if(head->right) cout << endl;
    }
    else cout << curr->value << " ";

    // Print all right nodes
    if(curr->right){
      printTree(curr->right);
    }
    return;
  }
  return;
}
