/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:47:22 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 21:41:57 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string&	Weapon::getType(void)
{
	std::string&	result = type;
	return (result);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
