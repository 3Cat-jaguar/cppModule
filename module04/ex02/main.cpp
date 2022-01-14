/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:06:28 by ylee              #+#    #+#             */
/*   Updated: 2022/01/13 21:42:19 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	((Dog*)dog)->addBrainIdea("food!!!love!!!");
	((Dog*)dog)->addBrainIdea("play!!!fun!!!");
	((Dog*)dog)->addBrainIdea("love me!!!");
	((Dog*)dog)->addBrainIdea("run!!!fun!!!");

	((Cat*)cat)->addBrainIdea("not bad");
	((Cat*)cat)->addBrainIdea("good");
	((Cat*)cat)->addBrainIdea("hmm...");
	((Cat*)cat)->addBrainIdea("don't touch me");

	unsigned int amount = 4;
	Animal*	animals[amount];
	int i = 0;
	while (i < ((int)amount / 2))
	{
		animals[i] = new Dog(*(Dog*)dog);
		i++;
	}
	while (i < (int)amount)
	{
		animals[i] = new Cat(*(Cat*)cat);
		i++;
	}
	delete dog;
	delete cat;
	while (--i >= 0)
	{
		if (i < ((int)amount / 2))
			std::cout << animals[i]->getType() << " : " << ((Dog*)animals[i])->getBrainIdea(i) << std::endl;
		else
			std::cout << animals[i]->getType() << " : " << ((Cat *)animals[i])->getBrainIdea(i) << std::endl;
	}
	while (++i < (int)amount)
	{
		delete animals[i];
	}
//	system("leaks brain");
	return 0;
}
