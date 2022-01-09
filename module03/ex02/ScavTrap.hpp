/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:53:38 by ylee              #+#    #+#             */
/*   Updated: 2022/01/09 22:00:04 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& Name);
	ScavTrap(const ScavTrap& otherObj);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap& otherObj);
	void	attack(std::string const& target);
	void 	guardGate();
};

#endif
