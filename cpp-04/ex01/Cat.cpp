/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:55:38 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 04:03:33 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete brain;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = obj;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	this->type = obj.getType();
	if (brain)
		delete brain;
	brain = new Brain(*obj.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow Meow!" << std::endl;
}
