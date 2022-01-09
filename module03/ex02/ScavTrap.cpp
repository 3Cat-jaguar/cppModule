/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:53:38 by ylee              #+#    #+#             */
/*   Updated: 2022/01/09 22:20:30 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const std::string& Name) : ClapTrap(Name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor with name \' " << Name << " \' called\n";
}

ScavTrap::ScavTrap(const ScavTrap& otherObj):ClapTrap(otherObj)
{
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " Destructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& otherObj)
{
	ClapTrap::operator=(otherObj);
	return *this;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap < " << Name << " > attack < " << target << " >, causing < " << AD << " > points of damage!\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap < " << Name << " > have enterred in Gate keeper mode.\n";
	EP = EP - 1;
}

