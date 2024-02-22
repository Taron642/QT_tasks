#include <iostream>

void bab_sort(int* arr,int size)
{
	for(int i = 0; i < size - 1; ++i)
	{
		for(int j = 0; j < size - i - 1; ++j)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < size - 1; ++i)
		std::cout << arr[i] << " ";
}


void sort(int* arr, int size)
{
	for(int i = 0; i < size - 1; ++i)
	{
		int index;
		int min = arr[i];
		for(int j = i + 1; j < size - 1; ++j)
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
	for(int i = 0; i < size - 1; ++i)
               std::cout << arr[i] << " ";
}


int main()
{
	void (*ptr[])(int*,int) = {&bab_sort, &sort};

	int arr[] = {1, 5, -8, 6, -9, -5, -1, 3, 5};

	int n;
	std::cout << "enter number sort function: ";
	std::cin >> n;

	switch(n)
	{
		case 0:
			ptr[0](arr,sizeof(arr)/sizeof(arr[0]));
			break;
		case 1:
			ptr[1](arr,sizeof(arr)/sizeof(arr[0]));
                        break;
		default:
			std::cout << "novu";
	}
}
