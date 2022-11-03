/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:34:23 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/03 01:54:49 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z = new(std::nothrow) Zombie[N];
    if (!z)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
        z[i].set_name(name);
    return z;
}