/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:28:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 19:12:08 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("NoName"), gradeForSign(0), gradeForExec(0), isSigned(false)
{
}

Form::Form(const std::string& name, const unsigned int s, const unsigned int e):name(name), gradeForSign(s), gradeForExec(e), isSigned(false)
{
	try{
		if (s < 1 || e < 1)
			throw(GradeTooHighException());
		if (s > 150 || e > 150)
			throw(GradeTooLowException());
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}

Form::Form(const Form& copy):name(copy.name), gradeForSign(copy.gradeForSign), gradeForExec(copy.gradeForExec)
{
	*this = copy;
}

Form& Form::operator=(const Form& copy)
{
	isSigned = copy.isSigned;
	return *this;
}

Form::~Form()
{
}

std::string		Form::getName() const
{
	return name;
}

unsigned int	Form::getGradeForSign() const
{
	return gradeForSign;
}

unsigned int	Form::getGradeForExec() const
{
	return gradeForExec;
}

bool			Form::getIsSigned() const
{
	return isSigned;
}

void		Form::beSigned(Bureaucrat& doc)
{
	if (doc.getGrade() <= gradeForSign)
	{
		this->isSigned = true;
	}
	else
	{
		std::string ret = "Required Grade is " + IntToStr(gradeForSign) + ". This Grade is " + IntToStr(doc.getGrade()) +".\n";
		std::cout << ret;
		throw(GradeTooLowException());
	}
}

const char* Form::NotSignedException::what() const throw()
{
	return "This Form is not signed yet.\n";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high.\n";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low.\n";
}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << "[ " << form.getName() << " ]\n";
	out << "\tGrade for Sign\t: " << form.getGradeForSign() << std::endl;
	out << "\tGrade for Exec\t: " << form.getGradeForExec() << std::endl;
	out << "\tThis is Signed?\t: ";
	if (form.getIsSigned())
		out << "Signed" << std::endl;
	else
		out << "Not Signed" << std::endl;
	return out;
}

std::string	IntToStr(const unsigned int num)
{
	unsigned int	n = num;
	std::string ret;

	while (n > 0)
	{
		ret = ret + (char)((n % 10) + '0');
		n = n / 10;
	}
	std::reverse(ret.begin(), ret.end());
	return ret;
}

