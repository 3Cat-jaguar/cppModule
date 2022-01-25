/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 01:20:18 by ylee              #+#    #+#             */
/*   Updated: 2022/01/25 14:38:57 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
private:
	T*				arr;
	unsigned int	len;
public:
	Array():len(0) { arr = new T[0]; }

	Array(unsigned int n):len(n) { arr = new T[n]; }

	Array(const Array& copy)
	{
		len = copy.len;
		arr = new T[len];
		for (unsigned int i = 0; i < len; i++)
			arr[i] = copy.arr[i];
	}

	Array& operator=(const Array& copy)
	{
		if (this == copy)
			return *this ;
		delete []arr;
		len = copy.len;
		arr = new T[len];
		for (unsigned int i = 0; i < len; i++)
			arr[i] = copy.arr[i];
		return *this ;
	}

	~Array() { delete []arr; }

	T&	operator[](long long int idx)
	{
		if (idx < 0 || idx >= len)
			throw ( std::out_of_range("index is out of range\n") );

		return arr[idx] ;
	}

	unsigned int	size()
	{
		return len ;
	}
};


#endif
