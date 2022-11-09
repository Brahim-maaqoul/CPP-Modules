/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:10:52 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/05 22:28:43 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void    HumanB::attack()
{
    if (w)
        std::cout << name << " attacks with their " << w->getType() << std::endl;
    else
        std::cout << name << " attacks with their hands" << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->w = &w;
}
