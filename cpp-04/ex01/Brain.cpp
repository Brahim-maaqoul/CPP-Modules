/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:50:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 04:15:09 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = obj;
}

Brain	&Brain::operator= (const Brain &obj)
{
	std::cout << "Brain Copy Assignment Operator Called" << std::endl;
	for (size_t i = 0; i < ideas->size(); i++)
		ideas[i] = obj.ideas[i];
	return *this;
}