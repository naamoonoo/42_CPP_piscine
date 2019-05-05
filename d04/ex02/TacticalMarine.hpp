#ifndef TACTICAL_MARINE_H
# define TACTICAL_MARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine(TacticalMarine & other);

		TacticalMarine& operator=(TacticalMarine const & other);



		virtual TacticalMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif
