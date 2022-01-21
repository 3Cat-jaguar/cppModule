/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:28:37 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 17:41:23 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("Presidential Pardon Form", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):Form("Presidential Pardon Form", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):Form(copy), target(copy.target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	Form::operator=(copy);
	target = copy.target;
	return *this;	
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const std::string& PresidentialPardonForm::getTarget() const
{
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	//사인받았는지 먼저 확인
	if (!getIsSigned())
		throw (NotSignedException());
	//실행할수있는지 확인
	if (executor.getGrade() > getGradeForExec())
	{
		std::string ret = "Required Grade is " + IntToStr(getGradeForExec()) + ". This Grade is " + IntToStr(executor.getGrade()) + ".\n";
		std::cout << ret;
		throw(GradeTooLowException());
	}
	//Trillian 을 사면하자
	std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}

