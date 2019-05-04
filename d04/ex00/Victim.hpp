#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>

class Victim
{
	protected:
		std::string	_name;

	public:
		Victim() {};
		Victim(std::string name) : _name(name) {
			std::cout << "Some random victim called "
				<< name << " just popped !" << std::endl;
		}
		~Victim() {
			std::cout << "Victim " << getName()
				<< " just died for no apparent reason !" << std::endl;
		}
		Victim(Victim & other);

		Victim& operator=(Victim const & rhs);

		std::string	getName() const;
		void 		virtual getPolymorphed() const;


};

std::ostream	&operator<<(std::ostream &os, Victim const & src);

#endif
