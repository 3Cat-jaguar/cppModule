/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 21:31:40 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 21:53:14 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon_type = &(weapon.getType());
}

void	HumanB::attack(void)
{
	if (weapon_type->empty())
		std::cout << name << " can not attack because he doesn't have weapon." << std::endl;
	else
		std::cout << name << " attacks with his " << *weapon_type << std::endl;
}
