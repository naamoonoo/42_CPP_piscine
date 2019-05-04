#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	protected:
		std::string	_name;
		std::string _title;

	public:
		Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
			std::cout << name << ", " << title << ", is born !" << std::endl;
		}
		~Sorcerer() {
			std::cout << getName() << ", " <<getTitle() <<
			", is dead. Consequences will never be the same !" << std::endl;
		}
		Sorcerer(Sorcerer & other);

		Sorcerer& operator=(Sorcerer const & rhs);

		std::string	getName() const;
		std::string	getTitle() const;
		void 		polymorph(Victim const &) const;
	private:
		Sorcerer(){};
};

std::ostream	&operator<<(std::ostream &os, Sorcerer const & src);

#endif
