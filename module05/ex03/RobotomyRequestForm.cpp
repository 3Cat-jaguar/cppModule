/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:28:37 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 17:10:51 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():Form("Robotomy Request Form", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):Form("Robotomy Request Form", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form(copy), target(copy.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	Form::operator=(copy);
	target = copy.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string& RobotomyRequestForm::getTarget() const
{
	return target ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	//로봇화가 되고있는지에 대한 처리
	std::cout << "DRRRRRRRRR!!!! DRRRRRRRRRRRR!!!!!\n";
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully!!!\n";
	else
		std::cout << target << " does not robotomize because of unexpected error...\n";
}

