/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:21 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:07:20 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		is_same(std::string a, std::string b)
{
	int i;

	i = 0;
	while (a[i] && b[i] && a[i] == b[i])
		i++;
	return (a[i] - b[i] == 0);
}

void	format_printing(std::string str)
{
	int i;

	i = -1;
	std::cout << "\033[1;37m|\033[0m";
	if (str.length() > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << str;
}

void	add_contact_info(PhoneBook *pb)
{

	std::string info[11];
	int i;

	i = 0;
	std::cin.ignore(INT_MAX, '\n');
	while (i < 11)
	{
		if (info[i].empty())
		{
			std::cout << g_question[i] << " : ";
			std::getline(std::cin, info[i]);
		}
		else
			i++;
	}
	pb->add_contact(info);
}

void	show_brief_info(PhoneBook *pb)
{
	int	i;
	int	j;

	i = -1;
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::setw(10) << "NICK NAME";
	std::cout << "|" << std::endl;
	while (++i < pb->index)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i;
		j = -1;
		while (++j < 3)
			format_printing(pb->contacts[i].contact_info[j]);
		std::cout << "|" << std::endl;
	}
}

void	search_contact_info(PhoneBook *pb)
{
	int	i;

	show_brief_info(pb);
	while (1)
	{
		std::cout << "PUT THE \033[1;37mINDEX\033[0m OF WHAT YOU WANT TO SEARCH : " << std::endl;
		std::cin >> i;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10, '\n');
			std::cout << "\033[1;31mINVALID INDEX\033[0m" << std::endl;
			continue;
		}
		if (i >= 0 && i < pb->index)
		{
			pb->show_contact(i);
			break;
		}
		else
			std::cout << "\033[1;31mIT'S NOT IN YOUR PHONE BOOK\033[0m" << std::endl;
	}
}

int		dispatch_table(std::string mode, PhoneBook *pb)
{
	if (is_same(mode, "ADD"))
	{
		if (pb->index < 8)
			add_contact_info(pb);
		else
			std::cout << "\033[1;31mAT MOST 8 CONTACT CAN BE SAVED\033[0m" << std::endl;
	}
	else if (is_same(mode, "SEARCH"))
	{
		if (pb->index > 0)
			search_contact_info(pb);
		else
			std::cout << "\033[1;31mNOTHING TO SEARCH\033[0m" << std::endl;
	}
	else if (is_same(mode, "EXIT"))
		return (0);
	else
		std::cout << "\033[1;31mINVALID MODE\033[0m" << std::endl;
	return (1);
}
