/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:28:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/20 00:35:48 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

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
