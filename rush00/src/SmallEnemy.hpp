#ifndef FT_SMALL_ENEMY_HPP
#define FT_SMALL_ENEMY_HPP

#include "ncurses.h"
#include "NcursesRenderable.hpp"
#include "Background.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "EnemyProjectile.hpp"
#include "Enemy.hpp"

class SmallEnemy :  virtual public NcursesRenderable
{
private:
public:
	SmallEnemy();
	SmallEnemy(WINDOW &screen);
	~SmallEnemy();
	SmallEnemy(SmallEnemy const &rhs);
	SmallEnemy &operator=(SmallEnemy const &rhs);

	static int randomInterval;
	void randomMove();
	bool render();
	void init();
	int detectCollision(int *&);
};

#endif /* FT_SMALL_ENEMY_HPP */
