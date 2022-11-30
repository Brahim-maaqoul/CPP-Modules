/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:47:39 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/30 15:54:38 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int	hit_points;
        int	energy_points;
        int	att_dmg;
    
    public:
        void	attack(const std::string& target);
        void	takeDamage(unsigned int amount);
        void	beRepaired(unsigned int amount);
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &c);
        ClapTrap &operator=(ClapTrap const &c);
        std::string	getName(void) const;
        int		getDamage(void) const;
        int		getEnergy(void) const;
        int		getHitpts(void) const;
        void	setName(std::string name);
        void	setDamage(int damage);
        void	setEnergy(int energy);
        void	setHitpts(int hp);
        ~ClapTrap();
};

#endif