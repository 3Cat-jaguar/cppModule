/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:04:44 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 18:49:15 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
public:
	Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& copy);
	~Intern();
	Form*	makeShrubberyCreationForm(std::string& target);
	Form*	makeRobotomyRequestForm(std::string& target);
	Form*	makePresidentialPardonForm(std::string& target);
	Form*	makeForm(std::string form, std::string target);
	class	UnknownFormException:public std::exception
	{
		const char*	what() const throw();
	};
};

#endif

