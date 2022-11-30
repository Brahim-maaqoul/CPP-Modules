/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:47:45 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/30 16:47:56 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    // ClapTrap a("gyro");
    // ClapTrap target("zeppeli");
    // a.setDamage(2);
    // target.takeDamage(a.getDamage());
    // // target.beRepaired(1);
    // a.attack(target.getName());
    // std::cout << target.getHitpts() << std::endl;
    ScavTrap a("gyro");
    ScavTrap target("zeppeli");
    a.attack(target.getName());
    target.takeDamage(a.getDamage());
    std::cout << target.getHitpts() << std::endl;
}