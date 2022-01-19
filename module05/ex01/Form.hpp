/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:28:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/17 16:03:48 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

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
		getName();
		getGradeForSign();
		getGradeForExec();
		getIsSigned();
		beSigned();

};

std::ostream&	operator<<(std::ostream& out, const Form& obj);

#endif
