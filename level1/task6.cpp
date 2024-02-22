#include <iostream>

int main()
{
	int a = 5;
	int* p = &a;
	int& ra = a;

	std::cout << "*p = " << *p << ", p = " << p << ", &p = " << &p << std::endl;
        std::cout << "ra = " << ra << ", &ra = " << &ra << std::endl;
        std::cout << "a = " << a << ", &a = " << &a << std::endl;

	ra = 15;
	std::cout << "*p = " << *p << ", ra " << ra << ", a = " << a << std::endl;

	*p = 10;
	std::cout << "*p = " << *p << ", ra " << ra << ", a = " << a << std::endl;
	
	a = 20;
        std::cout << "*p = " << *p << ", ra " << ra << ", a = " << a << std::endl;

	std::cout << "size_p = " << sizeof(p) << ", size_ra =  " << sizeof(ra) << ", size_a = " << sizeof(a) << std::endl;

}
