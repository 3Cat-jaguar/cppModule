/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:41:44 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 17:11:22 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie(" 
		<< name
		<< ") is dead"
		<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" 
		<< name
		<< "> BraiiiiiiinnnzzzZ..." 
		<< std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
