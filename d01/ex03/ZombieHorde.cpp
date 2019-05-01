/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:59:07 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:59:11 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	int i;
	this->zombies = new Zombie[N];
	i = -1;
	while (++i < N)
		this->zombies[i] = *this->randomChump();
};

ZombieHorde::~ZombieHorde()
{
	delete [] this->zombies;
};

void	ZombieHorde::setZombieType(Zombie *zombie, std::string type){
	zombie->type = type;
	std::cout << zombie->name << "now have a type " << type << std::endl;
};

Zombie*	ZombieHorde::randomChump(){
	std::string names[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
	Zombie *zombie = new Zombie(names[std::rand() % 10]);

	return zombie;
};
