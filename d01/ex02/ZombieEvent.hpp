#include "Zombie.hpp"

class ZombieEvent{
	public:
		ZombieEvent() {};
		~ZombieEvent() {};
		void	setZombieType(Zombie *zombie, std::string type);
		Zombie*	newZombie(std::string name);
		Zombie	randomChump();
};
