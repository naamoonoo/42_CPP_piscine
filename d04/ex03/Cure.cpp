#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	return ;
};

Cure::~Cure(){
	return ;
};

Cure::Cure(Cure & other){
	*this = other;
	return ;
};

Cure&	Cure::operator=(Cure const & other){
	this->xp_ = other.xp_;
	return *this;
};

std::string const & Cure::getType() const{
	return this->_type;
};

unsigned int Cure::getXP() const{
	return this->xp_;
};

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->xp_ += 10;
};

Cure* Cure::clone() const {
	return new Cure();
};
