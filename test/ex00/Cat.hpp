/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:12:04 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/14 17:50:54 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& ref);
	~Cat();

	Cat& operator=(const Cat& ref);
	void makeSound() const;
};

#endif
