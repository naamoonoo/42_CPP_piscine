/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 01:33:40 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 01:50:49 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>

typedef	struct	s_dispatch_table t_dp;

class Logger
{
	private:
		static	t_dp _dp[];
		void logToConsole(std::string const & message);
		void logToFile(std::string const & message);
		std::string makeLogEntry(std::string const & message);

	public:
		Logger() {};
		~Logger() {};
		void log(std::string const & dest, std::string const & message);
};


# endif
