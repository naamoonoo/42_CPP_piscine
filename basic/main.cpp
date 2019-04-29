#include "sample.class.hpp"

int	main() {

	Sample instance;
	// instance.foo = 42;

	std::cout << "instance foo : " << instance.foo << std::endl;

	// instance.bar();
	Sample1 instance1('a', 3, 3.5);
	std::cout << "instance a1 : " << instance1.a1 <<std::endl;

	return 0;
}
