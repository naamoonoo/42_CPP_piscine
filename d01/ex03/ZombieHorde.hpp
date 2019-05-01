#include "Zombie.hpp"

class ZombieHorde{
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	setZombieType(Zombie *zombie, std::string type);
		Zombie	*randomChump();
		Zombie	*zombies;
};
