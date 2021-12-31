/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:36:33 by ylee              #+#    #+#             */
/*   Updated: 2021/12/31 17:08:34 by ylee             ###   ########.fr       */
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
		Fixed(Fixed& otherObj);
		~Fixed(void);
		Fixed&	operator=(Fixed& otherObj);
		int		getRawBits(void);
		void	setRawBits(int const raw);
};

#endif
