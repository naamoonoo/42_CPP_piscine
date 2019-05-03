#ifndef SUPER_TRAP_H
# define SUPER_TRAP_H

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void) {}
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap & other);

		SuperTrap&	operator=(SuperTrap const & rhs);
};

#endif
