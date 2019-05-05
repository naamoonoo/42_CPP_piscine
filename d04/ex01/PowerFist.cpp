#include "PowerFist.hpp"

PowerFist::PowerFist(PowerFist & other) {
	*this = other;
};

PowerFist&	PowerFist::operator=(PowerFist const & other){
	this->setAPCost(other.getAPCost());
	this->setDamage(other.getDamage());
	return *this;
};

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM!" << std::endl;
};

