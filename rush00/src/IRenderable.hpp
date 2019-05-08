#ifndef FT_IRENDERABLE_HPP
#define FT_IRENDERABLE_HPP

#include "ncurses.h"

class IRenderable
{
public:
	virtual bool render() = 0;
};

#endif /* FT_IRenderable_HPP */
