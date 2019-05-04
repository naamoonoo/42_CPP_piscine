#include "Peon.hpp"

Peon::Peon(Peon & other) : Victim(other){
	return ;
};

Peon& Peon::operator=(Peon const & rhs){
	this->_name = rhs._name;
	return *this;
};

void	Peon::getPolymorphed() const{
	std::cout << getName() << " has been turned into a pink pony !" <<std::endl;
};

std::ostream&	operator<<(std::ostream& os, Peon const & src)
{
	os << "I'm " << src.getName() << " I'm NAME and I like otters !" << std::endl;
	return os;
};
