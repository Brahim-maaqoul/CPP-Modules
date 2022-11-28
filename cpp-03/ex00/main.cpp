/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:52:14 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/28 17:29:36 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("gyro");
    ClapTrap target("zeppeli");
    a.setDamage(2);
    target.takeDamage(a.getDamage());
    // target.beRepaired(1);
    a.attack(target.getName());
    std::cout << target.getHitpts() << std::endl;
}