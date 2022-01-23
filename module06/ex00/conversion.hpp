/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:48:19 by ylee              #+#    #+#             */
/*   Updated: 2022/01/23 18:52:40 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <limits>
# include <cstdlib>
# include <string>
# include <iostream>
# include <cctype>

# define IS_CHAR	0
# define IS_INT		1
# define IS_FLOAT	2
# define IS_DOUBLE	3
# define IS_ELSE	4

class	conversion
{
private:
	char	*param;
	int		type;

public:
	conversion();
	conversion(char *param);
	conversion(const conversion& copy);
	conversion& operator=(const conversion& copy);
	~conversion();
	char*	getParam();
	int		getType();
	void	setType();
	int		checkType();
	void	convertPrint();
	void	convertChar();
	void	convertInt();
	void	convertFloat();
	void	convertDouble();
	void	printElse();
};

#endif
