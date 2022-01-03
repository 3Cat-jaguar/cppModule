/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:43:42 by ylee              #+#    #+#             */
/*   Updated: 2022/01/03 11:58:44 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){}

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

void	Karen::complain(std::string level)
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
	int	i = 0;
	while (i < 4)
	{
		if (complainLevel[i] == level)
			break;
		else
			i++;
	}
	if (i == 4)
	{
		std::cout << "Wrong Complain\n";
		return ;
	}
	(this->*func[i])();
}

