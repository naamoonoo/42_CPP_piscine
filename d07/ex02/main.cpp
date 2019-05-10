
#include <iostream>
#include <string>

#include "Array.tpp"

int main()
{
	Array<int> a;
	try
	{
		a[0] = 3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<std::string>b(5);
	try
	{
		std::string tmp[] = {"ab", "bc", "cd", "ef", "ge"};
		for (int i = 0; i< 5; i++)
			b[i] = tmp[i];
		for (int i = 0; i< 5; i++)
			std::cout << b[i] << std::endl;
		std::cout << "size : " << b.size() <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<double> c(10);
	try {
		std::cout << "Array of floats:				";
		for(int i = 0; i < 10; i++)
			c[i] = (i * 0.1 + 1) * 0.078;
		std::cout << std::endl;
		std::cout << "Element number 1:		" << c[1] << std::endl;
		std::cout << "Element number 10:		" << c[10] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	return (0);
}
