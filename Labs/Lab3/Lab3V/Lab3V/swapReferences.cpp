/*
By:			Sean Teramae
Login:		teramae8
Section:	1
*/

#include <iostream>
using namespace std;

int main() {
	int value1, value2;
	int &p1 = value1, &p2 = value2;

	cout << "Enter the first number for p1: " << endl;
	cin >> value1;
	cout << "Enter the second number for p2: " << endl;
	cin >> value2;

	int &temp = p1;
	p1 = p2;
	p2 = temp;

	cout << "Pointer 1: " << p1 << endl;
	cout << "Pointer 2: " << p2 << endl;

	return 0;
}