#include "Human.hpp"

Human::Human(){
	std::cout << "Human created" << std::endl;
	this->brain = new Brain(std::rand() % 10);
};

Human::~Human(){
	std::cout << "Human deleted" << std::endl;
};

std::string	Human::identify(){
	std::stringstream ss;

	ss << this;
	std::string s = ss.str();
	return s;
};

Brain	Human::getBrain(){
	return *(this->brain);
};
