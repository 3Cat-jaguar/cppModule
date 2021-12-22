/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:12:26 by hyahn             #+#    #+#             */
/*   Updated: 2021/12/21 16:59:09 by hyahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	size_t fullIndex = 4;
	Animal *array[fullIndex];

	Dog *dog = (Dog *)j;
	Cat* cat = (Cat *)i;
	dog->addBrainIdea("food");
	cat->addBrainIdea("test1cat");
	cat->addBrainIdea("test2");
	std::cout << std::endl;
	for (size_t i = 0; i < (fullIndex / 2); i++)
	{
		array[i] = new Dog(*dog);
	}
	std::cout << std::endl;
	for (size_t i = (fullIndex / 2); i < fullIndex; i++)
	{
		array[i] = new Cat(*cat);
	}
	std::cout << std::endl;
	for (size_t i = 0; i < (fullIndex / 2); i++)
	{
		//((Dog *)array[i]) 괄호 안치면 화살표 연산자 먼저 작동되어 에러
		std::cout << ((Dog *)array[i])->getBrainIdea(0) << std::endl;
	}
	std::cout << std::endl;
	for (size_t i = (fullIndex / 2); i < fullIndex; i++)
	{
		std::cout << ((Cat *)array[i])->getBrainIdea(1) << std::endl;

	}
	std::cout << std::endl;
	for (size_t i = 0; i < fullIndex; i++)
	{
		delete array[i];
	}
	delete j;
	delete i;
	system("leaks brain");
	return 0;
}
