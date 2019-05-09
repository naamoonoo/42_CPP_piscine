#include "B.hpp"

B::B(void)
{
	return ;
}

B::B(const B &src)
{
	*this = src;
	return ;
}

B::~B(void)
{
	return ;
}

B
&B::operator= (const B &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
