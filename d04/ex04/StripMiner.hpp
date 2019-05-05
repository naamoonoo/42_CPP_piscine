#ifndef STRIP_MINER_H
# define STRIP_MINER_H

#include <iostream>
#include <string>
#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		virtual ~StripMiner();
		StripMiner(StripMiner & other);

		StripMiner&	operator=(StripMiner const & other);

		virtual void mine(IAsteroid* asteroid);
};

#endif
