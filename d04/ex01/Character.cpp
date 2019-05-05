#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL) {
	return ;
};

Character::~Character(){
	return ;
};

void Character::recoverAP(){
	if (this->_ap > 30)
		this->_ap = 40;
	else
		this->_ap += 10;
	std::cout << "AP is recoverd, now it's " << this->_ap << std::endl;
};

void Character::equip(AWeapon* weapon){
	this->_weapon = weapon;
};

void Character::attack(Enemy* enemy){
	if (enemy->getHp() == 0)
	{
		std::cout << enemy->getType() << "is already dead, find new enemy" << std::endl;
		return;
	}
	if (this->_ap < this->getWeapon()->getAPCost())
	{
		std::cout << "not enough AP, need recover" << std::endl;
		return ;
	}
	this->_ap -= this->getWeapon()->getAPCost();
	std::cout << this->getName() << " attacks " << enemy->getType()
		<< "with a " << this->getWeapon()->getName() << std::endl;
	this->getWeapon()->attack();
	enemy->takeDamage(this->getWeapon()->getDamage());
	if (enemy->getHp() == 0)
		delete enemy;
};

std::string const Character::getName() const{
	return this->_name;
};

int		Character::getAp(){
	return this->_ap;
};

AWeapon* Character::getWeapon(){
	return this->_weapon;
};

std::ostream&	operator<<(std::ostream& os, Character & src){
	os << src.getName() << " has " << src.getAp() << " AP and ";
	if (src.getWeapon() != NULL)
		os << "wields a " << src.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return os;
};
