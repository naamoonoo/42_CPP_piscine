#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) {
	this->_name = name;
	this->_hit_point = 60;
	this->_max_hit_point = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_defence_reduction = 0;
	std::cout << "NinjaTrap " << name << " is born" << std::endl;
};

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap " << this->_name << " die" << std::endl;
};

NinjaTrap::NinjaTrap(NinjaTrap & other){
	*this = other;
	return ;
};

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const & rhs){
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

void	NinjaTrap::ninjaShoebox(NinjaTrap & other){
	std::cout << "ninja shoebox attack to " << other.getName() << std::endl;
};
void	NinjaTrap::ninjaShoebox(ScavTrap & other){
	std::cout << "ninja shoebox attack to " << other.getName() << std::endl;
};
void	NinjaTrap::ninjaShoebox(FragTrap & other){
	std::cout << "ninja shoebox attack to " << other.getName() << std::endl;
};
