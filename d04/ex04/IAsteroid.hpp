#ifndef I_ASTEROID_H
# define I_ASTEROID_H

class IMiningLaser;
class DeepCoreMiner;
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include <iostream>
#include <string>

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(IMiningLaser *) const = 0;
		virtual std::string beMined(DeepCoreMiner *) const = 0;

		virtual std::string getName() const = 0;
};

#endif
