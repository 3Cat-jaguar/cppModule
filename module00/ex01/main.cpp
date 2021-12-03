/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:08:50 by ylee              #+#    #+#             */
/*   Updated: 2021/12/01 16:39:16 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	init_print()
{
	std::cout << "* Welcome! This is Ylee's PhoneBook *"
		<< std::endl
		<< std::endl;
}

void	printStrWithFormat(int size, char c, std::string str)
{
	std::cout << std::setfill(c) << std::setw(size);
	if (str.size() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	std::cout << str;
}

void	printDevideLine()
{
			std::cout << "|";
			printStrWithFormat(11, '-', "|");
			printStrWithFormat(11, '-', "|");
			printStrWithFormat(11, '-', "|");
			printStrWithFormat(11, '-', "|");
			std::cout << std::endl;
}

int		main(void)
{
	std::string	command;
	std::string data[5];
	phonebook	list[8];
	int			i;
	int			cnt;

	init_print();
	cnt = 0;
	while (1)
	{
		std::cout << "what command do you want? ( ADD / SEARCH / EXIT ) : ";
		std::cin >> command;
		if (command == "EXIT")
		{
			std::cout << "Really?? Okay, Bye~" << std::endl;
			return (0);
		}
		else if (command == "ADD")
		{
			i = cnt % 8;
			list[i].addInfo(cnt);
			cnt++;
		}
		else if (command == "SEARCH")
		{
			printDevideLine();
			
			std::cout << "|";
			printStrWithFormat(10, ' ', "index");
			std::cout << "|";
			printStrWithFormat(10, ' ', "first name");
			std::cout << "|";
			printStrWithFormat(10, ' ', "last name");
			std::cout << "|";
			printStrWithFormat(10, ' ', "nickname");
			std::cout << "|";
			std::cout << std::endl;
			
			printDevideLine();
			
			i = 0;
			while (i < 8)
			{
				if (list[i].getIndex() != 0)
					list[i].printList();
				else
					break ;
				i++;
			}
			printDevideLine();
			
			if (i == 0)
				std::cout << "\n This phonebook is empty\n";
			else
			{
				std::cout << "If you want to see detail, press index num. Or not, press 0\n";
				std::cin >> i;
				if (i == 0)
					;
				else if (i < 1 || list[(i - 1) % 8].getIndex() != i)
					std::cout << "you press wrong number" << std::endl;
				else
					list[(i - 1) % 8].printDetail();
			}
		}
		else
			std::cout << command <<" : command not found";
		std::cout << std::endl;
	}
	return (0);
}
