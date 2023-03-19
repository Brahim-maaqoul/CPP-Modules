/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:03:14 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/18 23:26:26 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <ctime>
#include <sstream>
#include <fstream>

void	parse(std::string str);
struct	tm	take_date(std::string date);
float	take_value(std::string str);
int		countWord(std::string str);
#endif