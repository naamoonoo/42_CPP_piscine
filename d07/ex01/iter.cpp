#include <iostream>
#include <string>

template <typename T>
void	iter(T * arr, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void addOne(T & ele)
{
	ele += 1;
}

template <typename T>
void printOut(T & ele)
{
	std::cout << "print : " << ele << std::endl;
}

int main()
{
	int arr[] = {1,2,3,4,5};
	size_t len= sizeof(arr) / sizeof(int);
	iter(arr, len, printOut);
	std::cout << "---------------------------------------------" << std::endl;
	iter(arr, len, addOne);
	iter(arr, len, printOut);

	std::cout << "---------------------------------------------" << std::endl;
	std::string arr_s[] = {"hello", "c++", "piscine", "will", "be", "end"};
	size_t len_s = sizeof(arr) / sizeof(int);
	iter(arr_s, len_s, printOut);
	std::cout << "---------------------------------------------" << std::endl;
}
