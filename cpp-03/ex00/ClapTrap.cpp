/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:57:29 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/28 17:24:00 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_points(10), energy_points(10), att_dmg(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), hit_points(10), energy_points(10), att_dmg(0)
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
	energy_points -= 1;
	std::cout << "ClapTrap " << getName() << " attacks " << target << ",";
	std::cout << " causing " << getDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0 || energy_points<= 0)
	{
		std::cout << getName() << " died" << std::endl;
		return ;
	}
	setHitpts(getHitpts() - amount);
	if (hit_points <= 0)
	{
		std::cout << getName() << " died" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " took " << amount << " damage points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
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