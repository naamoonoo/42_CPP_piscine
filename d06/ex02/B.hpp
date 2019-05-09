#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
public:
	B(void);
	B(const B &src);

	~B(void);

	B	&operator= (const B &rhs);
};

#endif
