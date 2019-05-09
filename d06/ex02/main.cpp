#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int rn = std::rand() % 3;
	switch (rn)
	{
		case 0:
			std::cout << "Make A" << std::endl;
			return new A();
		case 1:
			std::cout << "Make B" << std::endl;
			return new B();
		default:
			std::cout << "Make C" << std::endl;
			return new C();
	}
}

void identify_from_pointer( Base * p ){
	std::cout << "identify_from_pointer : ";
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
};

void identify_from_reference( Base & p ){

	std::cout << "identify_from_reference : ";
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" <<std::endl;
		static_cast<void>(a);
	}
	catch(std::bad_cast exp){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" <<std::endl;
		static_cast<void>(b);
	}
	catch(std::bad_cast exp){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" <<std::endl;
		static_cast<void>(c);
	}
	catch(std::bad_cast exp){}


};

int main()
{
	srand(time(0));
	Base	* base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return 0;
}
