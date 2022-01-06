/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:53:38 by ylee              #+#    #+#             */
/*   Updated: 2022/01/06 22:22:11 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), HP(100), EP(50), AD(20)
{
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const std::string& Name) : ClapTrap(Name), HP(100), EP(50), AD(20)
{
	std::cout << "ScavTrap constructor with name called\n";
}

ScavTrap::ScavTrap(const ScavTrap& otherObj):ClapTrap(otherObj)
{
	std::cout << "ScavTrap Copy Constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void	attack(std::string const& target)
{
	std::cout << "ScavTrap attack " << target << "\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode.\n";
	EP = EP - 1;
}

