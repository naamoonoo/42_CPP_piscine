#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>
#include <string>

typedef	struct	s_dispatch_table t_dp;

class FragTrap
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
		unsigned int	_punch_attack_damage;
		unsigned int	_magic_attack_damage;
		unsigned int	_curse_attack_damage;
		unsigned int	_armor_defence_reduction;
		unsigned int	_attack_idx;
		static t_dp		_dp[];

	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap & other);
		FragTrap&	operator=(FragTrap const & rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	magicAttack(std::string const & target);
		void	punchAttack(std::string const & target);
		void	curseAttack(std::string const & target);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std::string const & target);
		unsigned int	get_vaulthunter_dot_exe_damage();

		bool			checkIsAlive();

		std::string		getName();

		unsigned int	getHitPoint();
		unsigned int	getEnergyPoint();
		unsigned int	getMeleeAttackDamage();
		unsigned int	getRangedAttackDamage();
		unsigned int	getMagicAttackDamage();
		unsigned int	getPunchAttackDamage();
		unsigned int	getCurseAttackDamage();


};

#endif
