/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:10 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:59:11 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(Zombie *zombie, std::string type){
	zombie->type = type;
	std::cout << zombie->name << "now have a type " << type << std::endl;
};

Zombie*	ZombieEvent::newZombie(std::string name){
	Zombie *zombie = new Zombie(name);

	zombie->announce();
	return zombie;
};

Zombie	ZombieEvent::randomChump(){
	std::string names[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
	Zombie zombie(names[std::rand() % 10]);

	zombie.announce();
	return zombie;
};
