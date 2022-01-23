/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:58:54 by ylee              #+#    #+#             */
/*   Updated: 2022/01/23 17:47:57 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int	main(int argc, char** argv)
{
	if(argc != 2 || !argv[1])
	{
		std::cout << "Must only 1 argument in\n";
		return (0);
	}
	conversion origin(argv[1]);
	std::string type[] = {
		"char",
		"int",
		"float",
		"double",
		"string"
	};
	std::cout << "===== parameter type : " << type[origin.getType()] << " =====\n";
	origin.convertPrint();
	return 0 ;
}
