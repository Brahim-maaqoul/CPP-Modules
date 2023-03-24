/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:03:14 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/24 02:38:54 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <ctime>
#include <sstream>
#include <fstream>
#include <cstring>

void	read_input(std::string str);
struct	tm	take_date(std::string date);
int	take_value(std::string str);
std::string trimSpace(std::string str);
int count_delimiter(std::string str, char c);
bool isLeapYear(int year);
int check_date(std::string date);
int check_value(std::string str);
std::map<std::string, float> read_data(std::string file);
#endif