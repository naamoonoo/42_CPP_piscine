#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap	andy("andy");
	ScavTrap	saro("saro");
	NinjaTrap	foo("foo");
	NinjaTrap	bar("bar");

	std::cout << "------------------------------" << std::endl;
	foo.ninjaShoebox(bar);
	foo.ninjaShoebox(saro);
	foo.ninjaShoebox(andy);
	std::cout << "------------------------------" << std::endl;
	return (0);
}
