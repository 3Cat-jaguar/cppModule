/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:04:44 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 20:26:38 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) { *this = copy; }

Intern&	Intern::operator=(const Intern& copy)
{
	(void)copy;
	return *this;
}

Intern::~Intern() {}

Form*	Intern::makeShrubberyCreationForm(std::string& target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeRobotomyRequestForm(std::string& target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makePresidentialPardonForm(std::string& target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string form, std::string target)
{
	std::cout << "<< Intern have to create < " << form << " > form for \"" << target << "\" >>\n";
	Form*	(Intern::*func[])(std::string&) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};
	std::string	formList[] = {
		"shrubbery create",
		"robotomy request",
		"presidential pardon"
	};
	int i = 0;
	while (i < 3)
	{
		if (formList[i] == form)
			break;
		else
			i++;
	}
	try
	{
		if(i == 3)
			throw(UnknownFormException());
		std::cout << "\tIntern creates < " << form << " > form. This form's target is \" " << target << " \".\n";
		return (this->*func[i])(target);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}
	return NULL;
}

const char*	Intern::UnknownFormException::what() const throw()
{
	return "\tIntern : What is this???????? I don't have any data about this form. I CANNOT WORK!!!\n"; 
}

