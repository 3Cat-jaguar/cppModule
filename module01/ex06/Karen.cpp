/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:43:42 by ylee              #+#    #+#             */
/*   Updated: 2021/12/23 19:13:52 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){};

void	Karen::debug()
{
	std::cout << "Karen complains about debug\n";
}

void	Karen::info()
{
	std::cout << "Karen complains about info\n";
}

void	Karen::warning()
{
	std::cout << "Karen complains about warning\n";
}

void	Karen::error()
{
	std::cout << "Karen complains about error\n";
}

void	Karen::complain(int fLv, std::string level)
{
	void	(Karen::*func[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string	complainLevel[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	cLv = 0;
	while (cLv < 4)
	{
		if (complainLevel[cLv] == level)
			break;
		else
			cLv++;
	}
	if (cLv == 4)
	{
		std::cout << level << " : Wrong complain level\n";
		return ;
	}
	if (fLv <= cLv)
	{
		std::cout << level << " : ";
		(this->*func[cLv])();
	}
}
