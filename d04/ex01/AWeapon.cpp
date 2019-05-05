#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:_name(name), _apcost(apcost), _damage(damage) {
	return ;
};

AWeapon::~AWeapon(){
	return ;
};

AWeapon::AWeapon(AWeapon & other){
	*this = other;
	return ;
};

AWeapon&	AWeapon::operator=(AWeapon const & other){
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return *this;
};

std::string const AWeapon::getName() const{
	return this->_name;
};

int AWeapon::getAPCost() const{
	return this->_apcost;
};

int AWeapon::getDamage() const{
	return this->_damage;
};

void AWeapon::setAPCost(int apcost){
	this->_apcost = apcost;
};

void AWeapon::setDamage(int damage){
	this->_damage = damage;
};
