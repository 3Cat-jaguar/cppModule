/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:28:37 by ylee              #+#    #+#             */
/*   Updated: 2022/01/21 04:02:03 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

	ShrubberyCreationForm::ShrubberyCreationForm():Form("Shrubbery Creation Form", 145, 137) {}

	ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):Form("Shrubbery Creation Form", 145, 137), target(target) {}

	ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy):Form(copy), target(copy.target) {}
	
	ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
	{
		Form::operator=(copy);
		target = copy.target;
		return *this;
	}

	ShrubberyCreationForm::~ShrubberyCreationForm() {}

	const std::string& ShrubberyCreationForm::getTarget() const
	{
		return target;
	}

	void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
	{
		//사인받았는지 먼저 확인
		if (!getIsSigned())
			throw (GradeTooLowException());
		//실행할수있는지 확인
		if (executor.getGrade() > getGradeForExec())
		{
			std::string ret = "Required Grade is " + IntToStr(getGradeForExec()) + ". This Grade is " + IntToStr(executor.getGrade()) + ".\n";
			std::cout << ret;
			throw(GradeTooLowException());
		}
		// tree 를 그린다.
		std::string outfileName = target + "_shrubbery";
		std::string	tree =	"     *       \n";
		tree = tree + 		"    ***      \n";
		tree = tree + 		"   *****     \n";
		tree = tree + 		"  *******    \n";
		tree = tree + 		"    |||      \n";
		tree = tree + 		"____|||_____ \n";
		try{
			std::ofstream	outfile(outfileName);
			outfile << tree;
			outfile.close();
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

