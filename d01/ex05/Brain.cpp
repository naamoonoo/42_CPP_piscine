#include "Brain.hpp"

std::string	Brain::identify(){
	std::stringstream ss;

	ss << this;
	std::string s = ss.str();
	return (s);
}
