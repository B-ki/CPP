/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:24:20 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 20:22:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP 

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string n);
		Character(Character const & src);
		~Character(void);
		Character & operator=(Character const & rhs);

		std::string const & getName() const;
		unsigned int const & getSize() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	protected:

	private:
		std::string _name;
		AMateria* slot[4];
		unsigned int _size;
		//TO DO : Creer une liste chainee de Materia tombees pour pouvoir les supprimer dans le destructeur

};

std::ostream & operator<<(std::ostream & o, Character const & i);

#endif 
