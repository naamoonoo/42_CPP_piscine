#ifndef I_MINING_LASER_H
# define I_MINING_LASER_H

class IAsteroid;
#include "IAsteroid.hpp"
#include <iostream>
#include <string>

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {};
		virtual void mine(IAsteroid* asteroid) = 0;
};

#endif
