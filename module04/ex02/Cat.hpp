/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/13 21:08:17 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat:public Animal
{
private:
	Brain*	brain;
public:
	Cat();
	Cat(const Cat& otherObj);
	~Cat();
	Cat&	operator=(const Cat& otherObj);
	virtual void	makeSound() const;
	Brain*	getBrain();
	std::string	getBrainIdea(unsigned int idx);
	int			addBrainIdea(std::string idea);
};

#endif

