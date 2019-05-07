#include "Intern.hpp"

Intern::Intern()
{
	return;
};

Intern::~Intern()
{
	return;
};

Intern::Intern(Intern &other)
{
	*this = other;
	return;
};

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
};

// std::ostream &operator<<(std::ostream &os, const Intern &src)
// {
// 	os << src.getName() << ", Intern grade " << src.getGrade()
// 	   << std::endl;
// 	return (os);
// }
