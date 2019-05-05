#include "MiningBarge.hpp"

MiningBarge::MiningBarge(MiningBarge & other){
	*this = other;
};

MiningBarge& MiningBarge::operator=(MiningBarge const & other){
	(void)other;
	return *this;
};

void MiningBarge::equip(IMiningLaser*	laser){
	if (this->_idx == 4)
		return ;
	this->_lasers[this->_idx++] = laser;
};

void MiningBarge::mine(IAsteroid*	asteroid) const{
	int i = -1;
	while (++i < this->_idx)
		this->_lasers[i]->mine(asteroid);
};

