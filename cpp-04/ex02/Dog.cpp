/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:55:31 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 04:20:19 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete brain;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = obj;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	this->type = obj.getType();
	if (brain)
		delete brain;
	brain = new Brain(*obj.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof Woof!" << std::endl;
}