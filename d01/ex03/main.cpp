/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:15 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:59:11 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	std::string types[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
	int	N = 5;
	ZombieHorde Horde(N);

	int i = -1;
	while (++i < N)
		Horde.setZombieType(&Horde.zombies[i], types[std::rand() % 10]);

	i = -1;
	while (++i < N)
		Horde.zombies[i].announce();

	return (0);
}
