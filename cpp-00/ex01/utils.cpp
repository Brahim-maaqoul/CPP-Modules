/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:34:44 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/01 20:45:32 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::get_firstname(void)
{
	return first_name;
}

std::string	Contact::get_lastname(void)
{
	return last_name;
}

std::string	Contact::get_nickname(void)
{
	return nickname;
}

std::string	Contact::get_phonenumber(void)
{
	return phone_number;
}

std::string	Contact::get_darkestsecret(void)
{
	return darkest_secret;
}
