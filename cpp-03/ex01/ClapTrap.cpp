/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:47:41 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/30 15:55:47 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_points(100), energy_points(50), att_dmg(20)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), hit_points(100), energy_points(50), att_dmg(20)
{
    std::cout << "Parametric Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &c)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &c)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->Name = c.getName();
	this->att_dmg = c.getDamage();
	this->energy_points = c.getEnergy();
	this->hit_points = c.getHitpts();
    return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!energy_points)
	{
		std::cout << getName() << " has no more enrgy points left" << std::endl;
		return ;
	} 
	energy_points -= 1;
	std::cout << "ClapTrap " << getName() << " attacks " << target << ",";
	std::cout << " causing " << getDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!hit_points || !energy_points)
	{
		std::cout << getName() << " died" << std::endl;
		return ;
	}
	setHitpts(getHitpts() - amount);
	if (hit_points <= 0)
	{
		setHitpts(0);
		std::cout << getName() << " died" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " took " << amount << " damage points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!energy_points)
	{
		std::cout << getName() << " has no more enrgy points left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " repaired itself " << amount << std::endl;
	setHitpts(getHitpts() + amount);
	energy_points--;
}

std::string ClapTrap::getName(void) const
{
    return Name;
}

int ClapTrap::getDamage(void) const
{
    return att_dmg;
}

int ClapTrap::getEnergy(void) const
{
    return energy_points;
}

int ClapTrap::getHitpts(void) const
{
    return hit_points;
}

void    ClapTrap::setName(std::string name)
{
    Name = name;
}

void    ClapTrap::setDamage(int damage)
{
	att_dmg = damage;
}

void	ClapTrap::setEnergy(int energy)
{
	energy_points = energy;
}

void	ClapTrap::setHitpts(int hitpts)
{
	hit_points = hitpts;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}