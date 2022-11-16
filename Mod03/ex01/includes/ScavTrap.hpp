/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:46:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 21:18:08 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP 

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string _name;
		int	_HP;
		int	_MP;
		int	_AD;
	
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap(std::string n);
		~ScavTrap(void);
	
		void attack(std::string &target);
};

#endif 
