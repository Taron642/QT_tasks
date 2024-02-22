#include <iostream>

int max(int arr[],int size)
{
	int max = arr[0];
	for(int i = 1; i < size; ++i)
	{
		if(max > arr[i])
			max = arr[i];
	}
	return max;
}

int min(int arr[],int size)
{
        int min = arr[0];
        for(int i = 1; i < size; ++i)
        {
                if(min < arr[i])
                        min = arr[i];
        }
        return min;
}

double middle(int arr[],int size)
{
        int sum = 0;
        for(int i = 0; i < size; ++i)
        {
		sum += arr[i];
        }
        return sum / size;
}

int str_len(const std::string a)
{
	int num = 0;
	while(a[num])
		++num;
	return num;
}

std::string operator+ (const std::string a, const std::string b)
{
        std::string ab;

	int n = str_len(a);
	for(int i = 0; i < n; ++i)
	{
		ab[i] = a [i];
	}

	int m = str_len(b);
        for(int i = 0; i < m; ++i)
        {
                ab[i + n] = b [i];
        }
	
	ab[n + m] = '\0';

	return ab;
}

int main()
{
	int arr[] = {1, -5, 5, 9, -9, 4, 5};
	std::cout << max(arr,sizeof(arr)/sizeof(arr[0])) << std::endl;
	std::cout << min(arr,sizeof(arr)/sizeof(arr[0])) << std::endl;
	std::cout << middle(arr,sizeof(arr)/sizeof(arr[0])) << std::endl;
	
	std::string x = "abcde";
	std::string y = "fghijk";
	std::cout << str_len(x) << " " << str_len(y) << std::endl;
	
	std::string xy;
	std::cout << sizeof(x);	
	std::cout << y[4] << std::endl;

}
