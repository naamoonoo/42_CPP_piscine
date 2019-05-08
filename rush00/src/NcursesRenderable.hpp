#ifndef FT_NCURSESRENDERABLE_HPP
#define FT_NCURSESRENDERABLE_HPP

#include "IRenderable.hpp"
#include "IMoveable.hpp"
#include <iostream>

class NcursesRenderable : virtual public IRenderable, virtual public IMoveable
{
protected:
	WINDOW &screen;
	int height;
	int width;
	int frame;
	bool onScreen;

public:
	NcursesRenderable();
	NcursesRenderable(WINDOW &screen);
	~NcursesRenderable();
	NcursesRenderable(NcursesRenderable const &rhs);
	NcursesRenderable &operator=(NcursesRenderable const &rhs);

	void updateScreenSize();
	void moveByChar(int key, bool check);
	void moveByTime();
	void setRowCol(int r, int c);
	bool isOnScreen();
	bool movedOffScreen();
	virtual bool render();
	virtual void verticalScroll();
	virtual int detectCollision(int *&);
};

#endif /* FT_NcursesRenderer_HPP */
