/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:12:04 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/20 16:25:50 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat& ref);
	~Cat();

	Cat& operator=(const Cat& ref);
	void makeSound() const;
	Brain* getBrain() const;
	std::string getBrainIdea(int index) const;
	void addBrainIdea(std::string idea);
};

#endif
