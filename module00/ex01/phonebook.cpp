/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:08:50 by ylee              #+#    #+#             */
/*   Updated: 2021/12/01 16:39:56 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phonebook::printDetail()
{
	std::cout << "<< "<< index << " information >>" << std::endl;
	std::cout << "index : " << index << std::endl;
	std::cout << "first name : " << firstName << std::endl;
	std::cout << "last name : " << lastName << std::endl;
	std::cout << "nickname : " << nickName << std::endl;
	std::cout << "phone number : " << phoneNum << std::endl;
	std::cout << "darkest secret : " << note << std::endl;
}

void	phonebook::printList()
{
//	std::string str;

	std::cout << "|";
	printStrWithFormat(10, ' ', std::to_string(index));
	std::cout << "|";
	printStrWithFormat(10, ' ', firstName);
	std::cout << "|";
	printStrWithFormat(10, ' ', lastName);
	std::cout << "|";
	printStrWithFormat(10, ' ', nickName);
	std::cout << "|";
	std::cout << std::endl;
/*	
	std::cout << index
		<< "\t" << firstName
		<< "\t" << lastName
		<< "\t" << nickName
		<< std::endl;
*/
}

void	phonebook::addInfo(int index)
{
	std::cin.ignore();
	this->index = index + 1;
	std::cout << "first name : ";
	std::getline(std::cin, firstName);
	std::cout << "last name : ";
	std::getline(std::cin, lastName);
	std::cout << "nickname : ";
	std::getline(std::cin, nickName);
	std::cout << "phone number : ";
	std::getline(std::cin, phoneNum);
	std::cout << "darkest secret : ";
	std::getline(std::cin, note);
}
