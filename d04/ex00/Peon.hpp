#ifndef PEON_H
# define PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon() {};
		Peon(std::string name) : Victim(name){
			std::cout << "Zog zog." << std::endl;
		}
		~Peon() {
			std::cout << "Bleuark..." << std::endl;
		}
		Peon(Peon & other);

		Peon& operator=(Peon const & rhs);

		void 		getPolymorphed() const;

};

std::ostream	&operator<<(std::ostream &os, Peon const & src);

#endif
