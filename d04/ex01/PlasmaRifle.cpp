#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage)
: AWeapon("Plasma Rifle", 21, 5) {
	return ;
};

PlasmaRifle::~PlasmaRifle(){
	return ;
};

PlasmaRifle::PlasmaRifle(PlasmaRifle & other) : PlasmaRifle(other){
	return ;
};

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const & other){
	// this->
};

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
};

