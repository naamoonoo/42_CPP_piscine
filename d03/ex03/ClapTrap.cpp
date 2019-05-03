#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "ClapTrap construction called" << std::endl;
};

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destruction called" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap & other){
	*this = other;
	return ;
};

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs){
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

void	ClapTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << " attack " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	ClapTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attack " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount){
	amount -= this->_armor_defence_reduction;
	std::cout << this->_name << " get ";
	std::cout << amount << " damage!" << std::endl;
	if (this->_hit_point > amount)
	{
		this->_hit_point -= amount;
		std::cout << this->_name << " now has " << this->_hit_point << " HP" << std::endl;
	}
	else
	{
		this->_hit_point = 0;
		std::cout << this->_name << " has no more HP" << std::endl;
	}
};

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->_hit_point + amount < this->_max_hit_point)
	{
		std::cout <<  this->_name << " get ";
		std::cout << amount << " repair!" << std::endl;
		this->_hit_point += amount;
		std::cout << this->_name << " now has " << this->_hit_point << " HP" << std::endl;
	}
	else
	{
		this->_hit_point = this->_max_hit_point;
		std::cout << this->_name << "'s HP is full" << std::endl;
	}
};

bool	ClapTrap::checkIsAlive(){
	return (this->_hit_point > 0);
};

std::string	ClapTrap::getName(){
	return this->_name;
};

unsigned int	ClapTrap::getHitPoint() {
	return this->_hit_point;
};

unsigned int	ClapTrap::getEnergyPoint() {
	return this->_energy_points;
};

unsigned int	ClapTrap::getMeleeAttackDamage() {
	return this->_melee_attack_damage;
};

unsigned int	ClapTrap::getRangedAttackDamage() {
	return this->_ranged_attack_damage;
};
