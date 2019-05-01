#include <iostream>

class Pony
{
	public:
		Pony(std::string name, std::string color, int age);
		~Pony();
		std::string	name;
		std::string	color;
		id_t		age;
		void		gettingOlder();
};
