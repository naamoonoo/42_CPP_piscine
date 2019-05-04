#ifndef PLASMA_RIFLE_H
# define PLASMA_RIFLE_H

#include <iostream>
#include <string>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle() {};
		PlasmaRifle(std::string const & name, int apcost, int damage);
		virtual ~PlasmaRifle();
		PlasmaRifle(PlasmaRifle & other);

		PlasmaRifle&	operator=(PlasmaRifle const & other);

		virtual void attack() const;
};

#endif
