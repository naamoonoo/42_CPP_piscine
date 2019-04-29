#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample {

public:
	int	foo;

	Sample( void );
	~Sample( void );

	void bar( void );
};

class Sample1 {

public:
	char 	a1;
	int		a2;
	float	a3;

	Sample1(char p1, int p2, float p3);
	~Sample1(void);
};

#endif
