/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:28:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/17 16:08:17 by ylee             ###   ########.fr       */
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

/*
	class	Bureaucrat::GradeTooHighException
	{
		//overriding std::exception what()
		const char* what() const _NOEXCEPT
		{
			return "Grade is too high. Max grade is 1.\n" ;
		}
	}

	class	Bureaucrat::GradeTooLowException
	{
		//overriding std::exception what()
		const char* what() const noexcept
		{
			return "Grade is too low. Min grade is 150.\n" ;
		}
	}
*/
std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out << "Name : " << obj.getName() << " , Grade : " << obj.getGrade() << "\n";
	return out;
}
