/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:14:34 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/21 17:06:15 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
:type("default animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
: type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(Animal const &animal)
{
	*this = animal;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &animal)
{
	type = animal.type;
	return *this;
}

std::string Animal::getType() const
{
	return type;
}
