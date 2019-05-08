#include "Background.hpp"

Background::Background(WINDOW &screen)
	: NcursesRenderable(screen)
{

	for (int i = 0; i < 20; i++)
	{
		star_loc[i].x = rand() % width;
		star_loc[i].y = rand() % height;
	}
	init_pair(PLAYER1_PAIR, COLOR_BLUE, COLOR_BLACK);
	init_pair(PLAYER2_PAIR, COLOR_GREEN, COLOR_BLACK);
	init_pair(ENEMY_PAIR, COLOR_RED, COLOR_BLACK);
	init_pair(SMALL_ENEMY_PAIR, COLOR_YELLOW, COLOR_BLACK);
	init_pair(STAR_PAIR, COLOR_WHITE, COLOR_BLACK);
	init_pair(HP_PAIR, COLOR_GREEN, COLOR_RED);
	init_pair(P1_REST_HP_PAIR, COLOR_BLUE, COLOR_BLUE);
	init_pair(P2_REST_HP_PAIR, COLOR_GREEN, COLOR_GREEN);
}

Background::~Background()
{
}

Background::Background(Background const &rhs)
	: NcursesRenderable(rhs.screen)
{
	*this = rhs;
}

Background &Background::operator=(Background const &)
{
	return *this;
}

void Background::draw_star()
{
	static int c = 0;
	c++;
	for (int i = 0; i < 20; i++)
	{
		if (c % 60 == 0)
		{
			if (star_loc[i].y == height - 3)
			{
				star_loc[i].y = 0;
				star_loc[i].x = rand() % width;
			}
			else
				star_loc[i].y += 1;
			c = 0;
		}
		attron(COLOR_PAIR(STAR_PAIR));
		mvprintw(star_loc[i].y, star_loc[i].x, ".");
		attroff(COLOR_PAIR(STAR_PAIR));
	}
}

void Background::draw_hp(Player &p, int player_num)
{
	int x = player_num == 1 ? 2 : 18;
	int color = player_num == 1 ? P1_REST_HP_PAIR : P2_REST_HP_PAIR;
	mvwaddstr(&screen, 1, x, "HP ");
	attron(COLOR_PAIR(HP_PAIR));
	mvhline(1, x + 3, ' ', 10);
	attroff(COLOR_PAIR(HP_PAIR));
	attron(COLOR_PAIR(color));
	int rest = p.getHP() / 10;
	mvhline(1, x + 3, ' ', rest);
	attroff(COLOR_PAIR(color));
}

void Background::draw_info(Player &p, int player_num)
{
	// mvwaddstr(&screen, 1, width / 2 - 7, "PRESS Q TO QUIT");
	int x = player_num == 1 ? width - 30 : width - 18;
	int color = player_num == 1 ? PLAYER1_PAIR : PLAYER2_PAIR;

	attron(COLOR_PAIR(color));
	int score = p.getScore();
	std::stringstream ss;
	ss << "SCORE ";
	ss << score;
	std::string str = ss.str();
	mvwaddstr(&screen, 1, x + 3, str.c_str());
	attroff(COLOR_PAIR(color));
}
