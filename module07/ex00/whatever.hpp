/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:26:21 by ylee              #+#    #+#             */
/*   Updated: 2022/01/25 23:00:21 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void	swap(T& a, T& b)
{
	T tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T	min(T& a, T& b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T	max(T& a, T& b)
{
	if (a > b)
		return a;
	return b;
}

class	AnyClass
{
private:
	int		num;
public:
	AnyClass():num(0) {}
	AnyClass( int n ):num(n) {}
	int		getNum() const { return num ; }
	bool	operator>(const AnyClass& otherObj) const { return num > otherObj.num ; }
	bool	operator<(const AnyClass& otherObj) const { return num < otherObj.num ; }
	bool	operator>=(const AnyClass& otherObj) const { return num >= otherObj.num ; }
	bool	operator<=(const AnyClass& otherObj) const { return num <= otherObj.num ; }
	bool	operator==(const AnyClass& otherObj) const { return num == otherObj.num ; }
	bool	operator!=(const AnyClass& otherObj) const { return num != otherObj.num ; }
};

std::ostream&	operator<<(std::ostream& out, const AnyClass& obj)
{
	out << obj.getNum();
	return out ;
}
#endif

