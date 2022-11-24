/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:05:14 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 17:59:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP 

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & src);
		~Cure(void);
		Cure & operator=(Cure const & rhs);

		std::string const & getType(void) const;

		AMateria* clone() const; //Return a new Materia on the heap
		void use(ICharacter& target);

	protected:

	private:

};

std::ostream & operator<<(std::ostream & o, Cure const & i);

#endif 
