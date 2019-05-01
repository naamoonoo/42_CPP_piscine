#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(Zombie *zombie, std::string type){
	zombie->type = type;
	std::cout << zombie->name << "now have a type " << type << std::endl;
};

Zombie*	ZombieEvent::newZombie(std::string name){
	Zombie *zombie = new Zombie(name);

	zombie->announce();
	return zombie;
};

Zombie	ZombieEvent::randomChump(){
	std::string names[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
	Zombie zombie(names[std::rand() % 10]);

	zombie.announce();
	return zombie;
};
