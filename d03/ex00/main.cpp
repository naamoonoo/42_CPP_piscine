#include "FragTrap.hpp"

int main()
{
	FragTrap	andy("andy");
	FragTrap	saro("saro");

	int i = 0;
	while (andy.getIsAlive() && saro.getIsAlive())
	{
		std::cout << "ROUND " << ++i << "----------------------" << std::endl;
		andy.vaulthunter_dot_exe(saro.getName());
		saro.takeDamage(andy.get_vaulthunter_dot_exe_damage());
		saro.vaulthunter_dot_exe(andy.getName());
		andy.takeDamage(saro.get_vaulthunter_dot_exe_damage());
		if (!andy.getEnergyPoint() || !saro.getEnergyPoint())
			break;
	}
	if (andy.getIsAlive() && saro.getIsAlive())
	{
		if (andy.getHitPoint() > saro.getHitPoint())
			std::cout << "andy win!" << std::endl;
		else if (andy.getHitPoint() < saro.getHitPoint())
			std::cout << "saro win!" << std::endl;
		else
			std::cout << "draw!" << std::endl;
	}
	else
	{
		if (andy.getIsAlive())
			std::cout << "andy win!" << std::endl;
		else
			std::cout << "saro win!" << std::endl;
	}

	return (0);
}
