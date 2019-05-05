#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	return ;
};

Ice::~Ice(){
	return ;
};

Ice::Ice(Ice & other){
	*this = other;
	return ;
};

Ice&	Ice::operator=(Ice const & other){
	this->xp_ = other.xp_;
	return *this;
};

std::string const & Ice::getType() const{
	return this->_type;
};

unsigned int Ice::getXP() const{
	return this->xp_;
};

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->xp_ += 10;
};

Ice* Ice::clone() const {
	return new Ice();
};
