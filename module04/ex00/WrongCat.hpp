/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:07 by ylee              #+#    #+#             */
/*   Updated: 2022/01/12 18:58:02 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat:public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string& type);
	WrongCat(const WrongCat& otherObj);
	~WrongCat();
	WrongCat&	operator=(const WrongCat& otherObj);
	void	makeSound() const;
};

#endif

