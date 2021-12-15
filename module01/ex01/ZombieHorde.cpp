/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:13:30 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 18:10:01 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	IntToString(int num)
{
	std::string result;
	char		c;

	if (num == 0)
		return ("0");
	while (num > 0)
	{
		c = num % 10 + '0';
		result = result + c;
		num = num / 10;
	}
	std::reverse(result.begin(), result.end());
	return (result);
}

Zombie*	zombieHorde(int N, std::string name)
{
	int			i;
	Zombie*	zh = new Zombie[N];
	std::string	zName;

	i = 0;
	while (i < N)
	{
		zName = name + '_' + IntToString(i);
		zh[i].setName(zName);
		i++;
	}
	return (zh);
}
