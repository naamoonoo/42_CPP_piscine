/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 01:54:54 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 02:00:26 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	Logger lg;

	lg.log("file", "this is first log on file");
	lg.log("console", "written in console");
	lg.log("somewhere", "nothing happend");
	lg.log("file", "this is second log on file");
	lg.log("console", "another log written in console");
	return (0);
}
