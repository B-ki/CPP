/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 15:17:13 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal* j = new Dog();
		const Animal* k = new Cat();

		delete j;//should not create a leak
		delete k;
	}
	std::cout << std::endl;
	{
		Cat cat1;
		cat1.getBrain()->setIdea("Meeeow", 0);
		cat1.getBrain()->setIdea("Fssccchh", 1);
		Cat cat2(cat1);
		std::cout << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << cat1.getBrain()->getIdea(1) << std::endl;
		std::cout << cat2.getBrain()->getIdea(0) << std::endl;
		std::cout << cat2.getBrain()->getIdea(1) << std::endl;
		cat1.getBrain()->setIdea("Bwwwweee", 0);
		std::cout << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << cat1.getBrain()->getIdea(1) << std::endl;
		std::cout << cat2.getBrain()->getIdea(0) << std::endl;
		std::cout << cat2.getBrain()->getIdea(1) << std::endl;
	}
	std::cout << std::endl;
	{
		Animal *animalArray[4];

		for(int i = 0; i < 4; i++)
		{
			if (i % 2)
				animalArray[i] = new Cat;
			else
				animalArray[i] = new Dog;
		}
		for(int i = 0; i < 4; i++)
		{
			delete animalArray[i];
		}
	}
	return 0;
}

