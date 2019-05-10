#ifndef EASY_FIND_H
#define EASY_FIND_H

#include <iostream>
#include <list>

template <typename T>
void easyfind(T const & container, int n)
{
	for(typename T::const_iterator it = container.begin() ; it != container.end(); ++it)
	{
		if (*it == n)
		{
			std::cout << "find " << n << std::endl;
			return ;
		}
	}
	throw std::range_error("NonExistExeption :: " +std::to_string(n) + " is not in here");
}

#endif
