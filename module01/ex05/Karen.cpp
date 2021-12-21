/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:43:42 by ylee              #+#    #+#             */
/*   Updated: 2021/12/22 01:57:21 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){};

void	Karen::debug()
{
	std::cout << "this func is debug\n";
}

void	Karen::info()
{
	std::cout << "this func is info\n";
}

void	Karen::warning()
{
	std::cout << "this func is warning\n";
}

void	Karen::error()
{
	std::cout << "this func is error\n";
}

void	Karen::complain(std::string level)
{
	long long int	kptr = (long long int)this;
	std::cout << "this func is complain with " << level << std::endl;
	void	(Karen::*func) ();

	func = &Karen::debug;
	std::cout << "Karen pointer : " << this << std::endl;
	std::cout << "K pointer : " << std::hex <<  kptr << std::endl;
	std::cout << "Karen::debug pointer : " << &Karen::debug << std::endl;
	std::cout << "func : " << func << std::endl;
	(this->*func)();
	(this->*1)();
//	std::cout << "*func : " << *func << std::endl;
}

