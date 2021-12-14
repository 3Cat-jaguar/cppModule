/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 02:39:51 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 03:03:04 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class HumanA
{
	private:
		std::string name;
		int		club;
	public:
		HumanA(int index)
		{
			this->club = index;
			std::cout << "No Name Human is created\n";
		}
		HumanA(std::string name, int club)
		{
			this->name = name;
			this->club = club;
			std::cout << name << " Human is created\n";
		}
		~HumanA()
		{
			std::cout << name << " is dead\n";
		}

		int	getClub()
		{
			return (club);
		}

		std::string getName()
		{
			return (name);
		}
};

int		main(void)
{
	HumanA annonymous(1);
	std::string name ("yuri");
	HumanA ylee (name, 1);
	HumanA inyang ("injour", 2);
	std::cout << ylee.getClub() << std::endl;
	std::cout << ylee.getName() << std::endl;
	return (0);
}
