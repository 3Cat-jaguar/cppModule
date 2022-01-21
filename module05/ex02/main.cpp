/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:21:41 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 17:44:16 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testShrubberyCreationForm(Bureaucrat& ylee, ShrubberyCreationForm& doc1)
{
	std::cout << "<< ylee want sign doc1 >>\n";
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

	std::cout << "<< ylee want execute doc1 >>\n";
	
	ylee.executeForm(doc1);
	std::string name = doc1.getTarget() + "_shrubbery";
	std::cout << "Now, we open file, name : " << name << ".\nResult : ";
	std::ifstream infile(name);
	if (infile.fail())
		std::cout << "FAIL!!\n\tThis file (" << name << ") does not exist\n";
	else
	{
		std::cout << "SUCCESS!! LET`S SHOW!!\n";
		std::string str;
		while (!infile.eof())
		{
			str.clear();
			std::getline(infile, str);
			std::cout << str << std::endl;
		}
		infile.close();
	}
}

void	testRobotomyRequestFormForm(Bureaucrat& ylee, RobotomyRequestForm& doc2)
{
	std::cout << "<< ylee want sign doc2 >>\n";
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

	std::cout << "<< ylee want execute doc2 >>\n";
	std::cout << "Result : \n\t";
	ylee.executeForm(doc2);
}

void	testPresidentialPardonForm(Bureaucrat& ylee, PresidentialPardonForm& doc3)
{
	std::cout << "<< ylee want sign doc3 >>\n";
	ylee.signForm(doc3);
	try
	{
		doc3.beSigned(ylee);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << doc3<< std::endl;

	std::cout << "<< ylee want execute doc3 >>\n";
	std::cout << "Result : \n\t";
	ylee.executeForm(doc3);
}

int		main()
{
	ShrubberyCreationForm doc1("MyHome");
	RobotomyRequestForm doc2("Marvin");
	PresidentialPardonForm doc3("Trillian");
	Bureaucrat ylee("ylee", 1);

	std::cout << doc1 << std::endl;
	std::cout << doc2 << std::endl;
	std::cout << doc3 << std::endl;
	std::cout << ylee << std::endl;

	std::cout << "===== test Shurubbery Creation Form =====\n\n";
	testShrubberyCreationForm(ylee, doc1);
	std::cout << std::endl;
	std::cout << "===== test Robotomy Request Form =====\n\n";
	testRobotomyRequestFormForm(ylee, doc2);
	std::cout << std::endl;
	std::cout << "===== test Presidential Pardon Form =====\n\n";
	testPresidentialPardonForm(ylee, doc3);

	return (0);
}
