/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:08:50 by ylee              #+#    #+#             */
/*   Updated: 2021/12/14 18:58:22 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

void	printHeader()
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
}

int		ShowDataList(PhoneBook list, int cnt)
{
	int		i;

	printHeader();
	if (cnt > 7)
		cnt = 8;
	i = 0;
	while (i < cnt)
	{
		list.printList(i);
		i++;
	}
	printDevideLine();
	return (i);
}

int		main(void)
{
	std::string	command;
	PhoneBook	list;
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
			std::cout << "\nReally?? Okay, Bye~\n" << std::endl;
			return (0);
		}
		else if (command == "ADD")
		{
			i = cnt % 8;
			list.addInfo(i);
			std::cout << std::endl;
			cnt++;
		}
		else if (command == "SEARCH")
		{
			i = ShowDataList(list, cnt);
			if (cnt == 0)
				std::cout << "\n This phonebook is empty\n";
			else
			{
				std::cout << "If you want to see detail, press index num (1 ~ "
					<< i
					<< "). Or not, press 0.\n";
				std::cin >> i;
				if (i == 0)
					;
				else if (i < 1 || (cnt < 8 && i - 1 > cnt) || i > 8)
					std::cout << "you press wrong number" << std::endl;
				else
					list.printDetail((i - 1) % 8);
			}
		}
		else
			std::cout << command <<" : command not found";
		std::cout << std::endl;
	}
	return (0);
}
