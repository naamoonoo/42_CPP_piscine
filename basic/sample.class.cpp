// #include <iostream>
#include "sample.class.hpp"

Sample::Sample( void ) {
	std::cout << "Construction called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
	return ;
}

Sample::~Sample( void ) {
	std::cout << "Destruction called" << std::endl;
	return ;
}

void	Sample::bar( void ) {
	std::cout << "Member function bar called" << std::endl;
	return ;
}

Sample1::Sample1(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	// exactly smae with this one!
	// this->a1 = p1;
	// this->a2 = p2;
	// this->a3 = p3;
	std::cout << "Construction called" << std::endl;
}

Sample1::~Sample1( void ) {
	std::cout << "Destruction called" << std::endl;
	return ;
}
