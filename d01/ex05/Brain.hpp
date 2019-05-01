#include <iostream>
#include <sstream>

class Brain {
	public:
		Brain(int size): _size(size) {
			std::cout << "brain created" << std::endl;
		};
		~Brain() {
			std::cout << "brain deleted" << std::endl;
		};
		std::string	identify();
		int		_size;
};
