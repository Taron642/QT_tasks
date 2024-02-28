#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class SortingStrategy
{
	public:
		virtual std::vector<int> sort(std::vector<int> arr) = 0;

		virtual ~SortingStrategy(){}
};


class BubbleSort:public SortingStrategy
{
	public:
		std::vector<int> sort(std::vector<int> arr) override
		{
		        for(int i = 0; i < arr.size() - 1; ++i)
        		{
                		for(int j = 0; j < arr.size() - i - 1; ++j)
                		{
                        		if(arr[j] > arr[j + 1])
                        		{	
                	                int temp = arr[j];
	      				arr[j] = arr[j + 1];
                                	arr[j + 1] = temp;
                        		}
                		}
        		}	
        		return arr;
		}
};


class SelectionSort:public SortingStrategy
{
	public:
		std::vector<int> sort(std::vector<int> arr) override
		{
		        for(int i = 0; i < arr.size() - 1; ++i)
        		{
                		int index;
                		int min = arr[i];
                		for(int j = i + 1; j < arr.size() - 1; ++j)
                		{
                        		if(min > arr[j])
                        		{
                                		min = arr[j];
                                		index = j;
                        		}
                		}
                		int temp = arr[i];
                		arr[i] = arr[index];
         	        	arr[index] = temp;

        		}
			return arr;
		}

};

class FileHandler
{
	public:
		std::vector<int> readArrayFromFile(std::string i)
		{
			std::ifstream file(i), file1(i);
			if(!file.is_open())
			{
				std::cout << "error with reading" << std::endl; 
				std::vector<int> rm;
				return rm;
			}
			else
			{
				std::vector<int> v;
				int a;
				char ch;
				while(file >> ch && ch != '}')
				{
					std::cout << ch << " ";
					file1 >> a;				//0a kardum misht
					std::cout << a << " ";
					if(std::isdigit(ch))
					{
						v.push_back(a);
					}
				}
				file.close();
				return v;
			}
		}

		void saveArrayToFile(std::vector<int> v, std::string o)
		{
			std::ofstream file(o);
			if(!file.is_open())
			{
				std::cout << "error with save\n";
			}
			else
			{
				for(int i = 0; i < v.size(); ++i)
				{
					file << v[i] << " ";
				}
				file.close();
			}
		}
};

class SortingApplication
{
	public:
		void sortArrayInFile()
		{
			std::string i;
			std::cout << "Please enter the input file name: ";
			std::cin >> i;
                        std::string o;
                        std::cout << "Please enter the output file name: ";
                        std::cin >> o;
			int num;
			std::cout << "Please enter the sorting function number: ";
			std::cin >> num;
			if(num == 0)
				ss = new BubbleSort;
			else if(num == 1)
				ss = new SelectionSort;
			else
				return;

			fh.saveArrayToFile(ss->sort(fh.readArrayFromFile(i)), o);
			delete ss;
		}

	private:
		SortingStrategy* ss;
		FileHandler fh;		
};
