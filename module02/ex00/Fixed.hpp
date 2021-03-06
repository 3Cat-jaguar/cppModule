/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:36:33 by ylee              #+#    #+#             */
/*   Updated: 2022/01/01 22:23:48 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					fixedValue;
		static const int	fracBitNum = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& otherObj);
		~Fixed(void);
		Fixed&	operator=(const Fixed& otherObj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
