#ifndef CURE_H
# define CURE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string	const	_type;
		unsigned int xp_;



	public:
		// Cure() {};
		Cure();
		virtual ~Cure();
		Cure(Cure & other);

		Cure&	operator=(Cure const & other);
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif
