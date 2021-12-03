/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:30:48 by ylee              #+#    #+#             */
/*   Updated: 2021/09/13 23:54:18 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char	*toUpperStr(char *str)
{
	int		i;
	char	*upper;

	i = 0;
	upper = str;
	while (str && str[i])
	{
		upper[i] = std::toupper(str[i]);
		i++;
	}
	return (upper);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNVEARABLE FEEDBACK NOISE *";
	else
	{
		while (++i < argc)
			std::cout << toUpperStr(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}
