/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:32 by ylee              #+#    #+#             */
/*   Updated: 2022/01/06 18:50:32 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap Default Constructor called\n";
}

ClapTrap::ClapTrap(std::string Name): Name(Name), HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap Constructor with Name called\n";
}

ClapTrap::ClapTrap(const ClapTrap& otherObj)
{
	std::cout << "ClapTrap Copy Constructor called\n";
	*this = otherObj;
	Name = Name + "_copy";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& otherObj)
{
	std::cout << "ClapTrap Assignation operator called\n";
	Name = otherObj.getName();
	HP = otherObj.getHitPoints();
	EP = otherObj.getEnergyPoints();
	AD = otherObj.getAttackDamage();
	return *this ;
}

std::string	ClapTrap::getName() const
{
	std::cout << "ClapTrap getName function called\n";
	return Name ; 
}

int			ClapTrap::getHitPoints() const
{
	std::cout << "ClapTrap getHP function called\n";
	return HP ;
}

int			ClapTrap::getEnergyPoints() const
{
	std::cout << "ClapTrap getEP function called\n";
	return EP ;
}

int			ClapTrap::getAttackDamage() const
{
	std::cout << "ClapTrap getAD function called\n";
	return AD ;
}

void	ClapTrap::attack(std::string const & target)
{
	if (HP == 0)
	{
		std::cout << "ClapTrap < " << Name << " > "
		<< "cannot attack < " << target << " >, because ClapTrap < " << Name << " > was destroyed.\n";
		return ;
	}
	std::cout << "ClapTrap < " << Name << " > "
	<< "attack < " << target << " >, "
	<< "causing < " << AD << " > points of damage!\n"
	<< "......ClapTrap cannot attack.....T.T\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap < " << Name << " > "
	<< "takes < " << amount << " > points of damage!\n";
	if (HP > 0)
	{
		HP = HP - amount;
		if (HP < 0)
			HP = 0;
		std::cout << "Now < " << Name << " >'s HP is < "
		<< HP << " >\n";
		if (HP == 0)
			std::cout << "< " << Name << " > is destroyed.\n";
	}
	else
	{
		std::cout << "ClapTrap < " << Name << " > was destroyed already...T.T\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	HP = HP + amount;
	std::cout << "ClapTrap < " << Name << " > "
	<< "is repaired < " << amount << " > points.\n"
	<< "Now < " << Name << " >'s HP is < "
	<< HP << " >\n";
}

