/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:42:10 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 19:00:49 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("NoName")
{
	std::cout << "WrongAnimal Constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string& type):type(type)
{
	std::cout << "WrongAnimal Constructor with type \' " << type << " \' called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& otherObj)
{
	std::cout << "WrongAnimal Copy Constructor called\n";
	*this = otherObj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& otherObj)
{
	std::cout << "WrongAnimal Assignation operator called\n";
	type = otherObj.type;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	std::cout << "WrongAnimal getType function called\n";
	return type ;
}

void		WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal cannot make sound\n";
}

