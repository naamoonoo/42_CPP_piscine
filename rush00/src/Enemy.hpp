#ifndef FT_ENEMY_HPP
#define FT_ENEMY_HPP

#include "ncurses.h"
#include "NcursesRenderable.hpp"
#include "Background.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "EnemyProjectile.hpp"
#include "forward.hpp"

class Enemy : virtual public NcursesRenderable
{
private:
	EnemyProjectile attack;

public:
	Enemy();
	Enemy(WINDOW &screen);
	~Enemy();
	Enemy(Enemy const &rhs);
	Enemy &operator=(Enemy const &rhs);

	static int randomInterval;

	void randomMove();
	bool render();
	void init();
	int detectCollision(int *&);
};

#endif /* FT_ENEMY_HPP */
