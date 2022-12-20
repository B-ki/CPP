/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/20 15:11:13 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

struct Data
{
	int x;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}


int main(void)
{
	Data *data_test = new Data;
	data_test->x = 10;
	uintptr_t ptr_test = serialize(data_test);
	Data *deserialized_ptr = deserialize(ptr_test);

	std::cout << "Data_test add, ptr and x value :" << &data_test << " | " << data_test << " | " << data_test->x << std::endl;
	std::cout << "Ptr_test add, ptr and x value :" << &ptr_test << " | " << ptr_test << std::endl;
	std::cout << "Deserialized add, ptr and x value :" << &deserialized_ptr << " | " << deserialized_ptr << " | " << deserialized_ptr->x << std::endl;
	std::cout << "\nUintptr_t is defined as an unsigned integer type with the property that any valid pointer to void can be converted to this type, then converted back to pointer to void, and the result will compare equal to the original pointer\n";

}
