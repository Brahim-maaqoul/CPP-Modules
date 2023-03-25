/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:11:01 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/25 03:03:37 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <sstream>

std::string	trimSpace(std::string str);
int			check_str(std::string str);
void		rpn(std::string str);
void		printError(void);
std::string trimSpace(std::string str);
int 		count_delimiter(std::string str, char c);

#endif