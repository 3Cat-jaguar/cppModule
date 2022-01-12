/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 17:33:30 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog Constructor called\n";
}

Dog::Dog(std::string& type):Animal(type)
{
	std::cout << "Dog Constructor with type \' " << type << " \' called\n";
}

Dog::Dog(const Dog& otherObj):Animal(otherObj)
{
	std::cout << "Dog Copy Constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}

Dog&	Dog::operator=(const Dog& otherObj)
{
	Animal::operator=(otherObj);
	return *this ;
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Woof! Woof!! WOOF!!!\n";
}

