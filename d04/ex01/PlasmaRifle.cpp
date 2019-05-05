#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(PlasmaRifle & other){
	*this = other;
	return ;
};

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const & other){
	this->setAPCost(other.getAPCost());
	this->setDamage(other.getDamage());
	return *this;
};

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
};

