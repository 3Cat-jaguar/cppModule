/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:42:10 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 17:31:52 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& otherObj);
	virtual ~Animal();
	Animal&	operator=(const Animal& otherObj);
	std::string	getType() const;
	virtual void		makeSound() const;
};

#endif

