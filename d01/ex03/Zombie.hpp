#include <iostream>

class Zombie {
	public:
		Zombie(std::string name): name(name) {
			std::cout << name << " zomibe is born" << std::endl;
		};
		~Zombie() {
			std::cout << this->name << " zombie dead" <<std::endl;
		};
		Zombie(){};
		std::string	name;
		std::string	type;
		void	announce();
};
