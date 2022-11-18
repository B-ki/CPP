/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:34:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 00:28:31 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP 

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & rhs);

		DiamondTrap(std::string n);

		std::string getName(void) const;

		void	whoAmI(void) const;

	private:
		std::string _name;
};

std::ostream & operator<<(std::ostream & o, DiamondTrap const & i);

#endif 
