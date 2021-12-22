/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:09:48 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/20 16:21:46 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
	unsigned int ideasCount;
public:
	Brain();
	Brain(const Brain &brain);
	~Brain();
	Brain& operator=(const Brain& brain);

	std::string getIdea(unsigned int index) const;
	int addIdea(std::string idea);
};

#endif
