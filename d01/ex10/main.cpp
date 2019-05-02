/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 00:25:59 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 22:13:08 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char *av[])
{
	int i;

	if (ac == 1)
		while (1)
			std::cout << std::cin.rdbuf();
	else
	{
		i = 0;
		while (av[++i])
		{
			std::ifstream ifs(av[i]);
			if (!ifs.is_open())
				std::cout << "cat: "<< av[i] << ": No such file or directory" << std::endl;
			else
			{
				std::cout << ifs.rdbuf();
				ifs.close();
			}
		}

	}
	return (0);
}
