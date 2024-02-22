#include <iostream>

void calc(float,float);

int main()
{
	float a, b;
	std::cin >> a >> b;
	calc(a,b);
}

void calc(float a, float b)
{
	std::cout << "a + b = " << a + b << std::endl;
        std::cout << "a - b = " << a - b << std::endl;
        std::cout << "a * b = " << a * b << std::endl;
	if(b)
        	std::cout << "a / b = " << a / b << std::endl;
	else
		std::cout << "Cannot be divided by 0 \n";
}
