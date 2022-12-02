/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 15:53:22 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	std::cout << std::endl << 1 << std::endl;

	IMateriaSource* src = new MateriaSource();
	ICharacter* bob = new Character("bob");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	for (int i = 0; i < 5; i++)
		me->use(i, *bob);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("wind");
	me->equip(tmp);
	tmp = src->createMateria("earth");
	me->equip(tmp);

	std::cout << std::endl << 2 << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//delete tmp; //No need to delete, the object is place in the garbage collector to delete it at the end of the program
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//delete tmp;//Idem
	for (int i = 0; i < 5; i++)
		me->use(i, *bob);

	std::cout << std::endl << 3 << std::endl;

	me->unequip(3);
	tmp = src->createMateria("cure");
	me->equip(tmp);//Pas besoin de delete car item sera bien ajoute
	std::cout << "Unequip ok" << std::endl;
	for (int i = 0; i < 5; i++)
		me->use(i, *bob);
	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}
