/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:53:38 by ylee              #+#    #+#             */
/*   Updated: 2022/01/09 22:23:42 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(const std::string& Name) : ClapTrap(Name, 100, 100, 30)
{
	std::cout << "FragTrap constructor with name \' " << Name << " \'  called\n";
}

FragTrap::FragTrap(const FragTrap& otherObj):ClapTrap(otherObj)
{
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< Name << " Destructor called\n";
}

FragTrap&	FragTrap::operator=(const FragTrap& otherObj)
{
	ClapTrap::operator=(otherObj);
	return *this;
}

void	FragTrap::attack(std::string const& target)
{
	std::cout << "FragTrap < " << Name << " > attack < " << target << " >, causing < " << AD << " > points of damage!\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap < " << Name << " > : Hey Guys!!! High Fives!!! TRUST ME!!! \n";
	EP = EP - 1;
}

