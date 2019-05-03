#include "SuperTrap.hpp"

int main()
{
	FragTrap	andy("andy");
	ScavTrap	saro("saro");
	NinjaTrap	foo("foo");
	SuperTrap	super("super");

	std::cout << "------------------------------" << std::endl;
	super.vaulthunter_dot_exe(andy.getName());
	andy.takeDamage(super.get_vaulthunter_dot_exe_damage());
	super.vaulthunter_dot_exe(saro.getName());
	saro.takeDamage(super.get_vaulthunter_dot_exe_damage());
	super.vaulthunter_dot_exe(foo.getName());
	foo.takeDamage(super.get_vaulthunter_dot_exe_damage());

	std::cout << "------------------------------" << std::endl;

	super.ninjaShoebox(andy);
	super.ninjaShoebox(saro);
	super.ninjaShoebox(foo);
	std::cout << "------------------------------" << std::endl;

	return (0);
}
