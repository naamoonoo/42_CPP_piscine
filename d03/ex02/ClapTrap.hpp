#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hit_point;
		unsigned int	_max_hit_point;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_defence_reduction;

	public:
		ClapTrap(void) {
			std::cout << "ClapTrap construction called" << std::endl;
		}
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(ClapTrap & other);

		ClapTrap&	operator=(ClapTrap const & rhs);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		bool			checkIsAlive();
		std::string		getName();

		unsigned int	getHitPoint();
		unsigned int	getEnergyPoint();
		unsigned int	getMeleeAttackDamage();
		unsigned int	getRangedAttackDamage();
};


#endif
