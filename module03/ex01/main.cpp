/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:04 by ylee              #+#    #+#             */
/*   Updated: 2022/01/10 02:09:18 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

	std::cout << "\n\" Oh!! Serena, my love!! I save you!!! \"\n\n";
	ScavTrap	st1("ST1");
	std::cout << std::endl;
	st1.guardGate();
	st1.takeDamage(5);
	st1.attack("enemy1");
	st1.takeDamage(10);
	st1.attack("enemy2");
	st1.takeDamage(10);
	std::cout << "\n\" All ScavTraps!! HELP ME!!! \"\n\n";
	ScavTrap	st2("ST2");
	ScavTrap	st3(st1);
	std::cout << std::endl;
	st2.guardGate();
	st3.guardGate();
	st1.beRepaired(10);
	st1.guardGate();
	std::cout << std::endl;
	return 0 ;
}
