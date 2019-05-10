#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
		std::vector<int> vec;
		unsigned int	_n;

		Span() {};

	public:
		Span(unsigned int n);
		~Span();
		Span(Span const & rhs);
		Span&	operator=(Span const & rhs);

		void	addNumber(int n);
		int shortestSpan();
		int longestSpan();

		struct OverTheLimitException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "exception :: over the limit";
			}
		};

		struct NotEnoughValueException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "exception :: not enough value ";
			}
		};

};


#endif
