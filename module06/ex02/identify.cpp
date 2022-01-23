/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:57:35 by ylee              #+#    #+#             */
/*   Updated: 2022/01/23 20:22:12 by ylee             ###   ########.fr       */
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
	else if (i % 3 == 2)
	{
		return new C();
	}
}

void	identify(Base* p)
{

}

void	identify(Base& p)
{

}

