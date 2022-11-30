/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:52:06 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/30 17:13:25 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Contructor Called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    att_dmg = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Parametric Contructor Called" << std::endl;
    Name = name;
	hit_points = 100;
    energy_points = 50;
    att_dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const &s)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = s;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &s)
{
	std::cout << "ScavTrap Copy Assignment operator called" << std::endl;
	this->Name = s.getName();
	this->att_dmg = s.getDamage();
	this->energy_points = s.getDamage();
	this->hit_points = s.getHitpts();
	return *this;
}

void	ScavTrap::attack(const std::string& name)
{
	if (!energy_points)
	{
		std::cout << getName() << " has no more enrgy points left" << std::endl;
		return ;
	} 
	energy_points -= 1;
	std::cout << "ScavTrap " << getName() << " attacks " << name << ",";
	std::cout << " causing " << getDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}