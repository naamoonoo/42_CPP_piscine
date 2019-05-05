#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
	return ;
};

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
	return ;
};

AssaultTerminator::AssaultTerminator(AssaultTerminator & other){
	*this = other;
	return ;
};

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & other){
	(void)other;
	return *this;
};

AssaultTerminator* AssaultTerminator::clone() const{
	return new AssaultTerminator();
};

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT " << std::endl;
};

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
};

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
};


// • clone() returns a copy of the current object

