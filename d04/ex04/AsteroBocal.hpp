#ifndef ASTERO_BOCAL_H
# define ASTERO_BOCAL_H

#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include <iostream>
#include <string>

class AsteroBocal : public IAsteroid
{
	private:
		std::string	_name;

	public:
		AsteroBocal();
		virtual ~AsteroBocal();
		AsteroBocal(AsteroBocal & other);
		AsteroBocal&	operator=(AsteroBocal const & other);

		virtual std::string beMined(IMiningLaser * laser) const;
		virtual std::string beMined(DeepCoreMiner * laser) const;
		virtual std::string getName() const;
};

#endif
