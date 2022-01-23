/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:57:35 by ylee              #+#    #+#             */
/*   Updated: 2022/01/23 22:51:58 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base*	generate()
{
	srand(time(NULL));
	int i = rand();
	if (i % 3 == 0)
	{
		return new A();
	}
	else if (i % 3 == 1)
	{
		return new B();
	}
	else
	{
		return new C();
	}
}

void	identify(Base* p)
{
		if (dynamic_cast<A*>(p))
		{
			std::cout << "Real class : A\n";
			return ;
		}
		else if (dynamic_cast<B*>(p))
		{
			std::cout << "Real class : B\n";
			return ;
		}
		else if (dynamic_cast<C*>(p))
		{
			std::cout << "Real class : C\n";
			return ;
		}
		std::cerr << "This pointer cannot cast because it does not include A, B nor C\n";
}

void	identify(Base& p)
{
	Base check;
	try
	{
		check = dynamic_cast<A&>(p);
		std::cout << "Real class : A\n";
	}
	catch(std::exception& e)
	{
		try
		{
			check = dynamic_cast<B&>(p);
			std::cout << "Real class : B\n";
		}
		catch(std::exception& e)
		{
			try
			{
				check = dynamic_cast<C&>(p);
				std::cout << "Real class : C\n";
			}
			catch(std::exception& e)
			{
				std::cerr << "This reference cannot cast because ";
				std::cerr << e.what() << std::endl;

			}
		}
	}
}

