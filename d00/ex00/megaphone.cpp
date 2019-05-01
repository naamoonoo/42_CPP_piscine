/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:13 by hnam              #+#    #+#             */
/*   Updated: 2019/04/29 22:49:24 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper_print(char *s)
{
	int i;

	i = -1;
	while (s[++i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (char)(s[i] - 32) ;
		std::cout << s[i];
	}
}

int	main(int ac, char* av[])
{
	int i;

	i = 0;
	if (ac < 2)
		std::cout << "\a* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (av[++i])
			to_upper_print(av[i]);
	return (0);
}
