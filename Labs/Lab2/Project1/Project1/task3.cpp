#include <iostream>
#include <climits>


// MAX signed int 2147483647
// MAX unsigned int 4294967295

int main() {
	int n;
	n = 2;

	for (int i = 1; i < 20; i++) {
		std::cout << n << '\n';
		n *= 10;
	}

	std::cout << "\n\n";
	n = INT_MAX - 3;
	std::cout << "max int is " << INT_MAX << '\n';

	for (int i = 1; i < 10; i++) {
		std::cout << n << '\n';
		n++;
	}
	return 0;
}