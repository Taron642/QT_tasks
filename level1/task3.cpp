#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	if(num)
	{
		if(num > 0)
		{
			std::cout << "positive\n"; 
		}
		else
			std::cout << "negative\n";

	}
	else
		std::cout << "zero\n";

	std::cout << "assign grade: ";
	std::cin >> num;
	switch(num)
	{
		case (90...100):
			std::cout << "A\n";
			break;
		case 80...89:
                        std::cout << "B\n";
			break;
		case 70...79:
                        std::cout << "C\n";
			break;
		case 60...69:
                        std::cout << "D\n";
			break;
		default:
			std::cout << "Insufficient grade\n";

	}

	for(int i = 1; i <= 10; ++i)
		std::cout << i << " ";
	std::cout << "\n";

	return 0;
}
