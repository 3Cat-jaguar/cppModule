/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:36:33 by ylee              #+#    #+#             */
/*   Updated: 2021/12/27 18:10:32 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixedValue = 0;
	std::cout << "Default contructor called\n";
}

Fixed::Fixed(Fixed& otherObj)
{
	this->fixedValue = otherObj.getRawBits();
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(Fixed& otherObj)
{
	this->fixedValue = otherObj.getRawBits();
	std::cout << "Assignation operator called\n";
	return (*this);
}

int		Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedValue = raw;
}
