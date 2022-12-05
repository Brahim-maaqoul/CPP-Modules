/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:51:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 03:51:47 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public	:
		WrongCat ();
		WrongCat (WrongCat const &obj);
		~WrongCat ();
		WrongCat &operator= (const WrongCat &obj);
		void	makeSound(void) const;
};

#endif