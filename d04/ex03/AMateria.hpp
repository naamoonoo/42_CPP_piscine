#ifndef A_MATERIA_H
# define A_MATERIA_H

class ICharacter;
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string	const	_type;
		unsigned int xp_;


	public:
		AMateria() {};
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(AMateria & other);

		AMateria&	operator=(AMateria const & other);
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif
