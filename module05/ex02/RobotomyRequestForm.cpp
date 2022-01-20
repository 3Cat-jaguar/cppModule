/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:28:37 by ylee              #+#    #+#             */
/*   Updated: 2022/01/20 23:16:51 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

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
		//로봇화가 되고있는지에 대한 처리
	}

