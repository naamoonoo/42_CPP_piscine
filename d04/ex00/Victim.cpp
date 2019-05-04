#include "Victim.hpp"

Victim::Victim(Victim & other){
	*this = other;
	return ;
};

Victim& Victim::operator=(Victim const & rhs){
	this->_name = rhs._name;
	return *this;
};

std::string	Victim::getName() const{
	return this->_name;
};

void	Victim::getPolymorphed() const{
	std::cout << getName() << " has been turned into a cute little sheep !" <<std::endl;
};

std::ostream&	operator<<(std::ostream& os, Victim const & src)
{
	os << "I'm " << src.getName() << " I'm NAME and I like otters !" << std::endl;
	return os;
};
