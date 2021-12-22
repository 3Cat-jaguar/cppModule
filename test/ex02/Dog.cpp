/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:14:39 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/21 16:40:22 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*dog.getBrain());
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(Dog const &dog)
{
	if (this != &dog)
	{
		Animal::operator=(dog);
		brain = new Brain(*dog.getBrain());
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Class Dog makeSound Call!!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return brain;
}

std::string Dog::getBrainIdea(int index) const
{
	return brain->getIdea(index);
}

void Dog::addBrainIdea(std::string idea)
{
	brain->addIdea(idea);
}
