#include "task18.h"

int main()
{
	Circle<int> c(5);
	std::cout << c.area() << std::endl;
	Circle<float> c1(1.5);
	std::cout << c1.area() << std::endl;
	
	Rectangle<short> r(5, 5);
	std::cout << r.area() << std::endl;
	Rectangle<double> r1(2.5, 1.6);
	std::cout << r1.area() << std::endl;
}
