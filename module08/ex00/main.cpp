/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:27:59 by ylee              #+#    #+#             */
/*   Updated: 2022/01/26 12:28:42 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <exception>

int	main(void)
{

	std::cout << ">> test container - vector <<\n";
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(3);
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(11);

	try
	{
		int ret = easyfind(vec, 17);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		int ret = easyfind(vec, 1);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		int ret = easyfind(vec, 3);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}

	std::cout << "\n>> test container - deque <<\n";
	std::deque<int> deq;
	deq.push_back(5);
	deq.push_back(3);
	deq.push_back(17);
	deq.push_back(9);
	deq.push_back(11);

	try
	{
		int ret = easyfind(deq, 17);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		int ret = easyfind(deq, 1);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		int ret = easyfind(deq, 3);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}

	std::cout << "\n>> test container - list <<\n";
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(9);
	lst.push_back(11);

	try
	{
		int ret = easyfind(lst, 17);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		int ret = easyfind(lst, 1);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		int ret = easyfind(lst, 3);
		std::cout << "find : " << ret << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	
	return 0 ;
}
