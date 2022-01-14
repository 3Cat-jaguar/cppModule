/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/13 21:08:40 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog Constructor called\n";
	brain = new Brain();
}

Dog::Dog(const Dog& otherObj):Animal(otherObj)
{
	std::cout << "Dog Copy Constructor called\n";
	brain = new Brain();
	*this = otherObj;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete brain;
}

Dog&	Dog::operator=(const Dog& otherObj)
{
	std::cout << "Dog Assignation operator called\n";
	*brain = *(otherObj.brain);
	return *this ;
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Woof! Woof!! WOOF!!!\n";
}

Brain*	Dog::getBrain()
{
	return brain;
}

std::string	Dog::getBrainIdea(unsigned int idx)
{
	return brain->getIdea(idx) ;
}

int			Dog::addBrainIdea(std::string idea)
{
	return brain->addIdea(idea) ;
}

