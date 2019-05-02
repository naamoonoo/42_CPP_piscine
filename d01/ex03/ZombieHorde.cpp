/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:59:07 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:45:01 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	int i;
	this->_zombies = new Zombie[N];
	i = -1;
	while (++i < N)
		this->_zombies[i] = *this->randomChump();
};

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
};

Zombie*	ZombieHorde::getZombie(int idx)
{
	return &(this->_zombies[idx]);
};

Zombie*	ZombieHorde::randomChump(){
	std::string names[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
	Zombie *zombie = new Zombie(names[std::rand() % 10]);

	return zombie;
};

void	ZombieHorde::setZombieType(int idx, std::string type){
	this->getZombie(idx)->setType(type);
	std::cout << this->getZombie(idx)->getName() << " now have a type " << type << std::endl;
};
