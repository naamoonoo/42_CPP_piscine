#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "Ptr : " << *strPtr << std::endl;
	std::cout << "Ref : " << strRef << std::endl;
	return (0);
}
