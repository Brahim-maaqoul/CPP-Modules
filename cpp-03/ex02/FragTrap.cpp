/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:59:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/30 17:13:13 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Contructor Called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    att_dmg = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Parametric Contructor Called" << std::endl;
    Name = name;
	hit_points = 100;
    energy_points = 100;
    att_dmg = 30;
}

FragTrap::FragTrap(FragTrap const &s)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	*this = s;
}

FragTrap &FragTrap::operator=(FragTrap const &s)
{
	std::cout << "FragTrap Copy Assignment operator called" << std::endl;
	this->Name = s.getName();
	this->att_dmg = s.getDamage();
	this->energy_points = s.getDamage();
	this->hit_points = s.getHitpts();
	return *this;
}

void	FragTrap::attack(const std::string& name)
{
	if (!energy_points)
	{
		std::cout << getName() << " has no more enrgy points left" << std::endl;
		return ;
	} 
	energy_points -= 1;
	std::cout << "FragTrap " << getName() << " attacks " << name << ",";
	std::cout << " causing " << getDamage() << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << getName() << " tells u to give him  high five :)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}