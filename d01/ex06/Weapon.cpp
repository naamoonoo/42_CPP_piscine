#include "Weapon.hpp"

void	Weapon::setType(std::string type){
	this->_type = type;
};

std::string	Weapon::getType(){
	return this->_type;
};

