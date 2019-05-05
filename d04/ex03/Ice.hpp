#ifndef ICE_H
# define ICE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string	const	_type;
		unsigned int xp_;



	public:
		// Ice() {};
		Ice();
		virtual ~Ice();
		Ice(Ice & other);

		Ice&	operator=(Ice const & other);
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif
