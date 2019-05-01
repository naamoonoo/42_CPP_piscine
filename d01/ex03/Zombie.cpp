#include "Zombie.hpp"

void	Zombie::announce(){
	std::cout << "< " << this->name << " ( " << this->type << " ) > ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
