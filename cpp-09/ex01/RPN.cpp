/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:10:52 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/24 02:45:22 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string trimSpace(std::string str)
{
    size_t start = str.find_first_not_of(" ");
    if (start != std::string::npos)
        str = str.substr(start);
    size_t end = str.find_last_not_of(" ");
    if (end != std::string::npos)
        str = str.substr(0, end + 1);
    return str;
}

int	check_str(std::string str)
{
	size_t	pos = str.find_first_not_of("0123456789+-/* ");
	if (pos != std::string::npos)
		return 0;
	str = trimSpace(str);
	if (*str.end() != '+' && *str.end() != '-' && *str.end() != '*' && *str.end() != '/')
		return 0;
	return 1;
}