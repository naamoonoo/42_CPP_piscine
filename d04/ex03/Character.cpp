#include "Character.hpp"


Character::Character(std::string name) : _idx(0), _name(name){
	return ;
};

Character::~Character() {
	int i = -1;
	while (++i < this->_idx)
		delete _m[i];
	return ;
}

Character::Character(Character & other){
	*this = other;
	return ;
};

Character&	Character::operator=(Character const & other){
	this->_idx = other._idx;
	this->_name = other._name;
	return *this;
};

std::string const & Character::getName() const{
	return this->_name;
};

void Character::equip(AMateria* m){
	if (this->_idx == 4)
		return ;
	this->_m[this->_idx++] = m;
};

void Character::unequip(int idx){
	if (idx > this->_idx || idx > 3)
		return ;
	this->_m[idx] = NULL;
};

void Character::use(int idx, ICharacter& target){
	if (idx > this->_idx || idx >= 4)
		return ;
	this->_m[idx]->use(target);
};

