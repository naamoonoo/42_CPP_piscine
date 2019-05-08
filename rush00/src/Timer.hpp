#ifndef FT_TIMER_HPP
#define FT_TIMER_HPP

#include <ctime>
#include <iostream>
#include "IRenderable.hpp"

class Timer
{
private:
	clock_t base;
	double duration;
	double frame_time;
	int frame;
	int sec;
	IRenderable &obj;

public:
	Timer(IRenderable &);
	~Timer();
	Timer(Timer const &rhs);
	Timer &operator=(Timer const &rhs);
	void start();
};

#endif /* FT_Timer_HPP */
