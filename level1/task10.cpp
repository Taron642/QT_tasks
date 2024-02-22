#include <iostream>
#include <fstream>

int main()
{
	char text[100];

	std::ofstream filee("text.txt");
	filee << "Aram Abrahamyan\n" << "Syuzi Avetisyan";
	filee.close();	

	std::ifstream file("text.txt");
	if(!file.is_open())
	{
		std::cout << "error\n";
	}
	else
	{
		for(int i = 0; i < 2; ++i)
		{
			file.getline(text,100);
			std::cout << text << std::endl;
		}
	}

}
