#include "SuperMutant.hpp"


SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
};

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
};

SuperMutant::SuperMutant(SuperMutant & other) {
	*this = other;
	return ;
};

SuperMutant&	SuperMutant::operator=(SuperMutant const & other){
	this->setHp(other.getHp());
	return *this;
};

void SuperMutant::takeDamage(int damage){
	damage -= 3;
	if (damage > 0)
	{
		if (this->getHp() > damage)
			this->setHp(this->getHp() - damage);
		else
			this->setHp(0);
	}
	// Is there any smart way??
};
