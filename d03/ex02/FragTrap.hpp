#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

typedef	struct	s_dispatch_table t_dp;

class FragTrap : public ClapTrap
{
	private:
		unsigned int	_punch_attack_damage;
		unsigned int	_magic_attack_damage;
		unsigned int	_curse_attack_damage;
		unsigned int	_attack_idx;
		static t_dp		_dp[];

	public:
		FragTrap(void) {};
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap & other);

		FragTrap&	operator=(FragTrap const & rhs);

		void	magicAttack(std::string const & target);
		void	punchAttack(std::string const & target);
		void	curseAttack(std::string const & target);

		void	vaulthunter_dot_exe(std::string const & target);
		unsigned int	get_vaulthunter_dot_exe_damage();

		unsigned int	getMagicAttackDamage();
		unsigned int	getPunchAttackDamage();
		unsigned int	getCurseAttackDamage();


};

#endif
