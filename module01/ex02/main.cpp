/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:20:18 by ylee              #+#    #+#             */
/*   Updated: 2021/12/15 20:34:15 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	stringORG = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringORG;
	std::string&	stringREF = stringORG;

	std::cout << "<< the address in memory of the string >> \n";
	std::cout << "address of the string : " << &stringORG << std::endl;
	std::cout << "address using stringPTR : " << stringPTR << std::endl;
	std::cout << "address using stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "<< display the string >> \n";
	std::cout << "using the pointer : " << *stringPTR << std::endl;
	std::cout << "using the reference: " << stringREF << std::endl;
	return (0);
}
