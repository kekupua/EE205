/*
By:			Sean Teramae
Login:		teramae8
Section:	1
*/

#include <iostream>
using namespace std;

int main() {
	int value1, value2;
	int *p1 = &value1, *p2 = &value2;

	cout << "Enter the first number: " << endl;
	cin >> value1;
	cout << "Enter the second number: " << endl;
	cin >> value2;

	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	cout << "First Number: " << *p1 << endl;
	cout << "Second Number: " << *p2 << endl;

	return 0;
}