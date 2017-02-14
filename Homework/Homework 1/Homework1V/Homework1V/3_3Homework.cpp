#include <iostream>
#include <string>

int main() {
	int m, n;
	
	try {
		std::cout << "Please enter a grid size (seperated by white space)" << std::endl;
		std::cin >> m >> n;
		std::cout << m << n << std::endl;
	
		if (m < 4 || n < 4) throw "F";
		else throw 20;
	}

	catch (int pass) {
		std::cout << pass << std::endl;
	}
	catch (char fail) {
		std::cout << fail << std::endl;
	}

	return 0;
}