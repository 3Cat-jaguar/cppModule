/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 17:33:43 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat Constructor called\n";
}

Cat::Cat(std::string& type):Animal(type)
{
	std::cout << "Cat Constructor with type \' " << type << " \' called\n";
}

Cat::Cat(const Cat& otherObj):Animal(otherObj)
{
	std::cout << "Cat Copy Constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}

Cat&	Cat::operator=(const Cat& otherObj)
{
	Animal::operator=(otherObj);
	return *this ;
}

void	Cat::makeSound() const
{
	std::cout << "Cat : Meow! Meeeeeooooow!! MEEEEOOOOWWWWWW!!!\n";
}

