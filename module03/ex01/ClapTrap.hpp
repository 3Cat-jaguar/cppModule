/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:32 by ylee              #+#    #+#             */
/*   Updated: 2022/01/06 22:19:17 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
protected:
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
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;
	void		attack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
