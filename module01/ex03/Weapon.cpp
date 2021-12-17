/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:47:22 by ylee              #+#    #+#             */
/*   Updated: 2021/12/16 17:49:14 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType(void)
{
	const std::string&	result = type;
	return (result);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
