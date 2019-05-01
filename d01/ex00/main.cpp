#include "Pony.hpp"

Pony*	ponyOnTheHeap(std::string name, std::string color, int age)
{
	Pony	*pony = new Pony(name, color, age);
	return pony;
}

Pony	ponyOnTheStack(std::string name, std::string color, int age)
{
	Pony	pony(name, color, age);
	return pony;
}

int		main()
{
	Pony	*ponyOnHeap = ponyOnTheHeap("andy", "brown", 4);
	Pony	ponyOnStack = ponyOnTheStack("foo", "green", 6);

	std::cout << "name : " << ponyOnHeap->name << std::endl;
	std::cout << "color : " << ponyOnHeap->color << std::endl;
	std::cout << "age : " << ponyOnHeap->age << std::endl;
	std::cout << "house : " << "heap" << std::endl;

	std::cout << "name : " << ponyOnStack.name << std::endl;
	std::cout << "color : " << ponyOnStack.color << std::endl;
	std::cout << "age : " << ponyOnStack.age << std::endl;
	std::cout << "house : " << "stack" << std::endl;

	ponyOnHeap->gettingOlder();
	ponyOnStack.gettingOlder();

	delete ponyOnHeap;
	return (0);
}
