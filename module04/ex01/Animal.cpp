/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:42:10 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 17:27:20 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("NoName")
{
	std::cout << "Animal Constructor called\n";
}

Animal::Animal(const std::string& type):type(type)
{
	std::cout << "Animal Constructor with type \' " << type << " \' called\n";
}

Animal::Animal(const Animal& otherObj)
{
	std::cout << "Animal Copy Constructor called\n";
	*this = otherObj;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

Animal&	Animal::operator=(const Animal& otherObj)
{
	std::cout << "Animal Assignation operator called\n";
	type = otherObj.type;
	return *this;
}

std::string	Animal::getType() const
{
	std::cout << "Animal getType function called\n";
	return type ;
}

void		Animal::makeSound() const
{
	std::cout << "Animal cannot make sound\n";
}

