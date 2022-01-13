/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/13 21:12:23 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat Constructor called\n";
	brain = new Brain();
}

Cat::Cat(const Cat& otherObj):Animal(otherObj)
{
	std::cout << "Cat Copy Constructor called\n";
	brain = new Brain();
	*this = otherObj;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete brain;
}

Cat&	Cat::operator=(const Cat& otherObj)
{
	std::cout << "Cat Assignation operator called\n";
	*brain = *(otherObj.brain);
	return *this ;
}

void	Cat::makeSound() const
{
	std::cout << "Cat : Meow! Meeeeeooooow!! MEEEEOOOOWWWWWW!!!\n";
}

Brain*	Cat::getBrain()
{
	return brain;
}

std::string	Cat::getBrainIdea(unsigned int idx)
{
	return brain->getIdea(idx);
}

int			Cat::addBrainIdea(std::string idea)
{
	return brain->addIdea(idea);
}

