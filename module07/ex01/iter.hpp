/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 00:05:30 by ylee              #+#    #+#             */
/*   Updated: 2022/01/25 00:44:18 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
T	getElement(T* arr, int idx)
{
	return arr[idx] ;
}

template <typename T>
void	iter(T* arr, size_t len, T (*func)(T*, int))
{
	std::cout << "Each element print : ";
	for (size_t i = 0; i < len; i++)
	{
		std::cout << func(arr, i);
		if (i + 1 != len)
			std::cout << " , ";
	}
	std:: cout << " // end\n";
}

class	AnyClass
{
private:
	int		num;
public:
	AnyClass():num(0) {}
	AnyClass(int n):num(n) {}
	int		getNum() const { return num ; }
};

std::ostream& operator<<(std::ostream& out, const AnyClass& obj)
{
	out << obj.getNum();
	return out ;
}

#endif
