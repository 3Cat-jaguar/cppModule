/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:14:36 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/20 16:31:08 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*cat.getBrain());
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(Cat const &cat)
{
	if (this != &cat)
	{
		Animal::operator=(cat);
		brain = new Brain(*cat.getBrain());
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Class cat makeSound Call!!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return brain;
}

std::string Cat::getBrainIdea(int index) const
{
	return brain->getIdea(index);
}

void Cat::addBrainIdea(std::string idea)
{
	brain->addIdea(idea);
}
