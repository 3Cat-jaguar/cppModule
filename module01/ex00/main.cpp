/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:41:37 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 16:29:10 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("init");
	Zombie*	king = newZombie("ZombieKing");
	Zombie	test1;
	test1.announce();
	Zombie	test2("test2");
	test2.announce();
	king->announce();
	Zombie*	test3 = newZombie("test3");
	test3->announce();
	delete king;
	randomChump("test4");
	delete test3;
}
