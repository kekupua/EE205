#include <iostream>
#include <string>
#include <vector>
#include "singlyLinked.h"
#include "doublyLinked.h"
using namespace std;

int main(){
	SinglyLinkedList s;
	DoublyLinkedList d;

  DLink d4(40, NULL, NULL);
	DLink d3(30, NULL, NULL);
	DLink d2_5(25,NULL,NULL);
	DLink d2(20, NULL, &d3);
	DLink d1(10, NULL, &d2);
	SLink s5(50, NULL);
	SLink s3(30, NULL);
	SLink s2(20, &s3);
	SLink s1_5(15,NULL);
	SLink s1(10, &s2);

	// Create S list
	s.append(&s1);
	s.append(&s2);
	s.append(&s3);

	// Test S functions
	s.print_all(s.getHead());
	s.insert(&s1_5,&s2);
	s.print_all(s.getHead());
	s.add(&s3,&s5);
	s.print_all(s.getHead());
	s.erase(&s2);
	s.print_all(s.getHead());
	SLink* sFound = s.find(30);
	cout << "Found " << sFound->value << endl;
	SLink* sAdvance = s.advance(3);
	cout << "Fourth Element " << sAdvance->value << endl; //n+1 element name ;)
	cout << endl << endl;

	// Create D list
	d.append(&d1);
	d.append(&d2);
	d.append(&d3);

	// Test D functions
	d.print_all(d.getHead());
	d.insert(&d2_5,&d3);
	d.print_all(d.getHead());
	d.add(&d3,&d4);
	d.print_all(d.getHead());
	d.erase(&d2);
	d.print_all(d.getHead());
	DLink* dFound = d.find(25);
	cout << "Found " << dFound->value << endl;
	DLink* dAdvance = d.advance(3);
	cout << "Fourth Element " << dAdvance->value << endl; //n+1 element name ;)

    return 0;
}
