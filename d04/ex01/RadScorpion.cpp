#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
};

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
};

RadScorpion::RadScorpion(RadScorpion & other){
	*this = other;
	return ;
};

RadScorpion&	RadScorpion::operator=(RadScorpion const & other){
	this->setHp(other.getHp());
	return *this;
};

