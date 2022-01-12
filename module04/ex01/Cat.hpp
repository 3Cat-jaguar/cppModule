/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 17:33:19 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat:public Animal
{
public:
	Cat();
	Cat(std::string& type);
	Cat(const Cat& otherObj);
	~Cat();
	Cat&	operator=(const Cat& otherObj);
	virtual void	makeSound() const;
};

#endif

