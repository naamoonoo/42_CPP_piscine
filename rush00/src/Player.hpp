#ifndef FT_PLAYER_HPP
#define FT_PLAYER_HPP

#include "ncurses.h"
#include "NcursesRenderable.hpp"
#include "Projectile.hpp"
#include "forward.hpp"

class Player : virtual public NcursesRenderable
{
private:
	int hp;
	int score;
	Projectile attacks[10];
	int id;

public:
	Player(WINDOW &screen);
	~Player();
	Player(Player const &rhs);
	Player &operator=(Player const &rhs);

	static int player_cout;
	bool render();
	void init();
	int detectCollision(int *&map);
	int getHP();
	int getScore();
	void shoot();
};

#endif /* FT_Player_HPP */
