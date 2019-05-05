#ifndef POWER_FIST_H
# define POWER_FIST_H

#include <iostream>
#include <string>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist() : AWeapon("Power Fist", 8, 50) {};
		virtual ~PowerFist() {};
		PowerFist(PowerFist & other);

		PowerFist&	operator=(PowerFist const & other);

		virtual void attack() const;
};

#endif
