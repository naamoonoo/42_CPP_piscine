#include <iostream>
#include <sstream>
#include "Scalar.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	Scalar convertor(av[1]);
	convertor.toChar();
	convertor.toInt();
	convertor.toFloat();
	convertor.toDouble();

    return 0;
}
