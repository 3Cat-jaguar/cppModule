/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:13:01 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 18:10:04 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zA = zombieHorde(13, "zA");
	Zombie*	zB = zombieHorde(13, "zB");
	int i = 0;
	while (i < 3)
	{
		zA[i].announce();
		zB[i].announce();
		i++;
	}
	delete []zB;
	zA[2].announce();
	delete []zA;
	return (0);
}
