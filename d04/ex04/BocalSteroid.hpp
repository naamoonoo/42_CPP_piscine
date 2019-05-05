#ifndef BOCAL_STEROID_H
# define BOCAL_STEROID_H

#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include <iostream>
#include <string>

class BocalSteroid : public IAsteroid
{
	private:
		std::string	_name;

	public:
		BocalSteroid();
		virtual ~BocalSteroid();
		BocalSteroid(BocalSteroid & other);
		BocalSteroid&	operator=(BocalSteroid const & other);

		virtual std::string beMined(IMiningLaser * laser) const;
		virtual std::string beMined(DeepCoreMiner * laser) const;
		virtual std::string getName() const;
};

#endif
