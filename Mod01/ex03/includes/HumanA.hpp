/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:00:02 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/09 11:30:41 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	//	Attributes
	private:
		std::string	_name;
		Weapon&	_weapon;
	public:
	//	Constructor & Destructor
		HumanA(std::string n, Weapon& w);
		~HumanA(void);
	//	Accessor
	//	Member Functions
		void attack(void) const;
};

#endif
