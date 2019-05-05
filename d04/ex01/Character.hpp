#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int	_ap;
		AWeapon*	_weapon;

	public:
		Character(std::string const & name);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
		int		getAp();
		AWeapon* getWeapon();

};

std::ostream&	operator<<(std::ostream& os, Character & src);

#endif
