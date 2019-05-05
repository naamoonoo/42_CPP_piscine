#include "AMateria.hpp"


AMateria::AMateria(std::string const & type) :_type(type), xp_(0) {
	return ;
};

AMateria::~AMateria(){
	return ;
};

AMateria::AMateria(AMateria & other){
	*this = other;
	return ;
};

AMateria&	AMateria::operator=(AMateria const & other){
	this->xp_ = other.xp_;
	return *this;
};

std::string const & AMateria::getType() const{
	return this->_type;
};

unsigned int AMateria::getXP() const{
	return this->xp_;
};
