/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:53:38 by ylee              #+#    #+#             */
/*   Updated: 2022/01/10 00:20:51 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor called\n";
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
}

DiamondTrap::DiamondTrap(const std::string& Name) : ClapTrap(Name), ScavTrap(Name), FragTrap(Name)
{
	std::cout << "DiamondTrap Constructor with Name \' " << Name << " \' called\n";
	this->Name = Name;
	ClapTrap::Name = Name + "_clap_name";
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
}

DiamondTrap::DiamondTrap(const DiamondTrap& otherObj)
{
	*this = otherObj;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << Name << " Destructor called\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& otherObj)
{
	ClapTrap::operator=(otherObj);
	this->Name = otherObj.Name;
	return *this;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "< " << Name << " > : Who Am I? I'm ScavTrap? Or FragTrap?? I'm "<< Name << "? Or " << ClapTrap::Name << "??\n";
}
