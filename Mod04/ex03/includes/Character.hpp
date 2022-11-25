/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:24:20 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/25 12:33:35 by rmorel           ###   ########.fr       */
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
		int const & getSize() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	protected:

	private:
		std::string _name;
		AMateria* _slot[4];
		int _size;

};

std::ostream & operator<<(std::ostream & o, Character const & i);

#endif 
