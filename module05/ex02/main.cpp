/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:21:41 by ylee              #+#    #+#             */
/*   Updated: 2022/01/20 15:36:43 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Form doc1("doc1", 70, 30);
	Form doc2("doc2", 100, 70);
	Bureaucrat ylee("ylee", 80);

	std::cout << doc1 << std::endl;
	std::cout << doc2 << std::endl;
	std::cout << ylee << std::endl;
	std::cout << "===== ylee want sign doc1 =====\n\n";
	ylee.signForm(doc1);
	try
	{
		doc1.beSigned(ylee);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << doc1 << std::endl;
	std::cout << "===== ylee want sign doc2 =====\n\n";
	ylee.signForm(doc2);
	try
	{
		doc2.beSigned(ylee);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << doc2 << std::endl;

	return (0);
}
