/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/13 21:07:34 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog:public Animal
{
private:
	Brain*	brain;
public:
	Dog();
	Dog(const Dog& otherObj);
	~Dog();
	Dog&	operator=(const Dog& otherObj);
	virtual void	makeSound() const;
	Brain*	getBrain();
	std::string	getBrainIdea(unsigned int idx);
	int			addBrainIdea(std::string idea);
};

#endif

