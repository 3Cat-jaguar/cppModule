/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:28:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 03:26:23 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string name;
		const unsigned int	gradeForSign;
		const unsigned int	gradeForExec;
		bool		isSigned;
	public:
		Form();
		Form(const std::string& name, const unsigned int s, const unsigned int e);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		~Form();
		std::string		getName() const;
		unsigned int	getGradeForSign() const;
		unsigned int	getGradeForExec() const;
		bool			getIsSigned() const;
		void			beSigned(Bureaucrat& doc);
		class	GradeTooHighException:public std::exception
		{
			const char* what() const throw();
		};
		class	GradeTooLowException:public std::exception
		{
			const char* what() const throw();
		};

};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
