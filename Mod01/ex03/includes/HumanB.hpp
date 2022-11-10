/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:00:02 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/09 11:29:17 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	//	Attributes
	private:
		std::string	_name;
		Weapon	*_weapon;
	public:
	//	Constructor & Destructor
		HumanB(std::string n);
		~HumanB(void);
	//	Accessor
	//	Member Functions
		void	attack(void) const;
		void	setWeapon(Weapon &w);
};

#endif
