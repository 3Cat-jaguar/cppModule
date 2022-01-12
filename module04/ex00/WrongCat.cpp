/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 18:57:50 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called\n";
}

WrongCat::WrongCat(std::string& type):WrongAnimal(type)
{
	std::cout << "WrongCat Constructor with type \' " << type << " \' called\n";
}

WrongCat::WrongCat(const WrongCat& otherObj):WrongAnimal(otherObj)
{
	std::cout << "WrongCat Copy Constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& otherObj)
{
	WrongAnimal::operator=(otherObj);
	return *this ;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat : Meow! Meeeeeooooow!! MEEEEOOOOWWWWWW!!!\n";
}

