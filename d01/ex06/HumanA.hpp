#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon&		_weapon;

	public:
		HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {};
		~HumanA() {};
		void	attack();
};

#endif
