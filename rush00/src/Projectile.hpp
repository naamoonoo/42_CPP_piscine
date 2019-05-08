#ifndef FT_PROJECTILE_HPP
#define FT_PROJECTILE_HPP

#include "NcursesRenderable.hpp"

class Projectile : virtual public NcursesRenderable
{
protected:
	int speed;
	int power;
	int mark;

	/* data */
public:
	Projectile();
	Projectile(int speed, int power);
	~Projectile();
	Projectile(Projectile const &rhs);
	Projectile &operator=(Projectile const &rhs);

	void setSpeedPower(int sp, int po);
	bool render();
	int detectCollision(int *&map);
};

#endif /* FT_Projectile_HPP */
