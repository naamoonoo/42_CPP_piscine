#ifndef FT_OBJECT_HPP
#define FT_OBJECT_HPP

#include "IMoveable.hpp"

class Object : virtual public IMoveable
{
private:
	/* data */
public:
	Object();
	~Object();
	Object(Object const &rhs);
	Object &operator=(Object const &rhs);
};

#endif /* FT_Object_HPP */
