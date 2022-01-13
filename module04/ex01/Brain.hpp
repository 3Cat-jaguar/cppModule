/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:37:49 by ylee              #+#    #+#             */
/*   Updated: 2022/01/13 13:10:47 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
private:
	std::string ideas[100];
	unsigned int	cnt;
public:
	Brain();
	Brain(const Brain& otherObj);
	~Brain();
	Brain&	operator=(const Brain& otherObj);
	std::string	getIdea(unsigned int idx) const;
	int			addIdea(const std::string& idea);
};

#endif
