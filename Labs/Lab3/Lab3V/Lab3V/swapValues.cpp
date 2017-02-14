/*
By:			Sean Teramae
Login:		teramae8
Section:	1
*/

#include <iostream>
using namespace std;

int main() {
	int value1, value2;

	cout << "Enter the first number: " << endl;
	cin >> value1;
	cout << "Enter the second number: " << endl;
	cin >> value2;

	value1 = value1 + value2;
	value2 = value1 - value2;
	value1 = value1 - value2;

	cout << "First Number: " << value1 << endl;
	cout << "Second Number: " << value2 << endl;

	return 0;
}