#include <iostream>

int main()
{
	int intager = 123;
	char character = 'A';
	bool boolean = true;
	float pi = 3.14;
	double e = 2.71;

	std::cout << "int = " << intager << std::endl;
	std::cout << "char = " << character << std::endl;
	std::cout << "bool = " << std::boolalpha << boolean << std::endl;
	std::cout << "pi = " << pi << std::endl;
	std::cout << "e = " << e << std::endl;

	return 0;
}
