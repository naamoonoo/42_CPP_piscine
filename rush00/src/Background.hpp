#ifndef BACKGROUND_HPP
#define BACKGROUND_HPP

class Player;
#include "ncurses.h"
#include <iostream>
#include "Player.hpp"
#include <sstream>
#include <stdlib.h>
#include "NcursesRenderable.hpp"

enum ColorPair
{
	PLAYER1_PAIR = 1,
	PLAYER2_PAIR,
	ENEMY_PAIR,
	STAR_PAIR,
	HP_PAIR,
	P1_REST_HP_PAIR,
	P2_REST_HP_PAIR,
	SMALL_ENEMY_PAIR,
};

typedef struct s_loc
{
	int x;
	int y;
} t_loc;

class Background : virtual public NcursesRenderable
{
private:
	typedef struct s_loc t_loc;
	t_loc star_loc[20];

public:
	Background(WINDOW &screen);
	~Background();
	Background(Background const &rhs);
	Background &operator=(Background const &other);

	void draw_star();
	void draw_hp(Player &p, int player_num);
	void draw_info(Player &p, int player_num);
};

#endif
