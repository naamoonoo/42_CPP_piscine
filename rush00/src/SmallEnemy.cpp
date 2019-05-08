#include "SmallEnemy.hpp"

SmallEnemy::SmallEnemy()
	: NcursesRenderable(*stdscr)
{
	init();
}

SmallEnemy::SmallEnemy(WINDOW &screen)
	: NcursesRenderable(screen)
{
}

SmallEnemy::~SmallEnemy()
{
}

SmallEnemy::SmallEnemy(SmallEnemy const &rhs)
	: NcursesRenderable(rhs.screen)
{
	*this = rhs;
}

SmallEnemy &SmallEnemy::operator=(SmallEnemy const &)
{
	return *this;
}

bool SmallEnemy::render()
{
	NcursesRenderable::render();
	if (!onScreen)
	{
		if ((frame % 600) == 0)
			init();
		else
			return false;
	}
	if ((frame % 60) == 0)
		verticalScroll();
	if ((frame % SmallEnemy::randomInterval) == 0)
		randomMove();
	if (movedOffScreen())
		return false;
	attron(COLOR_PAIR(SMALL_ENEMY_PAIR));
	mvwaddstr(&screen, row, col, "@@");
	mvwaddstr(&screen, row + 1, col, "MM");
	attroff(COLOR_PAIR(SMALL_ENEMY_PAIR));
	return true;
}
void SmallEnemy::init()
{
	row = 0;
	col = rand() % width;
	frame = 1;
	onScreen = true;
}

void SmallEnemy::randomMove()
{
	static int keyList[] = {KEY_LEFT, KEY_RIGHT, KEY_UP, KEY_DOWN};
	int r = rand() % 4;
	moveByChar(keyList[r], false);
	moveByChar(keyList[r], false);
	moveByChar(keyList[r], false);
}

int SmallEnemy::detectCollision(int *&map)
{
	int pos;
	for (int r = 0; r < 2 && 0 < row + r && row + r < height; ++r)
		for (int c = 0; c < 2 && 0 < col + c && col + c < width; ++c)
		{
			pos = map[(row + r) * width + col + c];
			if (pos == 42)
				onScreen = false;

			map[(row + r) * width + col + c] = 1;
		}
	return 0;
}
