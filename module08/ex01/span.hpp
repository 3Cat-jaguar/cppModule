/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:29:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/26 23:04:31 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>

class	Span
{
private:
	std::vector<int>	vec;
	unsigned int	maxSize;

public:
	Span();
	Span(unsigned int N);
	Span(const Span& copy);
	Span& operator=(const Span& copy);
	~Span();
	void	addNumber(int n);
	template <typename T>
	void	addNumber(const T& first, const T& last, unsigned int len);
	int		shortestSpan();
	int		longestSpan();
};

#endif
