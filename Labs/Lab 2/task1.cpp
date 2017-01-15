// EE205Lab2.cpp : figure out datatype sizes, create custom datatypes
//  based on http://en.cppreference.com/w/cpp/language/sizeof

#include <iostream>

struct Empty {
};

struct Base {
	int a;
};

struct Derived : Base {
	int b;
};

struct Bit {
	unsigned bit : 1;
};

int main()
{
	Empty e;
	Derived d;
	Base& b = d;
	Bit bit;
	int i1 = 0x12345678;
	int i2 = -1;
	char c = 'a';
	float f = 22.625;   //p.52 of the book
	double db = 1.2;
	const int N = 10;
	int a[N];

	//ADD CODE TO INITIALZE THE ARRAY USING A LOOP SO THAT EVERY SLOT HAS 0x12345678
  for(int i = 0; i < N; ++i){
    a[i] = 0x12345678;
  }

	int* p1 = &i1;
	int* p2 = &i2;
	float *p3 = &f;
	double *p4 = &db;
  char* p5 = &c;

  // Print sizeof primitive datatypes
	std::cout << "datatype \t size in bytes\n";
	std::cout << "-------------------------------\n";
	std::cout << "integer: \t\t " << sizeof(int) << '\n';
  std::cout << "-------------------------------\n";
	std::cout << "float: \t\t\t " << sizeof(float) << '\n';
  std::cout << "-------------------------------\n";
	std::cout << "double: \t\t " << sizeof(double) << '\n';
  std::cout << "-------------------------------\n";
	std::cout << "short: \t\t\t " << sizeof(short) << '\n';
  std::cout << "-------------------------------\n";
	std::cout << "boolean: \t\t " << sizeof(bool) << '\n';
  std::cout << "-------------------------------\n";
	std::cout << "char: \t\t\t " << sizeof(char) << '\n';

    std::cout << "-------------------------------\n"
		<< "array of 10 int:\t " << sizeof(int[10]) << '\n';
    std::cout << "-------------------------------\n"
		<< "array of 10 int (2):\t " << sizeof a << '\n';
    std::cout << "-------------------------------\n"
		<< "length of array of 10 int: \t" << ((sizeof a) / (sizeof *a)) << '\n';
    std::cout << "-------------------------------\n"
		<< "length of array of 10 int (2): \t" << ((sizeof a) / (sizeof a[0])) << '\n';
    std::cout << "-------------------------------\n"
		<< "pointer: \t\t " << sizeof &e << '\n';
    std::cout << "-------------------------------\n"
		//            << "size of function: "                 << sizeof(void())    << '\n'  // error
		//            << "size of incomplete type: "          << sizeof(int[])     << '\n'  // error
		//            << "size of bit field: "                << sizeof bit.bit    << '\n'  // error
		<< "empty class: \t\t " << sizeof e << '\n';
    std::cout << "-------------------------------\n"
		<< "Derived: \t\t " << sizeof d << '\n';
    std::cout << "-------------------------------\n"
		<< "Derived through Base: \t " << sizeof b << '\n';

}
