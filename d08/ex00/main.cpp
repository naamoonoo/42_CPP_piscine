#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	try
	{
		//empty
		std::list<int>	lst;
		easyfind(lst, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		// {3, 3, 3}
		std::list<int>	lst2(3, 3);
		easyfind(lst2, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		// { 4 4 4 }
		std::list<int>	lst3(3, 4);
		easyfind(lst3, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		int ints[] = {16,2,77,29};
		std::list<int>	lst4 (ints, ints + sizeof(ints) / sizeof(int) );
		easyfind(lst4, 77);
		easyfind(lst4, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		//empty
		std::vector<int>	lst;
		easyfind(lst, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		// {3, 3, 3}
		std::vector<int>	lst2(3, 3);
		easyfind(lst2, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		// { 4 4 4 }
		std::vector<int>	lst3(3, 4);
		easyfind(lst3, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		int ints[] = {16,2,77,29};
		std::vector<int>	lst4 (ints, ints + sizeof(ints) / sizeof(int) );
		easyfind(lst4, 77);
		easyfind(lst4, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}
