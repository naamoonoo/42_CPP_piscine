#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <string>
#include <iostream>

class ScavTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_point;
		unsigned int	_max_hit_point;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_defence_reduction;
		bool			_is_alive;

	public:
		ScavTrap(void) {}
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap & other);
		ScavTrap&	operator=(ScavTrap const & rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer();

		std::string		getName();

		unsigned int	getHitPoint();
		unsigned int	getEnergyPoint();
		unsigned int	getMeleeAttackDamage();
		unsigned int	getRangedAttackDamage();
};

#endif
