#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name) {
	std::cout << "ScavTrap " << name << " is born" << std::endl;
	this->_hit_point = 100;
	this->_max_hit_point = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_defence_reduction = 5;
	this->_is_alive = true;
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
	this->_is_alive = rhs._is_alive;
	return *this;
};

void	ScavTrap::rangedAttack(std::string const & target){
	std::cout << "SC4G-TP " << this->_name << " attack " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	ScavTrap::meleeAttack(std::string const & target){
	std::cout << "SC4G-TP " << this->_name << " attack " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	ScavTrap::takeDamage(unsigned int amount){
	amount -= this->_armor_defence_reduction;
	std::cout << "SC4G-TP " << this->_name << " get ";
	std::cout << amount << " damage!" << std::endl;
	if (this->_hit_point > amount)
	{
		this->_hit_point -= amount;
		std::cout << this->_name << " now has " << this->_hit_point << " HP" << std::endl;
	}
	else
	{
		this->_is_alive = false;
		std::cout << this->_name << " has no more HP" << std::endl;
	}
};

void	ScavTrap::beRepaired(unsigned int amount){

	if (this->_hit_point + amount < this->_max_hit_point)
	{
		this->_hit_point += amount;
		std::cout << this->_name << " now has " << this->_hit_point << " HP" << std::endl;
	}
	else
	{
		this->_hit_point = this->_max_hit_point;
		std::cout << this->_name << "'s HP is full" << std::endl;
	}
	std::cout << "SC4G-TP " << this->_name << " get ";
	std::cout << amount << " repair!" << std::endl;
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

std::string	ScavTrap::getName(){
	return this->_name;
};

unsigned int	ScavTrap::getHitPoint() {
	return this->_hit_point;
};

unsigned int	ScavTrap::getEnergyPoint() {
	return this->_energy_points;
};

unsigned int	ScavTrap::getMeleeAttackDamage() {
	return this->_melee_attack_damage;
};

unsigned int	ScavTrap::getRangedAttackDamage() {
	return this->_ranged_attack_damage;
};
