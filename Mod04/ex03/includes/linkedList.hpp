/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:35:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/01 10:40:21 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP 

#include <string>
#include <iostream>
#include "AMateria.hpp"

struct node
{
	AMateria* m;
    struct node *next;
};

class linkedList
{
	public:
		linkedList(void);
		linkedList(linkedList const & src);
		~linkedList(void);

		linkedList & operator=(linkedList const & rhs);
		void addNode(AMateria* m);

	protected:

	private:
		node  *_head, *_tail;

};

#endif 
