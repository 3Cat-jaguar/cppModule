/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:48:19 by ylee              #+#    #+#             */
/*   Updated: 2022/01/23 23:03:26 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

	conversion::conversion():type(IS_ELSE) {}

	conversion::conversion(char *param):param(param)
	{
		setType();
	}

	conversion::conversion(const conversion& copy)
	{
		param = copy.param;
		type = copy.type;
	}

	conversion& conversion::operator=(const conversion& copy)
	{
		type = copy.type;
		return *this;
	}

	conversion::~conversion() {}

	char *	conversion::getParam()
	{
		return param ;
	}

	int		conversion::getType()
	{
		return type ;
	}

	void	conversion::setType()
	{
		this->type = this->checkType();
	}

int	conversion::checkType()
{
	if (!param[0])
		return IS_CHAR ;
	if (!param[1] && !isdigit(param[0]))
		return IS_CHAR ;
	if (!strcmp("+inff", param) || !strcmp("-inff", param) || !strcmp("nanf", param))
		return IS_FLOAT;
	if (!strcmp("+inf", param) || !strcmp("-inf", param) || !strcmp("nan", param))
		return IS_DOUBLE;
	int i = 0;
	if (param[i] == '+' || param[i] == '-')
		i++;
	if (!isdigit(param[i]))
		return IS_ELSE;
	while (isdigit(param[i]))
		i++;
	if (!param[i])
		return IS_INT;
	if (param[i] != '.')
		return IS_ELSE;
	else
		i++;
	while (isdigit(param[i]))
		i++;
	if (!param[i])
		return IS_DOUBLE;
	if (param[i] == 'f')
		return IS_FLOAT;
	return IS_ELSE;
}

	void	conversion::convertPrint()
	{
		void	(conversion::*func[])() = {
			&conversion::convertChar,
			&conversion::convertInt,
			&conversion::convertFloat,
			&conversion::convertDouble,
			&conversion::printElse
		};
		(this->*func[type])();
	}

	void	conversion::printElse()
	{
		std::cout << "char\t : impossible\n";
		std::cout << "int\t : impossible\n";
		std::cout << "float\t : impossible\n";
		std::cout << "double\t : impossible\n";
	}

	void	conversion::convertChar()
	{
		char	c = param[0];
		std::cout << "char\t : ";
		if (isprint(c))
			std::cout << "\'" << c << "\'\n";
		else
			std::cout << "Non displayable\n";
		std::cout << "int\t : " << static_cast<int>(c) << std::endl;
		std::cout << "float\t : " << static_cast<float>(c) << ".0f\n";
		std::cout << "double\t : " << static_cast<double>(c) << ".0\n";
	}

	void	conversion::convertInt()
	{
		float	f = atof(param);
		if (f > INT_MAX || f < INT_MIN)
		{
			std::cout << "char\t : impossible\n";
			std::cout << "int\t : impossible\n";
		}
		else
		{
			int	i = static_cast<int>(f);
			std::cout << "char\t : ";
			if (i > CHAR_MAX || i < CHAR_MIN)
				std::cout << "impossible\n";
			else if (isprint(i))
				std::cout << "\'" << static_cast<char>(i) << "\'\n";
			else
				std::cout << "Non displayable\n";
			std::cout << "int\t : " << i << std::endl;
		}
		std::cout << "float\t : " << f << ".0f\n";
		std::cout << "double\t : " << static_cast<double>(f) << ".0\n";
	}

	void	conversion::convertFloat()
	{
		if (!strcmp(param, "+inff") || !strcmp(param, "-inff") || !strcmp(param, "nanf"))
		{
			std::cout << "char\t : impossible\n";
			std::cout << "int\t : impossible\n";
			std::cout << "float\t : " << param << "\n";
			int len = strlen(param);
			param[len - 1] = '\0';
			std::cout << "double\t : " << param << "\n";
		}
		else
			this->convertInt();
	}
	
	void	conversion::convertDouble()
	{
		if (!strcmp(param, "+inf") || !strcmp(param, "-inf") || !strcmp(param, "nan"))
		{
			std::cout << "char	 : impossible\n";
			std::cout << "int	 : impossible\n";
			std::cout << "float	 : " << param << "f\n";
			int len = strlen(param);
			param[len - 1] = '\0';
			std::cout << "double : " << param << "\n";
		}
		else
			this->convertInt();
	}

