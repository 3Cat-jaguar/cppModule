/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:36:33 by ylee              #+#    #+#             */
/*   Updated: 2022/01/03 17:03:30 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					fixedValue;
		static const int	fracBitNum = 8;
	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& otherObj);
		~Fixed(void);
		Fixed&	operator=(const Fixed& otherObj);

		bool	operator>(const Fixed& otherObj);
		bool	operator<(const Fixed& otherObj);
		bool	operator>=(const Fixed& otherObj);
		bool	operator<=(const Fixed& otherObj);
		bool	operator==(const Fixed& otherObj);
		bool	operator!=(const Fixed& otherObj);
		
		Fixed	operator+(const Fixed& otherObj);
		Fixed	operator-(const Fixed& otherObj);
		Fixed	operator*(const Fixed& otherObj);
		Fixed	operator/(const Fixed& otherObj);

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& obj);

#endif
