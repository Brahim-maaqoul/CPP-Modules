/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:37:40 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/02 00:18:39 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  *z = new Zombie(name);
    if (!z)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return (NULL);
    }
    return z;
}