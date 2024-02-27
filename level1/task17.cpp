#include <iostream>
#include "task16.h"

int main()
{
	try{
		Shape sh;
		Circle c;
		Rectangle r;

	}
	catch(const float a)
	{
		std::cout << "error with default calls" << std::endl;
	}

	try{
		Circle c;
		Shape* ptr = &c;
		ptr->area();
	}
	catch(const float a)
	{
		std::cout << "error with call area of Cricle " << std::endl;
	}
}
