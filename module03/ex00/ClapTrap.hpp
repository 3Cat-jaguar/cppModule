/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:32 by ylee              #+#    #+#             */
/*   Updated: 2022/01/10 01:31:34 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
private:
	std::string Name;
	int			HP;
	int			EP;
	int			AD;

public:
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap& otherObj);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap& otherObj);
	void		attack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
