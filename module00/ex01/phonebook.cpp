/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:08:50 by ylee              #+#    #+#             */
/*   Updated: 2021/12/14 18:51:47 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::printDetail(int i)
{
	std::cout << "<< Detail Information >>" << std::endl;
	std::cout << "first name : " << firstName[i] << std::endl;
	std::cout << "last name : " << lastName[i] << std::endl;
	std::cout << "nickname : " << nickName[i] << std::endl;
	std::cout << "phone number : " << phoneNum[i] << std::endl;
	std::cout << "darkest secret : " << darkestSecret[i] << std::endl;
}

void	PhoneBook::printList(int i)
{
	std::cout << "|";
	printStrWithFormat(10, ' ', std::to_string(i + 1));
	std::cout << "|";
	printStrWithFormat(10, ' ', firstName[i]);
	std::cout << "|";
	printStrWithFormat(10, ' ', lastName[i]);
	std::cout << "|";
	printStrWithFormat(10, ' ', nickName[i]);
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::addInfo(int i)
{
	std::cin.ignore();
	std::cout << "first name : ";
	std::getline(std::cin, firstName[i]);
	std::cout << "last name : ";
	std::getline(std::cin, lastName[i]);
	std::cout << "nickname : ";
	std::getline(std::cin, nickName[i]);
	std::cout << "phone number : ";
	std::getline(std::cin, phoneNum[i]);
	std::cout << "darkest secret : ";
	std::getline(std::cin, darkestSecret[i]);
}
