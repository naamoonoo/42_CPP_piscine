/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 00:15:17 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 01:54:08 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void	find_and_replace(std::string& str, std::string s1, std::string s2)
{
	size_t	pos = str.find(s1);
	while (pos != std::string::npos)
	{
		str.replace(pos, s1.length(), s2);
		pos = str.find(s1, pos + s1.length());
	}
}

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "./replace <file_name> <str1> <str2>" << std::endl;
		return (0);
	}
	std::ifstream ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "invalid file" << std::endl;
		return (0);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::stringstream ss;
	ss << av[1] << ".replace";
	std::string fileName = ss.str();
	std::ofstream ofs(fileName);

	std::string tmp;
	while(!ifs.eof())
	{
		getline(ifs, tmp);
		find_and_replace(tmp, s1, s2);
		ofs << tmp << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
