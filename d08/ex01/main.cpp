
#include <iostream>
#include "span.hpp"

int main()
{
	srand(time(0));
	Span sp = Span(100000);

	try
	{
		for(int i = 0; i<100000; i++)
		// for(int i = 0; i<1000000; i++)
		// for(int i = 0; i<1; i++)
			sp.addNumber(std::rand() % 1000000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
