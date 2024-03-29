/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:23:09 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/14 22:07:04 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "please enter one argument !" << std::endl;
		return (0);
	}
	toChar(av[1]);
	toInt(av[1]);
	to_float(av[1]);
	toDouble(av[1]);
}
