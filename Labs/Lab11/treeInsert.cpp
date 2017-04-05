#include "tree.h"

void BinaryTree::insert(Node* curr, int value){
  int flag = 0;
  queue<Node*> call;
  call.push(curr);
  if(curr == head){
    if(head == NULL){
      Node* insert = new Node(value);
      head = insert;
    }
    // Insert Left
    if(value < curr->value && curr->left == NULL){
      Node* insert = new Node(value);
      head->left = insert;
    }
    else if(value < curr->value){
      insert(curr->left, value);
    }
    // Insert Right
    if(value >= curr->value && curr->right == NULL){
      Node* insert = new Node(value);
      head->right = insert;
    }
    else if(value >= curr->value){
      insert(curr->right, value);
    }
    return;
  }
  // if(!curr->left){
  //   Node* leaf = new Node(value);
  //   curr->left = leaf;
  //   return;
  // }
  // else if(!curr->right){
  //   Node* leaf = new Node(value);
  //   curr->right = leaf;
  //   return;
  // }
  // else{
  //   insert(curr->left, value);
  //   insert(curr->right, value);
  // }

  while(!call.empty()){
    Node* temp = call.front();
    call.pop();
    if(!temp->left){
      Node* leaf = new Node(value);
      temp->left = leaf;
      return;
    }
    else if(!temp->right){
      Node* leaf = new Node(value);
      temp->right = leaf;
      return;
    }
    else{
      if(temp->left) call.push(temp->left);
      if(temp->right) call.push(temp->right);
    }
  }

  return;
}
