#include "span.hpp"

Span::Span(unsigned int n) : _n(n){
	return ;
};

Span::~Span(){
	return ;
};

Span::Span(Span const & rhs){
	*this = rhs;
};

Span&	Span::operator=(Span const & rhs){
	_n = rhs._n;
	vec.assign(rhs.vec.begin(), rhs.vec.end());
	return *this;
};

void	Span::addNumber(int n){
	if (vec.size() == _n)
		throw Span::OverTheLimitException();
	vec.push_back(n);
};

int Span::shortestSpan(){
	if (vec.size() <= 1)
		throw Span::NotEnoughValueException();

	std::sort(vec.begin(), vec.end());
	std::vector<int>::const_iterator it = vec.begin();
	it++;
	return *it - vec.front();
};

int Span::longestSpan(){
	if (vec.size() <= 1)
		throw Span::NotEnoughValueException();

	std::sort(vec.begin(), vec.end());
	return vec.back() - vec.front();
};
