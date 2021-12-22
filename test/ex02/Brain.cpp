/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:09:51 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/20 16:33:33 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
:ideasCount(0)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &brain)
{
	ideasCount = brain.ideasCount;
	for (unsigned int i = 0; i < ideasCount; i++)
	{
		ideas[i] = brain.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(unsigned int index) const
{
	return ideas[index];
}

int Brain::addIdea(std::string idea)
{
	if (ideasCount == 100)
	{
		std::cout << "can't input, ideas full" << std::endl;
		return 0;
	}
	ideas[ideasCount++] = idea;
	return 1;
}
