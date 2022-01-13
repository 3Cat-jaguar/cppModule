/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:37:49 by ylee              #+#    #+#             */
/*   Updated: 2022/01/13 15:38:02 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain():cnt(0)
{
	std::cout << "Brain Default Constructor called\n";
}

Brain::Brain(const Brain& otherObj)
{
	std::cout << "Brain Copy Constructor called\n";
	*this = otherObj;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}

Brain&	Brain::operator=(const Brain& otherObj)
{
	std::cout << "Brain Assignation operator called\n";
	for (cnt = 0; cnt < otherObj.cnt; cnt++)
	{
		ideas[cnt] = otherObj.ideas[cnt];
	}
	return *this;
}

std::string	Brain::getIdea(unsigned int idx) const
{
	if (idx >= 100 || ideas[idx].empty())
	{
		std::cout << "Wrong index\n";
		return NULL ;
	}
	return ideas[idx];
}

int			Brain::addIdea(const std::string& idea)
{
	if (cnt < 100)
	{
		ideas[cnt] = idea;
		cnt++;
		return (cnt);
	}
	std::cout << "Idea cannot add because Brain is full already\n";
	return -1 ;
}
