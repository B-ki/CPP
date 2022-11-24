/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:18:38 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 20:22:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP 

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);
		MateriaSource & operator=(MateriaSource const & rhs);

		unsigned int const & getSize() const;

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	protected:

	private:
		AMateria* slot[4];  
		unsigned int _size;

};

std::ostream & operator<<(std::ostream & o, MateriaSource const & i);

#endif 
