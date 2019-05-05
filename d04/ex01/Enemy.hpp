#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>
#include <string>

class Enemy
{
	private:
		int	_hp;
		std::string _type;

	public:
		Enemy() {};
		Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {};
		virtual ~Enemy() {};
		Enemy(Enemy & other);

		Enemy&	operator=(Enemy const & other);

		std::string const getType() const;
		int getHp() const;
		void setHp(int hp);

		virtual void takeDamage(int);

};

#endif
