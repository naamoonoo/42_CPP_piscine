#ifndef DEEP_CORE_MINER_H
# define DEEP_CORE_MINER_H

#include <iostream>
#include <string>
#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner();
		virtual ~DeepCoreMiner();
		DeepCoreMiner(DeepCoreMiner & other);

		DeepCoreMiner&	operator=(DeepCoreMiner const & other);

		virtual void mine(IAsteroid* asteroid);
};

#endif
