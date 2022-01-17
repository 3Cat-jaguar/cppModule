/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:21:41 by ylee              #+#    #+#             */
/*   Updated: 2022/01/17 16:07:28 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat a("test1", 0);
	Bureaucrat b("test2", 151);
	Bureaucrat c("test3", 10);
	Bureaucrat d("test4", 1);
	Bureaucrat e("test5", 150);
	std::cout << "\n<< c test3 >>\n";
	std::cout << c << std::endl;
	c.increGrade();
	std::cout << c << std::endl;
	c.decreGrade();
	std::cout << c << std::endl;
	std::cout << "\n<< d test4 >>\n";
	std::cout << d << std::endl;
	d.increGrade();
	std::cout << d << std::endl;
	d.decreGrade();
	std::cout << d << std::endl;
	std::cout << "\n<< e test5 >>\n";
	std::cout << e << std::endl;
	e.increGrade();
	std::cout << e << std::endl;
	e.decreGrade();
	std::cout << e << std::endl;

	return (0);
}
