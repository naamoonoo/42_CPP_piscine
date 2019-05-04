#include "Sorcerer.hpp"

Sorcerer::Sorcerer(Sorcerer & other){
	*this = other;
	return ;
};

Sorcerer& Sorcerer::operator=(Sorcerer const & rhs){
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
};

void	Sorcerer::polymorph(Victim const & victim) const{
	victim.getPolymorphed();
};

std::string	Sorcerer::getName() const{
	return this->_name;
};

std::string	Sorcerer::getTitle() const{
	return this->_title;
};


std::ostream&	operator<<(std::ostream& os, Sorcerer const & src)
{
	os << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies !" << std::endl;
	return os;
};
