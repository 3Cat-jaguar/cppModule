/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:28:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 03:45:23 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
		std::string		name;
		unsigned int	grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, unsigned int grade);
		Bureaucrat(const Bureaucrat& otherObj);
		Bureaucrat&	operator=(const Bureaucrat& otherObj);
		~Bureaucrat();
		std::string		getName() const;
		unsigned int	getGrade() const;
		void			increGrade();
		void			decreGrade();
		void			signForm(Form& form);
		void			executeForm(Form const & form);
		class	GradeTooHighException : public std::exception
		{
			//overriding std::exception what()
			const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			//overriding std::exception what()
			const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj);

#endif