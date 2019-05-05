#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include <iostream>
#include <string>

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(RadScorpion & other);

		RadScorpion&	operator=(RadScorpion const & other);

};

#endif
