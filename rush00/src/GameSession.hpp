#ifndef FT_GAMESESSION_HPP
#define FT_GAMESESSION_HPP

#include "NcursesRenderable.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "SmallEnemy.hpp"
#include "ncurses.h"
#include "IRenderable.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <string.h>

// enum GameState
// {
// 	RUNNING,
// 	PAUSED,
// 	ENDED
// };

class GameSession : virtual public NcursesRenderable
{
private:
	Player &p1;
	Player &p2;
	Enemy enemy[8];
	SmallEnemy smallEnemy[18];
	int *map;
	Background &back;
	bool p2_joined;

public:
	GameSession(WINDOW &screen, Player &p1, Player &p2, Background &back);
	~GameSession();
	GameSession(GameSession const &rhs);
	GameSession &operator=(GameSession const &rhs);

	bool isPlayerOneMove(int key);
	bool isPlayerTwoMove(int key);
	bool render();
	void p1Render();
	void p2Render();
	void renderPerSec();
	int detectCollision(int *&);
	void updateMap();
};

#endif /* FT_GameSession_HPP */
