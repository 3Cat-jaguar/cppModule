/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:28:37 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 00:19:22 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

	PresidentialPardonForm::PresidentialPardonForm():Form("Presidential Pardon Form", 25, 5) {}

	PresidentialPardonForm::PresidentialPardonForm(const std::string& target):Form("Presidential Pardon Form", 25, 5), target(target) {}

	PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):Form(copy), target(copy.target) {}

	PresidentialPardonForm::PresidentialPardonForm& operator=(const PresidentialPardonForm& copy)
	{
		Form::operator=(copy);
		target = copy.target;
	}

	const std::string& PresidentialPardonForm::getTarget() const
	{
		return target;
	}

	void PresidentialPardonForm::execute(Bureaucrat const & executor) const
	{
		//Trillian 을 사면하자
	}

