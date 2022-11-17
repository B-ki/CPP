/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:46:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/17 11:30:18 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP 

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap(std::string n);
		~ScavTrap(void);
	
		void setAD(unsigned int dmg);

		void attack(std::string &target);
		void guardGate(void) const;

		ScavTrap & operator=(ScavTrap const & rhs);
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & i);

#endif 
