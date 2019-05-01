/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:20 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 13:39:40 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string mode;
	PhoneBook *pb = new PhoneBook();

	std::cout << "\033[1;37mWELECOME TO AWESOME PHONE BOOK\033[0m" << std::endl;
	while (1)
	{
		std::cout << "\033[1;37m----------------------------------------\033[0m" << std::endl;
		std::cout << "TEHRE ARE THREE MODE : \033[1;37mADD, SEARCH, EXIT\033[0m" << std::endl;
		std::cout << "CHOOSE ONE OF THEM :)" << std::endl;
		std::cin >> mode;
		if (dispatch_table(mode, pb) == 0)
			break;
	}
	delete pb;
	std::cout << "\033[1;31mPROGRAM ENDED\033[0m" << std::endl;
	return (0);
}
