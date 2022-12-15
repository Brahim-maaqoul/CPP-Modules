/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:57:00 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/14 18:58:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>
#include <limits>

int	check_str(std::string str);
void	toChar(std::string str);
void	toInt(std::string str);
void	to_float(std::string str);
void	toDouble(std::string str);

#endif