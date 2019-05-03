#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap	andy("andy");
	ScavTrap	saro("saro");

	andy.meleeAttack(saro.getName());
	saro.takeDamage(andy.getMeleeAttackDamage());
	saro.rangedAttack(andy.getName());
	andy.takeDamage(saro.getRangedAttackDamage());
	andy.beRepaired(2);
	saro.beRepaired(5);
	std::cout << andy.getName() << "'s vaulthunter_dot_exe" << std::endl;
	andy.vaulthunter_dot_exe(saro.getName());
	saro.takeDamage(andy.get_vaulthunter_dot_exe_damage());
	std::cout << saro.getName() << "'s quest" << std::endl;
	saro.challengeNewcomer();
	return (0);
}
