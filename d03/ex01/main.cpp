#include "ScavTrap.hpp"

int main()
{
	ScavTrap	andy("andy");
	ScavTrap	saro("saro");

	andy.meleeAttack(saro.getName());
	saro.takeDamage(andy.getMeleeAttackDamage());
	saro.rangedAttack(andy.getName());
	andy.takeDamage(saro.getRangedAttackDamage());
	andy.beRepaired(2);
	saro.beRepaired(5);
	std::cout << andy.getName() << "'s quest" << std::endl;
	andy.challengeNewcomer();
	std::cout << saro.getName() << "'s quest" << std::endl;
	saro.challengeNewcomer();
	return (0);
}
