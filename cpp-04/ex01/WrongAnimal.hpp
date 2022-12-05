/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:52:14 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/05 03:51:30 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string type;
	public	:
		WrongAnimal ();
		WrongAnimal (WrongAnimal const &obj);
		virtual ~WrongAnimal ();
		WrongAnimal &operator= (const WrongAnimal &obj);
		std::string getType(void) const;
		void	makeSound(void) const;
};

#endif