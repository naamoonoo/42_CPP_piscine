/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:57:57 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:59:11 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent Event;
	Zombie z1("andy");
	Zombie z2 = Event.randomChump();
	Zombie *z3 = Event.newZombie("good");

	Event.setZombieType(&z1, "cute");
	Event.setZombieType(&z2, "monster");
	Event.setZombieType(z3, "god");

	z1.announce();
	z2.announce();
	z3->announce();

	delete z3;
	return (0);
}
