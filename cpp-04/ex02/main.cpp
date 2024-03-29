/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:55:48 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 20:12:51 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Dog basic;
	// {
	// 	Dog tmp;
	// 	tmp = basic;
	// }
	Animal *A[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			A[i] = new Dog();
		else
			A[i] = new Cat();
	}
	return 0;
}
