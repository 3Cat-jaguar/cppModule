/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:16:02 by ylee              #+#    #+#             */
/*   Updated: 2022/01/26 22:09:15 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& copy)
{
	*this = copy;
	return *this ;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return	this->c.begin() ;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() { return this->c.end(); }

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const { return this->c.begin(); }

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const { return this->c.end(); }

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin() { return this->c.rbegin(); }

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend() { return this->c.rend(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const { return this->c.rbegin(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const { return this->c.rend(); }

