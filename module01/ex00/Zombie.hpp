/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:41:53 by ylee              #+#    #+#             */
/*   Updated: 2021/12/14 20:49:57 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class	Zombie
{
private:
	std::string	name;

public:
	Zombie(){}
	Zombie(std::string name)
	{
		this->name = name;
	}
	~Zombie()
	{
		std::cout << "Zombie(" << name << ") is dead" << std::endl;
	}
	void	announce(void)
	{
		std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	}
}
