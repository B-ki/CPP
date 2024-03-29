/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:00:40 by rmorel            #+#    #+#             */
/*   Updated: 2023/07/14 12:10:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP 

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(AMateria const & src);
		virtual ~AMateria(void);
		AMateria & operator=(AMateria const & rhs);

		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0; //Return a new Materia on the heap
		virtual void use(ICharacter& target);

	protected:
		std::string type;

	private:

};

std::ostream & operator<<(std::ostream & o, AMateria const & i);

#endif 
