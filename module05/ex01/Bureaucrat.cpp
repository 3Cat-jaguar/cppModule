/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:28:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/20 23:37:43 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade)
{
	std::cout << "Bureaucrat Constructor with param called\n";
	try
	{
		if (grade < 1)
			throw (GradeTooHighException());
		if (grade > 150)
			throw (GradeTooLowException());
		this->name = name;
		this->grade = grade;
	}
	catch(std::exception & e)
	{
		std::cout << e.what();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& otherObj)
{
	std::cout << "Bureaucrat Copy Constructor called\n";
	*this = otherObj;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& otherObj)
{
	std::cout << "Bureaucrat Assignation Operator called\n";
	name = otherObj.name;
	grade = otherObj.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << name << " Destructor called\n";
}

std::string		Bureaucrat::getName() const
{
	return name ;
}

unsigned int	Bureaucrat::getGrade() const
{
	return grade ;
}

void			Bureaucrat::increGrade()
{
	std::cout << "increGrade func called\n";
	try
	{
		if (grade == 1)
			throw (GradeTooHighException());
		grade = grade - 1;
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

void			Bureaucrat::decreGrade()
{
	std::cout << "decreGrade func called\n";
	try
	{
		if (grade == 150)
			throw (GradeTooLowException());
		grade = grade + 1;
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

void		Bureaucrat::signForm(Form& form)
{
	if (form.getIsSigned()) {
		std::cout << "This form is signed already\n";
		return ;
	}
	while (grade >= 1)
	{
		try {
			form.beSigned(*this);
			std::cout << name << " signs " << form.getName() << ". \"This form can sign!!!\"\n";
			break;
		}
		catch (std::exception& e)
		{
			std::cout << name << " cannot sign " << form.getName() << " because ";
			std::cout << e.what();
			Bureaucrat::increGrade();
		}
	}

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high. Max grade is 1.\n" ;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low. Min grade is 150.\n" ;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out << "Name : " << obj.getName() << " , Grade : " << obj.getGrade() << "\n";
	return out;
}

