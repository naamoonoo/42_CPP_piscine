#ifndef MINING_BARGE_H
# define MINING_BARGE_H

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge
{
	private:
		IMiningLaser*	_lasers[4];
		int				_idx;
	public:
		MiningBarge() : _idx(0) {};
		~MiningBarge() {};
		MiningBarge(MiningBarge & other);
		MiningBarge& operator=(MiningBarge const & other);

		void equip(IMiningLaser*	laser);
		void mine(IAsteroid*	asteroid) const;
};

#endif
