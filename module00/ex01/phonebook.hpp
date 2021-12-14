/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:08:50 by ylee              #+#    #+#             */
/*   Updated: 2021/12/14 18:51:58 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class	PhoneBook
{
	private:
		std::string	firstName[8];
		std::string	lastName[8];
		std::string	nickName[8];
		std::string	phoneNum[8];
		std::string	darkestSecret[8];

	public:
		std::string	getFirstName(int i)
		{
			return (firstName[i]);
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

		void	printDetail(int i);
		void	printList(int i);
		void	addInfo(int i);
};
