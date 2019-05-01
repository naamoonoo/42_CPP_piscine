#include "Brain.hpp"

class Human{
	public:
		Human();
		~Human();
		Brain	*brain;
		std::string	identify();
		Brain	getBrain();
};
