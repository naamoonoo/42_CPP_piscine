#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hit_point = 100;
	this->_max_hit_point = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_defence_reduction = 3;
	std::cout << "ScavTrap " << name << " is born" << std::endl;
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " die" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap & other){
	*this = other;
	return ;
};

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs){
	this->_name = rhs._name;
	this->_hit_point = rhs._hit_point;
	this->_max_hit_point = rhs._max_hit_point;
	this->_energy_points = rhs._energy_points;
	this->_max_energy_points = rhs._max_energy_points;
	this->_level = rhs._level;
	this->_melee_attack_damage = rhs._melee_attack_damage;
	this->_ranged_attack_damage = rhs._ranged_attack_damage;
	this->_armor_defence_reduction = rhs._armor_defence_reduction;
	return *this;
};

void	ScavTrap::challengeNewcomer(){
	std::string challendges[] = {
		"bring how water and boil it with ramen from korea",
		"make a computer language at least better than c++",
		"go to doctor and get a surgery which make you strong",
		"buy mac, ipad, and iphone without money!",
		"go to korea without taking airplane"
	};

	std::cout << challendges[rand() % 5] << std::endl;
};
