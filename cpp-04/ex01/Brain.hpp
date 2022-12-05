/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:50:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 03:56:50 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "WrongAnimal.hpp"

class	Brain
{
    private:
        std::string ideas[100];
	public	:
		Brain ();
		Brain (Brain const &obj);
		~Brain ();
		Brain &operator= (const Brain &obj);
};

#endif