#include "Enemy.hpp"

Enemy::Enemy(Enemy & other){
	*this = other;
	return ;
};

Enemy&	Enemy::operator=(Enemy const & other){
	this->_type = other._type;
	this->_hp = other._hp;
	return *this;
};

std::string const Enemy::getType() const{
	return this->_type;
};

int Enemy::getHp() const{
	return this->_hp;
};

void Enemy::setHp(int hp){
	this->_hp = hp;
};

void Enemy::takeDamage(int damage){
	if (damage > 0)
	{
		if (this->_hp > damage)
			this->_hp -= damage;
		else
			this->_hp = 0;
	}
};
