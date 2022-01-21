/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:21:41 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 20:24:55 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void	InternMakeForm(std::string formName, std::string target)
{
	Intern	ylee;
	Form*	form;
	form = ylee.makeForm(formName, target);

	if (form)
	{
		std::cout << "\nResult : SUCCESS\n";
		std::cout << *form;
		std::cout << "[ Target ]\n\t";
		std::cout << (*(RobotomyRequestForm*)form).getTarget() << std::endl;
		delete form;
	}
	else
		std::cout << "\nResult : FAIL\n";
}

int		main()
{
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubery Creation", "Office");
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubbery create", "Office");
	std::cout << "\n=================\n\n";
	InternMakeForm("Robotomy request", "Intern1");
	std::cout << "\n=================\n\n";
	InternMakeForm("robotomy request", "Intern1");
	std::cout << "\n=================\n\n";
	InternMakeForm("Presidential pardon", "Marvin");
	std::cout << "\n=================\n\n";
	InternMakeForm("presidential pardon", "Marvin");

	return (0);
}
