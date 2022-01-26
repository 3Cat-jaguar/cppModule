/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:09:29 by ylee              #+#    #+#             */
/*   Updated: 2022/01/26 22:10:29 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <iterator>

template <typename T>
int	easyfind(T & container, int n)
{
	typename T::iterator iter;
	for (iter = container.begin(); iter != container.end(); iter++)
	{
		if (*iter == n)
			return *iter ;
	}
	throw (std::out_of_range("cannot found\n"));
}

#endif
