#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) {
	this->_name = name;
	this->_hit_point = 100;
	this->_max_hit_point = 100;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 20;
	this->_punch_attack_damage = 5;
	this->_magic_attack_damage = 50;
	this->_curse_attack_damage = 10;
	this->_armor_defence_reduction = 5;

	std::cout << "SuperTrap " << name << " is born" << std::endl;
};

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap " << this->_name << " die" << std::endl;
};

SuperTrap::SuperTrap(SuperTrap & other){
	*this = other;
	return ;
};

SuperTrap&	SuperTrap::operator=(SuperTrap const & rhs){
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
