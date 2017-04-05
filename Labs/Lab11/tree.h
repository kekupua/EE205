#ifndef PRINT_H
#define PRINT_H
#include <queue>
#include <cstddef>
#include <iostream>
using namespace std;
struct Node {
  Node(int v): value(v){ left = NULL; right = NULL;}
  int value;
  Node *left;
  Node *right;
};

class BinaryTree {
public:
  BinaryTree(){ head = NULL;}
  BinaryTree(Node* root){
    head = root;
  }

  void insert(Node* curr, int value);
  Node* find(Node* curr, int value);
  void printTree(Node* curr);

  void setHead(Node* root){
    head = root;
  }
  Node* getHead(){
    return head;
  }

private:
  Node* head;
};

#endif
