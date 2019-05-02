/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:15 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:47:06 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	std::string types[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
	int	N = 5;
	ZombieHorde Horde(N);
	int i;

	i = -1;
	while (++i < N)
		Horde.setZombieType(i, types[std::rand() % 10]);

	i = -1;
	while (++i < N)
		Horde.getZombie(i)->announce();

	return (0);
}
