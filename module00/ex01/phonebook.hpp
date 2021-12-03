/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:08:50 by ylee              #+#    #+#             */
/*   Updated: 2021/12/01 16:41:22 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class	phonebook
{
	private:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNum;
		std::string	note;

	public:
		phonebook()
		{
			index = 0;
		}

		int		getIndex()
		{
			return (index);
		}

		std::string	getFirstName()
		{
			return (firstName);
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

		void	printDetail();
		void	printList();
		void	addInfo(int index);
};
