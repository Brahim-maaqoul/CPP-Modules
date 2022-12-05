/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:51:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 00:57:36 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

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