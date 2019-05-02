/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:10 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:35:50 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(Zombie *zombie, std::string type){
	zombie->setType(type);
	std::cout << zombie->getName() << " now have a type " << type << std::endl;
};

Zombie*	ZombieEvent::newZombie(std::string name, std::string type){
	Zombie *zombie = new Zombie(name);

	zombie->setType(type);
	return zombie;
};

Zombie	ZombieEvent::randomChump(){
	std::string names[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
	Zombie zombie(names[std::rand() % 10]);

	zombie.announce();
	return zombie;
};
