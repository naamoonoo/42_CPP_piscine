#include "Timer.hpp"

Timer::Timer(IRenderable &obj)
		: base(clock()), frame_time(0), frame(0), sec(0), obj(obj)
{
}

Timer::~Timer()
{
}

Timer::Timer(Timer const &rhs)
		: obj(rhs.obj)
{
	*this = rhs;
}

Timer &Timer::operator=(Timer const &rhs)
{
	base = rhs.base;
	duration = rhs.duration;
	frame_time = rhs.frame_time;
	frame = rhs.frame;
	sec = rhs.sec;
	obj = rhs.obj;
	return *this;
}

void Timer::start()
{
	while (1)
	{
		duration = (clock() - base) / static_cast<double>(CLOCKS_PER_SEC);
		if (duration > frame_time)
		{
			frame++;
			while ((frame_time += 1.0 / 120.0) < duration)
				;
			obj.render();
		}
		if (duration > sec)
		{
			//	std::cout << frame << std::endl;
			frame = 0;
			sec++;
			// obj.renderPerSec();
		}
	}
}
