#ifndef CHARACTER_H
# define CHARACTER_H

class AMateria;
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria*	_m[4];
		int			_idx;
		std::string	_name;

	public:
		Character() {};
		Character(std::string name);
		virtual ~Character();
		Character(Character & other);
		Character&	operator=(Character const & other);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
