#include "GameSession.hpp"

GameSession::GameSession(WINDOW &screen, Player &p1, Player &p2, Background &back)
	: NcursesRenderable(screen), p1(p1), p2(p2), back(back), p2_joined(false)
{
	p1.init();
	p2.init();
	updateMap();
}

GameSession::~GameSession()
{
}

GameSession::GameSession(GameSession const &rhs)
	: NcursesRenderable(rhs.screen), p1(rhs.p1), p2(rhs.p2), back(rhs.back)
{
	*this = rhs;
}

GameSession &GameSession::operator=(GameSession const &)
{
	return *this;
}

bool GameSession::render()
{
	NcursesRenderable::render();
	if (frame % 600 == 0)
	{
		Enemy::randomInterval -= Enemy::randomInterval > 5 ? 1 : 0;
		SmallEnemy::randomInterval -= SmallEnemy::randomInterval > 5 ? 1 : 0;
	}
		// Enemy::randomInterval -= Enemy::randomInterval > 5 ? 1 : 0;
	int key;
	if ((!p2_joined && p1.getHP() == 0) || (p2_joined &&  p1.getHP() == 0 && p2.getHP() == 0))
	{
		while ((key = getch()) != ERR)
			;
		mvwaddstr(&screen, height / 2 - 1, width / 2 - 5, "Defeated");
		return true;
	}
	while ((key = getch()) != ERR)
	{
		if (isPlayerOneMove(key))
			p1.moveByChar(key, true);
		else if (key == ' ')
			p1.shoot();
		else if (key == KEY_F(1))
			p2_joined = true;
		else if (p2_joined && isPlayerTwoMove(key))
			p2.moveByChar(key, true);
		else if (p2_joined && key == 'f')
			p2.shoot();
		// else if (key == 'q')
		// 	return true;
		//way to finish the game
	}

	wclear(&screen);
	back.draw_star();
	for (unsigned long i = 0; i < (sizeof(enemy) / sizeof(Enemy)); ++i)
		enemy[i].render();
	for (unsigned long j = 0; j < (sizeof(smallEnemy) / sizeof(SmallEnemy)); ++j)
		smallEnemy[j].render();
	p1Render();
	p2Render();
	if ((frame % 12) == 0)
		detectCollision(map);
	return true;
}

bool GameSession::isPlayerOneMove(int key)
{
	return key == KEY_UP || key == KEY_DOWN || key == KEY_LEFT || key == KEY_RIGHT;
}

bool GameSession::isPlayerTwoMove(int key)
{
	return key == 'a' || key == 's' || key == 'd' || key == 'w';
}

void GameSession::updateMap()
{
	map = new int[height * width];
	memset(map, 0, height * width * sizeof(*map));
}

void GameSession::p1Render()
{
	if (p1.getHP() != 0)
	{
		attron(COLOR_PAIR(PLAYER1_PAIR));
		p1.render();
		attroff(COLOR_PAIR(PLAYER1_PAIR));
		back.draw_hp(p1, 1);
		back.draw_info(p1, 1);
	}
}

void GameSession::p2Render()
{
	if (p2_joined && p2.getHP() != 0)
	{
		attron(COLOR_PAIR(PLAYER2_PAIR));
		p2.render();
		attroff(COLOR_PAIR(PLAYER2_PAIR));
		back.draw_hp(p2, 2);
		back.draw_info(p2, 2);
	}
}

int GameSession::detectCollision(int *&)
{
	memset(map, 0, height * width * sizeof(*map));
	// set projectile to 42
	p1.detectCollision(map);
	p2.detectCollision(map);
	// set emeny to 1
	for (unsigned long i = 0; i < (sizeof(enemy) / sizeof(Enemy)); ++i)
		enemy[i].detectCollision(map);
	for (unsigned long j = 0; j < (sizeof(smallEnemy) / sizeof(SmallEnemy)); ++j)
		smallEnemy[j].detectCollision(map);

	// check if player die;
	p1.detectCollision(map);
	p2.detectCollision(map);
	return 0;
}
