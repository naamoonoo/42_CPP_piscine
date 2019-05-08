
#include "CentralBureaucracy.hpp"
#include <string>
#include <iostream>

int main()
{
	CentralBureaucracy asdf;

	Bureaucrat andy("andy", 3);
	Bureaucrat foo("foo", 17);
	Bureaucrat bar("bar", 26);
	Bureaucrat zoo("zoo", 40);
	Bureaucrat abb("abb", 68);
	Bureaucrat cdd("cdd", 80);

	asdf.feed(cdd, abb);
	asdf.feed(bar, foo);
	asdf.feed(abb, zoo);
	asdf.feed(foo, andy);
	asdf.feed(zoo, bar);


	asdf.queueUp("CASE A");
	asdf.queueUp("CASE B");
	asdf.queueUp("CASE C");
	asdf.queueUp("CASE D");
	asdf.queueUp("CASE E");
	asdf.queueUp("CASE F");
	asdf.queueUp("CASE G");
	asdf.queueUp("CASE H");
	asdf.queueUp("CASE I");
	asdf.doBureaucracy();

	return 0;
}
