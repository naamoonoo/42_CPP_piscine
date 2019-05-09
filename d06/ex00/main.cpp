#include <iostream>
#include <sstream>

#include "Scalar.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	Scalar convertor(av[1]);
	convertor.showCharConverted();
	convertor.showIntConverted();
	convertor.showFloatConverted();
	convertor.showDoubleConverted();

	return 0;
}
