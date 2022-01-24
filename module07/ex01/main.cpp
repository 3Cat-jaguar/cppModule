/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 00:33:59 by ylee              #+#    #+#             */
/*   Updated: 2022/01/25 00:42:20 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int 	main(void)
{
	int	intArr[4] = { 10, 11, 42, 63 };
	std::string strArr[5] = {
		"cpp",
		"07",
		"template",
		"almost over"
	};
	AnyClass	classArr[4] = {
		AnyClass(10),
		AnyClass(11),
		AnyClass(42),
		AnyClass(63)
	};

	std::cout << ">>Execute iter func with int type <<\n";
	iter(intArr, 4, getElement);

	std::cout << "\n>>Execute iter func with string type <<\n";
	iter(strArr, 5, getElement);

std::cout << "\n>>Execute iter func with class type <<\n";
	iter(classArr, 4, getElement);
}

