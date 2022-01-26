/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:30:03 by ylee              #+#    #+#             */
/*   Updated: 2022/01/26 23:15:21 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include "span.cpp"
#include <list>

int	main(void)
{
	Span sp = Span(10010);
	std::cout << ">>add 5, 3, 17, 9, 11 test<<\n";
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}

	std::cout << "\n>>add 10000 random numbers test<<\n";
	srand(time(NULL));
	std::list<int> lst;
	for (int i = 0; i < 10000; i++)
	{
		lst.push_back(rand());
	}
	sp.addNumber(lst.begin(), lst.end(), lst.size());
	std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan : " << sp.longestSpan() << std::endl;

	std::cout << "\n>>add more numbers test<<\n";
	while (1)
	{
		try
		{
			int n = rand();
			std::cout << n;
			sp.addNumber(n);
			std::cout << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << " : " << e.what() << std::endl;
			break ;
		}
	}
	return 0 ;
}
