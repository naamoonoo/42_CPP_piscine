#include "Player.hpp"

Player::Player(WINDOW &screen)
		: NcursesRenderable(screen)
{
	hp = 100;
	score = 1;
	id = player_cout++;
}

Player::~Player()
{
}

Player::Player(Player const &rhs)
		: NcursesRenderable(rhs.screen)
{
	*this = rhs;
}

Player &Player::operator=(Player const &)
{
	return *this;
}

bool Player::render()
{
	NcursesRenderable::render();
	if (hp < 100 && (frame % 60) == 0)
		hp++;
	if (id == 0)
	{
		forward::p1_row = row;
		forward::p1_col = col;
	}
	mvwaddstr(&screen, row, col, " * ");
	mvwaddstr(&screen, row + 1, col, "*X*");
	mvwaddstr(&screen, row + 2, col, "-*-");
	for (unsigned int i = 0; i < (sizeof(attacks) / sizeof(Projectile)); ++i)
		if (attacks[i].isOnScreen())
			attacks[i].render();

	return true;
}

void Player::init()
{
	this->row = height - 3;
	this->col = (width - 3) / 2;
}

int Player::detectCollision(int *&map)
{
	// per PDF could just change the damage to hp = 0;
	for (int r = 0; r < 3 && row + r < height; ++r)
		for (int c = 0; c < 3 && col + c < width; ++c)
			if (map[(row + r) * width + col + c] == 1)
			{
				hp = (hp - 10) > 0 ? hp - 10 : 0;
				score = (score - 10) > 0 ? score - 10 : 0;
				return 0;
			}

	// check enmey attack
	for (int r = 0; r < 3 && row + r < height; ++r)
		for (int c = 0; c < 3 && col + c < width; ++c)
			if (map[(row + r) * width + col + c] == 10)
			{
				hp = (hp - 25) > 0 ? hp - 25 : 0;
				score = (score - 50) > 0 ? score - 50 : 0;
				return 0;
			}
	for (unsigned int i = 0; i < (sizeof(attacks) / sizeof(Projectile)); ++i)
		if (attacks[i].isOnScreen())
			score += attacks[i].detectCollision(map);
	return 0;
}

int Player::getHP()
{
	return hp;
}

int Player::getScore()
{
	return score;
}

void Player::shoot()
{
	for (unsigned int i = 0; i < (sizeof(attacks) / sizeof(Projectile)); ++i)
	{
		if (attacks[i].isOnScreen())
			continue;
		attacks[i].setSpeedPower(1, 1);
		attacks[i].setRowCol(row, col);
		break;
	}
}
