#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

#include <iostream>
#include <string>

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant(SuperMutant & other);

		SuperMutant&	operator=(SuperMutant const & other);

		virtual void takeDamage(int);

};

#endif
