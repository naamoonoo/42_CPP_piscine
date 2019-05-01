#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age)
{
	this->name = name;
	this->color = color;
	this->age = age;
	std::cout << this->name << " pony has come!" << std::endl;
	return ;
};

Pony::~Pony()
{
	std::cout << this->name << " pony passed away" << std::endl;
	return ;
};

void	Pony::gettingOlder()
{
	this->age += 1;
	std::cout << "pony is grown up, now " << this->name << " is " << this->age << " years old" << std::endl;
}
