#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void) {}
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap & other);

		ScavTrap&	operator=(ScavTrap const & rhs);

		void	challengeNewcomer();
};

#endif
