/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:33:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/03 01:50:23 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
   std::string name;
public:
    Zombie();
    ~Zombie();
    void    set_name(std::string name);
    void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif