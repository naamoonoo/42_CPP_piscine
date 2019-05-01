#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string	_type;
	public:
		Weapon(std::string type) : _type(type) {};
		~Weapon() {};
		void	setType(std::string type);
		std::string	getType();
};

#endif
