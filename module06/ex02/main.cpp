/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:23:11 by ylee              #+#    #+#             */
/*   Updated: 2022/01/25 17:46:42 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int	main(void)
{
	Base*	testA = new A();
	Base*	testB = new B();
	Base*	testC = new C();
	Base*	testN = new Base();

	Base	base;
	A		a;
	B		b;
	C		c;
	Base&	refA = a;
	Base&	refB = b;
	Base&	refC = c;
	Base&	refN = base;

	std::cout << ">> test pointer cast <<\n";
	identify(testA);
	identify(testB);
	identify(testC);
	identify(testN);
	identify(&refB);

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";
	identify(refA);
	identify(refB);
	identify(refC);
	identify(refN);
	identify(*testA);

	delete testA;
	delete testB;
	delete testC;
	delete testN;

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";

	Base*	random = generate();
	identify(random);

	delete random ;

//	system("leaks identify");
}

