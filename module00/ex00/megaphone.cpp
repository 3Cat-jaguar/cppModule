/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:30:48 by ylee              #+#    #+#             */
/*   Updated: 2021/12/03 15:15:02 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char	*toUpperStr(char *str)
{
	int		i;

	i = 0;
	while (str && str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
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
