/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:43:17 by ylee              #+#    #+#             */
/*   Updated: 2021/12/23 19:13:05 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv)
{
	Karen	karen;
	int		filterLevel = 0;
	std::string	complainLevel[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	if (argc > 2)
	{
		std::cout << "Too many arguments\n";
		return (0);
	}
	if (argc == 2)
	{
		std::string fstr (argv[1]);
		while (filterLevel < 4)
		{
			if (complainLevel[filterLevel] == fstr)
				break;
			else
				filterLevel++;
		}
	}
	if (filterLevel == 4)
	{
		std::cout << "All complains are filtering...\n";
		return (0);
	}
	karen.complain(filterLevel, "test");
	karen.complain(filterLevel, "INFO");
	karen.complain(filterLevel, "DEBUG");
	karen.complain(filterLevel, "INFO");
	karen.complain(filterLevel, "WARNING");
	karen.complain(filterLevel, "DEBUG");
	karen.complain(filterLevel, "ERROR");
	karen.complain(filterLevel, "WARNING");
	karen.complain(filterLevel, "INFO");
	karen.complain(filterLevel, "DEBUG");
	return (0);
}
