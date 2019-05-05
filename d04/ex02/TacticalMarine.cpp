#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
};

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
	return ;
};

TacticalMarine::TacticalMarine(TacticalMarine & other){
	*this = other;
	return ;
};

TacticalMarine& TacticalMarine::operator=(TacticalMarine const & other){
	(void)other;
	return *this;
};

TacticalMarine* TacticalMarine::clone() const{
	// return &TacticalMarine(this);
	return new TacticalMarine();
};

void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT !" << std::endl;
};

void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with bolter *" << std::endl;
};

void TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with chainsword *" << std::endl;
};


// • clone() returns a copy of the current object

