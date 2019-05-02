/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:54:41 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:27:41 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony("andy", 10);

	pony->gettingOlder();
	pony->gettingOlder();
	pony->gettingOlder();
	delete pony;
}

void	ponyOnTheStack()
{
	Pony	pony("saro", 11);

	pony.gettingOlder();
	pony.gettingOlder();
	pony.gettingOlder();
}

int		main()
{
	std::cout << "pony on the heap start" << std::endl;
	ponyOnTheHeap();
	std::cout << "pony on the heap end" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "pony on the stack start" << std::endl;
	ponyOnTheStack();
	std::cout << "pony on the stack end" << std::endl;
	return (0);
}
