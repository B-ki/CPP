/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:45:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/21 16:31:04 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP 

#include <string>
#include <iostream>

template<typename T>
class Array
{
	public:

//      ########## CONSTRUCTOR ##########

		Array(void) : _size(0) {_a = new T();};
		Array(unsigned int n) : _size(n) {_a = new T[n]();};
		Array(Array const & src) {_size = src.size(); _a = new T[src.size()](); *this = src;};

//      ########## DESTRUCTOR ##########

		~Array(void) {delete [] _a;};

//      ########## OPERATOR ##########

		Array & operator=(Array const & rhs)
		{
			if (this != &rhs)
			{
				_size = rhs.size();
				if (_a)
					delete [] _a;
				_a = new T[_size]();
				for (unsigned int i = 0; i < _size; i++)
					_a[i] = rhs._a[i];
			}
			return *this;
		};

		T & operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::exception();
			return _a[index];
		}

		const T & operator[](unsigned int index) const
		{
			if (index >= _size)
				throw std::exception();
			return _a[index];
		}

//      ########## GETTER ##########

		unsigned int size(void) const {return _size;};

	private:
		T * _a;
		unsigned int _size;

};

template<class T>
std::ostream& operator<<(std::ostream & o, const Array<T> & arr)
{
	o << "[";
	for(unsigned int i = 0; i < arr.size(); i++)
	{
		if (i)
			o << ", ";
		o << arr[i];
	};
	o << "]";
	return o;
}

#endif 
