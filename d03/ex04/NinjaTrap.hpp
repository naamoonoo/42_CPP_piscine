#ifndef NINJA_TRAP_H
# define NINJA_TRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(void) {}
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap & other);

		NinjaTrap&	operator=(NinjaTrap const & rhs);

		void	ninjaShoebox(NinjaTrap & other);
		void	ninjaShoebox(ScavTrap  & other);
		void	ninjaShoebox(FragTrap  & other);
};

#endif
