/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:36:33 by ylee              #+#    #+#             */
/*   Updated: 2022/01/03 17:04:12 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedValue(0)
{
	std::cout << "Default contructor called\n";
}

Fixed::Fixed(const int i)
{
	fixedValue = i << fracBitNum;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f)
{
	fixedValue = (int)roundf(f * (float)(1 << fracBitNum));
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& otherObj)
{
	std::cout << "Copy constructor called\n";
	*this = otherObj;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& otherObj)
{
	std::cout << "Assignation operator called\n";
	setRawBits(otherObj.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed& otherObj)
{
	int a = fixedValue;
	int b = otherObj.getRawBits();
	return a > b ;
}

bool	Fixed::operator<(const Fixed& otherObj)
{
	int a = fixedValue;
	int b = otherObj.getRawBits();
	return a < b ;
}

bool	Fixed::operator>=(const Fixed& otherObj)
{
	int a = fixedValue;
	int b = otherObj.getRawBits();
	return a >= b ;
}

bool	Fixed::operator<=(const Fixed& otherObj)
{
	int a = fixedValue;
	int b = otherObj.getRawBits();
	return a <= b ;
}

bool	Fixed::operator==(const Fixed& otherObj)
{
	int a = fixedValue;
	int b = otherObj.getRawBits();
	return a == b ;
}

bool	Fixed::operator!=(const Fixed& otherObj)
{
	int a = fixedValue;
	int b = otherObj.getRawBits();
	return a != b ;
}

Fixed	Fixed::operator+(const Fixed& otherObj)
{
	Fixed ret = *this;
	int a = fixedValue;
	int b = otherObj.getRawBits();
	ret.setRawBits(a+b);
	return ret;
}

Fixed	Fixed::operator-(const Fixed& otherObj)
{
	Fixed ret = *this;
	int a = fixedValue;
	int b = otherObj.getRawBits();
	ret.setRawBits(a-b);
	return ret;
}

Fixed	Fixed::operator*(const Fixed& otherObj)
{
	Fixed ret = *this;
	int a = fixedValue;
	int b = otherObj.getRawBits();
	ret.setRawBits(a * b / (1 << fracBitNum));
	return ret;
}

Fixed	Fixed::operator/(const Fixed& otherObj)
{
	Fixed ret = *this;
	int a = fixedValue;
	int b = otherObj.getRawBits();
	ret.setRawBits((a / b) * (1 << fracBit));
	return ret;
}

Fixed&	Fixed::operator++(void)
{
	this->setRawBits(fixedValue + 1);
	return *this ;
}

Fixed	Fixed::operator++(int)
{
	Fixed ret = *this;
	operator++();
	return ret;
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(fixedValue - 1);
	return *this ;
}

Fixed	Fixed::operator--(int)
{
	Fixed ret = *this;
	operator--();
	return ret;
}

int		Fixed::getRawBits(void) const
{
	return (this->fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	fixedValue = raw;
}

float	Fixed::toFloat(void) const
{
	float	i = (float)fixedValue;
	i = i / (float)(1 << fracBitNum);
	return (i);
}

int		Fixed::toInt(void) const
{
	float i = this->toFloat();
	return ((int)roundf(i));
}

static Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

static Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return out ;
}

