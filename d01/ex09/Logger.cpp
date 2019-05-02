/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 01:54:43 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 22:00:59 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

typedef	struct	s_dispatch_table
{
	std::string	message;
	void		(Logger::*func)(std::string const &);
}				t_dp;

t_dp	Logger::_dp[] =
{
	{"console", &Logger::logToConsole},
	{"file", &Logger::logToFile},
};

void Logger::logToConsole(std::string const & message){
	std::cout << makeLogEntry(message) << std::endl;
};

void Logger::logToFile(std::string const & message){
	static int counter = 0;

	if (!counter++)
	{
		std::ofstream	ofs("Logger");
		ofs << makeLogEntry(message) << std::endl;;
		ofs.close();
	}
	else
	{
		std::ofstream	ofs;
		ofs.open("Logger",  std::ios_base::app);
		ofs << makeLogEntry(message) << std::endl;;
		ofs.close();
	}
};

std::string Logger::makeLogEntry(std::string const & message){
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::stringstream ss;

	ss << "[" << 1900 + ltm->tm_year << "." << 1 + ltm->tm_mon << "." << ltm->tm_mday;
	ss << " " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << "]";
	std::string res = ss.str();
	res += message;
	return res;
};

void Logger::log(std::string const & dest, std::string const & message){
	int i;

	i = -1;
	while (++i < 3)
		if (this->_dp[i].message.compare(dest) == 0)
			return (this->*_dp[i].func)(message);
	if (i == 3)
		std::cout << "there are only two type of log (console, file)" << std::endl;
};


