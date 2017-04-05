#include "tree.h"

Node* BinaryTree::find(Node* curr, int value){
  if(curr->left){
    find(curr->left, value);
  }

  if(curr->value == value){
    cout << "Found!\n" << endl;
    return curr;
  }

  if(curr->right){
    find(curr->right, value);
  }
}
