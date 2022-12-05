/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:55:46 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 04:26:45 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = obj;
}

Animal	&Animal::operator= (const Animal &obj)
{
	std::cout << "Animal Copy Assignment Operator Called" << std::endl;
	this->type = obj.getType();
	return *this;
}

std::string	Animal::getType() const
{
	return type;
}
