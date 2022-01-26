/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:29:45 by ylee              #+#    #+#             */
/*   Updated: 2022/01/27 00:22:24 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

Span::Span():maxSize(0) {}
Span::Span(unsigned int N):maxSize(N) { vec.reserve(N); }
Span::Span(const Span& copy) { *this = copy ; }
Span& Span::operator=(const Span& copy)
{
	vec.clear();
	vec = copy.vec;
	maxSize = copy.maxSize;
	return *this ;
}
Span::~Span() { vec.clear(); }

void	Span::addNumber(int n)
{
	if (vec.size() == maxSize)
		throw( std::length_error("Cannot add int. This container is Full\n") );
	vec.push_back(n);
}

template <typename T>
void	Span::addNumbers(const T& first, const T& last, unsigned int len)
{
	if (maxSize - vec.size() < len)
		throw( std::length_error("Cannot add ints. Don't have enough space\n") );
	vec.insert(vec.end(), first, last);
}

int		Span::shortestSpan()
{
	if (maxSize < 2)
		throw ( std::length_error("Cannot cal Span. This container has less than 2 elements.\n") );
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	int		min = tmp.back() - tmp.front();
	std::vector<int>::iterator cur = tmp.begin();
	std::vector<int>::iterator next = cur + 1;
	while (next != tmp.end())
	{
		if (*next - *cur < min)
			min = *next - *cur;
		cur++;
		next++;
	}
	return min ;
}

int		Span::longestSpan()
{
	if (maxSize < 2)
		throw ( std::length_error("Cannot cal Span. This container has less than 2 elements.\n") );
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	return tmp.back() - tmp.front() ;
}

