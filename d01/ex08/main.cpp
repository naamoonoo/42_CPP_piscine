/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 00:19:51 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:59:19 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human andy;

	andy.action("melee", "bear");
	andy.action("ranged", "dragon");
	andy.action("shout", "seiren");
	andy.action("punch", "bear");
	andy.action("punch", "bear");
	return (0);
}
