/* 
	By:			Sean Teramae
	Login:		teramae8
	Section:	1
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	
	// Read user input
	cout << "Please enter a N value: " << endl;
	try {
		cin >> n;
		if (n <= 0) throw 1;
	}
	catch (int number) {
		cout << "Invalid entry" << endl;
		return 0;
	}
	int* prime = new int[n+n];

	// Create list
	for (int i = 0; i <= n; ++i) {
		prime[i] = 0;
	}

	// Mark numbers that aren't prime
	for (int j = 2; j <= n; ++j) {
		if (prime[j] == 1) continue;
		int p = j;
		while (p+j < n) {
			prime[p + j] = 1;
			p += j;
		}
	}

	// Find all prime values
	cout << "Prime Numbers up to N: ";
	for (int k = 2; k < n; ++k) {
		if (prime[k] == 0) {
			cout << k << " ";
		}
	}
	cout << endl;

	delete[] prime;
	return 0;
}