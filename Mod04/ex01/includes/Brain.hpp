/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:15:54 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 15:46:34 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP 

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		Brain & operator=(Brain const & rhs);

		std::string getIdea(int i) const;
		void setIdea(std::string s, int i);
		
	protected:

	private:
		std::string _ideas[100];

};

std::ostream & operator<<(std::ostream & o, Brain const & i);

#endif 
