/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:47:45 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 20:12:21 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("gyro");
    FragTrap target("zeppeli");
    a.attack(target.getName());
    target.takeDamage(a.getDamage());
    std::cout << target.getHitpts() << std::endl;
}