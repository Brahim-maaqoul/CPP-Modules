/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 03:04:57 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/29 19:57:05 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkNumbers(std::string str)
{
	size_t pos = str.find_first_not_of("0123456789");
	if (pos != std::string::npos)
	{
		std::cout << "Error\n";
		exit (1);
	}
}

int	takeNumber(std::string str)
{
	checkNumbers(str);
	std::stringstream s(str);
	int number;
	s >> number;
	return number;
}
