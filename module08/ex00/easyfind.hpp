/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:09:29 by ylee              #+#    #+#             */
/*   Updated: 2022/01/27 00:08:52 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <iterator>
# include <algorithm>

template <typename T>
int	easyfind(T & container, int n)
{
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		throw (std::out_of_range("cannot found\n"));
	return *iter ;
}

#endif
