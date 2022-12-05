/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:51:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 00:59:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = obj;
}

WrongCat	&WrongCat::operator= (const WrongCat &obj)
{
	std::cout << "WrongCat Copy Assignment Operator Called" << std::endl;
	this->type = obj.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat Meow Meow Meow!" << std::endl;
}