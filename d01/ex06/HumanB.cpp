#include "HumanB.hpp"

void	HumanB::attack(){
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
};
