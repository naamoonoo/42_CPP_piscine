#include "Enemy.hpp"

Enemy::Enemy()
		: NcursesRenderable(*stdscr)
{
	init();
}

Enemy::Enemy(WINDOW &screen)
		: NcursesRenderable(screen)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &rhs)
		: NcursesRenderable(rhs.screen)
{
	*this = rhs;
}

Enemy &Enemy::operator=(Enemy const &)
{
	return *this;
}

bool Enemy::render()
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
	if ((frame % Enemy::randomInterval) == 0)
		randomMove();
	if (frame % 60 == 0 && !attack.isOnScreen())
	{
		attack.setRowCol(row, col);
		attack.setTarget(forward::p1_row, forward::p1_col);
	}

	if (movedOffScreen())
		return false;

	attron(COLOR_PAIR(ENEMY_PAIR));
	mvwaddstr(&screen, row, col, "/-\\");
	mvwaddstr(&screen, row + 1, col, "| |");
	mvwaddstr(&screen, row + 2, col, "\\-/");
	if (attack.isOnScreen())
		attack.render();
	attroff(COLOR_PAIR(ENEMY_PAIR));
	return true;
}
void Enemy::init()
{
	row = 0;
	col = rand() % width;
	frame = 1;
	onScreen = true;
}

void Enemy::randomMove()
{
	static int keyList[] = {KEY_LEFT, KEY_RIGHT, KEY_UP, KEY_DOWN};
	int r = rand() % 4;
	moveByChar(keyList[r], false);
}

int Enemy::detectCollision(int *&map)
{
	int pos;
	for (int r = 0; r < 3 && 0 < row + r && row + r < height; ++r)
		for (int c = 0; c < 3 && 0 < col + c && col + c < width; ++c)
		{
			pos = map[(row + r) * width + col + c];
			if (pos == 42)
				onScreen = false;

			map[(row + r) * width + col + c] = 1;
		}
	attack.detectCollision(map);
	return 0;
}
