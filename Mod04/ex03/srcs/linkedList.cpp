/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/01 14:48:58 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedList.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

linkedList::linkedList(void) {_head = NULL; _tail = NULL;}

linkedList::~linkedList(void) 
{
	node *tmp;

	for(tmp = _head; _head; tmp = _head)
	{
		_head = _head->next;
		if (tmp->m)
			delete tmp->m;
		tmp->m = NULL;
		delete tmp;
		tmp = NULL;
	}
}

linkedList::linkedList(linkedList const & src) {*this = src;}

//##########          GETTER & SETTER          ##############

//##########          OPERATOR OVERLOADING          ##############

linkedList & linkedList::operator=(linkedList const & rhs)
{
	if (this != &rhs)
	{
		_head = rhs._head;
		_tail = rhs._tail;
	}

	return *this;
}

//##########          MEMBERS FUNCTION          ##############

void linkedList::addNode(AMateria* m)
{
	node *newNode = new node;

	newNode->m = m;
	newNode->next = NULL;
	if (_head==NULL)
	{
		_head = newNode;
		_tail = newNode;
	}
	else
	{
		_tail->next = newNode;
		_tail = _tail->next;
	}
}
