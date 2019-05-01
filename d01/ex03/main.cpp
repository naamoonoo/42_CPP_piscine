#include "ZombieHorde.hpp"

int main()
{
	std::string types[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
	int	N = 5;
	ZombieHorde Horde(N);

	int i = -1;
	while (++i < N)
		Horde.setZombieType(&Horde.zombies[i], types[std::rand() % 10]);

	i = -1;
	while (++i < N)
		Horde.zombies[i].announce();

	return (0);
}
