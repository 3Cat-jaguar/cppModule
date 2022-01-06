/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:04 by ylee              #+#    #+#             */
/*   Updated: 2022/01/06 18:48:20 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	std::cout << "...... NOW LOARDING ......\n";
	ClapTrap	ct1("CT1");
	ClapTrap	ct2;
	ct2 = ClapTrap("CT2");
	ClapTrap ct3(ct1);

	std::cout << "\n<< PLAY >>\n";
	ct1.attack("enemy1");
	ct1.takeDamage(7);
	ct2.takeDamage(3);
	ct3.attack("enemy2");
	ct2.beRepaired(1);
	ct3.takeDamage(8);
	ct2.attack("enemy1");
	ct2.takeDamage(7);
	ct1.attack("enemy2");
	ct1.takeDamage(8);
	ct3.beRepaired(1);
	ct2.beRepaired(1);
	ct1.attack("enemy1");
	ct1.takeDamage(7);
	ct2.attack("enemy1");
	ct2.takeDamage(7);
	ct3.attack("enemy1");
	ct3.takeDamage(7);





	return 0 ;
}
