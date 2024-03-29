#include <iostream>
#include "singlyLinked.h"
using namespace std;

// Append p to the end of the list
void SinglyLinkedList::append(SLink *p) {
	cout << "Append " << p->value << endl;
	if (head == NULL) {
		head = p;
	}
	if (tail != NULL) {
		tail->next = p;
	}
	p->next = NULL;
	tail = p;
	return;
}

// Insert n before p
void SinglyLinkedList::insert(SLink* n, SLink *p) {  //insert n before p
	cout << "Insert " << n->value << endl;
	SLink* curr = this->getHead();
	// If empty
  if(curr == NULL){
		append(n);
		return;
	}
	// If first node
	if(curr == p){
		setHead(n);
		n->next = p;
		return;
	}
  // Traverse to one node before p
  while(curr->next != p){
    curr = curr->next;
  }
	curr->next = n;
  n->next = p;
	return;
}

// Insert n after p
void SinglyLinkedList::add(SLink* p, SLink *n){
  cout << "Add " << n->value << endl;
  SLink* curr = this->getHead();
  if(curr == NULL) append(n);

  //Traverse to p
  while(curr != p){
    curr = curr->next;
  }
  n->next = curr->next;
  curr->next = n;
  return;
}

// Erase node at p
void SinglyLinkedList::erase(SLink *p) {
	cout << "Erase " << p->value << endl;
  SLink* curr = this->getHead();

	// If first node
	if(curr == p){
		setHead(p->next);
		delete[] p;
		return;
	}

  // Traverse to P
  while(curr->next != p){
    // If no other nodes
    if(curr->next == NULL) return;
    curr = curr->next;
  }
  curr->next = curr->next->next;
  delete[] p;
	return;
}

// Find node
SLink* SinglyLinkedList::find(const int& s){
  cout << "Find " << s << endl;
  SLink* curr = this->getHead();

  // Traverse to S
  while(curr){
		if(curr->value == s) return curr;
    curr = curr->next;
  }
  return NULL;
}

SLink* SinglyLinkedList::advance(int n){
  cout << "Get Element " << n+1 << endl;
  SLink* curr = this->getHead();

  // Traverse n
  for(int i = 0; i < n; ++i){
    curr = curr->next;
  }
  return curr;
}

int SinglyLinkedList::getSize(){
	SLink* curr = getHead();
	int count = 0;
	while(curr){
		++count;
		curr = curr->next;
	}
	return count;
}

void SinglyLinkedList::print_all(SLink* head) {
	while (head) {
		cout << head->value;
		if (head = head->next) cout << ", ";
	}
	cout << "\n";
}
