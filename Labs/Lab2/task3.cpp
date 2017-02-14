#include <iostream>
#include <climits>


// MAX signed int 2147483647
// MAX unsigned int 4294967295

int main() {
	int n;
	n = 2;
	
	// Attempt to hit max int
	for (int i = 1; i < 20; i++) {
		std::cout << n << '\n';
		n *= 10;
	}
	// Fails due to overflow

	std::cout << "\n\n";
	n = INT_MAX - 3;
	
	// Print the actual max int value
	std::cout << "max int is " << INT_MAX << '\n';

	// Attempt to get max int value again
	for (int i = 1; i < 10; i++) {
		std::cout << n << '\n';
		n++;
	}
	// Fails due to overflow

	return 0;
}