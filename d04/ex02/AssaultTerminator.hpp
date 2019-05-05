#ifndef ASSAULT_TERMINATOR_H
# define ASSAULT_TERMINATOR_H

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator(AssaultTerminator & other);

		AssaultTerminator& operator=(AssaultTerminator const & other);

		virtual AssaultTerminator* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif
