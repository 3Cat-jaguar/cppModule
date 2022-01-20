/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:21:41 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 04:18:38 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main()
{
	ShrubberyCreationForm doc1("doc1");
	ShrubberyCreationForm doc2("doc2");
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

	std::cout << "===== ylee want execute doc1 =====\n\n";
	
	ylee.executeForm(doc1);
	std::string name = doc1.getTarget() + "_shrubbery";
	std::cout << "now, we open file, name : " << name << "\n";
	std::ifstream infile(name);
	if (infile.fail())
		std::cout << "this file does not exist\n";
	else
	{
		std::string str;
		while (!infile.eof())
		{
			str.clear();
			std::getline(infile, str);
			std::cout << str << std::endl;
		}
		infile.close();
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
