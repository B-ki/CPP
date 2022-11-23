/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 12:35:28 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor." << std::endl;

	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor." << std::endl;

	return;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor." << std::endl;
	*this = src;

	return;
}

std::string Brain::getIdea(int i) const
{
	return ideas[i];
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain copy assignement operator called"<< std::endl;

	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.getIdea(i);
	}
	return *this;
}

std::ostream& operator<<(std::ostream & o, Brain const & i)
{
	for (int j = 0; j < 100; j++)
		o << "Idea[" << j << "] = " << i.getIdea(j);

	return o;
}
