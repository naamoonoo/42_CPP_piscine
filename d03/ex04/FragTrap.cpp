#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap " << name << " is born" << std::endl;
	this->_name = name;
	this->_hit_point = 100;
	this->_max_hit_point = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_punch_attack_damage = 5;
	this->_magic_attack_damage = 50;
	this->_curse_attack_damage = 10;
	this->_armor_defence_reduction = 5;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap " <<this->_name << " die" << std::endl;
};

FragTrap::FragTrap(FragTrap & other){
	*this = other;
	return ;
};

FragTrap&	FragTrap::operator=(FragTrap const & rhs){
	this->_name = rhs._name;
	this->_hit_point = rhs._hit_point;
	this->_max_hit_point = rhs._max_hit_point;
	this->_energy_points = rhs._energy_points;
	this->_max_energy_points = rhs._max_energy_points;
	this->_level = rhs._level;
	this->_melee_attack_damage = rhs._melee_attack_damage;
	this->_ranged_attack_damage = rhs._ranged_attack_damage;
	this->_punch_attack_damage = rhs._punch_attack_damage;
	this->_magic_attack_damage = rhs._magic_attack_damage;
	this->_curse_attack_damage = rhs._curse_attack_damage;
	this->_armor_defence_reduction = rhs._armor_defence_reduction;
	return *this;
};

void	FragTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << " attack " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	FragTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attack " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	FragTrap::punchAttack(std::string const & target){
	std::cout << this->_name << " attack " << target;
	std::cout << " at punch, causing " << this->_punch_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	FragTrap::magicAttack(std::string const & target){
	std::cout << this->_name << " attack " << target;
	std::cout << " at magic, causing " << this->_magic_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

void	FragTrap::curseAttack(std::string const & target){
	std::cout << this->_name << " attack " << target;
	std::cout << " at curse, causing " << this->_curse_attack_damage;
	std::cout << " points of damage!" << std::endl;
};

typedef	struct	s_dispatch_table
{
	void			(FragTrap::*attack)(std::string const &);
	unsigned int	(FragTrap::*getDamage)(void);
}				t_dp;

t_dp	FragTrap::_dp[] =
{
	{&FragTrap::rangedAttack, &FragTrap::getRangedAttackDamage},
	{&FragTrap::meleeAttack, &FragTrap::getMeleeAttackDamage},
	{&FragTrap::magicAttack, &FragTrap::getMagicAttackDamage},
	{&FragTrap::punchAttack, &FragTrap::getPunchAttackDamage},
	{&FragTrap::curseAttack, &FragTrap::getCurseAttackDamage},
	{NULL, NULL},
};

void	FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (this->_energy_points < 25)
		std::cout << "no more energy, need repair" << std::endl;
	else
	{
  		this->_attack_idx = rand() % 5;
		(this->*_dp[this->_attack_idx].attack)(target);
		this->_energy_points -= 25;
	}
};

unsigned int	FragTrap::get_vaulthunter_dot_exe_damage()
{
	return (this->*_dp[this->_attack_idx].getDamage)();
}

unsigned int	FragTrap::getMeleeAttackDamage() {
	return this->_melee_attack_damage;
};

unsigned int	FragTrap::getRangedAttackDamage() {
	return this->_ranged_attack_damage;
};

unsigned int	FragTrap::getMagicAttackDamage() {
	return this->_magic_attack_damage;
};

unsigned int	FragTrap::getPunchAttackDamage() {
	return this->_punch_attack_damage;
};

unsigned int	FragTrap::getCurseAttackDamage() {
	return this->_curse_attack_damage;
};
