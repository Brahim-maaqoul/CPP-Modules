/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:10:16 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/02/14 18:26:51 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t   serialize(Data* ptr)
{
    uintptr_t val = reinterpret_cast<uintptr_t>(ptr);
    return val;
}

Data*	deserialize(uintptr_t raw)
{
	Data* ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

int main(void)
{
    Data	ptr;
	Data *s;
	uintptr_t u;
	ptr.i = 10;

	u = serialize(&ptr);
	s = deserialize(u);
	std::cout << &ptr << std::endl;
	std::cout << s->i << std::endl;
	std::cout << s << std::endl;
	std::cout << u << std::endl;
}