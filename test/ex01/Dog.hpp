/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:12:07 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/21 16:38:29 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog& ref);
	~Dog();

	Dog& operator=(const Dog& ref);
	void makeSound() const;
	Brain* getBrain() const;
	std::string getBrainIdea(int index) const;
	void addBrainIdea(std::string idea);
};

#endif
