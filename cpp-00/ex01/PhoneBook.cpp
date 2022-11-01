/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:06:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/01 20:48:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

std::string    Contact::remove_sp(std::string str)
{
	int i = 0;
	std::string s;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\n')
		i++;
	s = &str[i];
	return s;
}

void    Contact::set_contact()
{
	set_first_name();
	set_last_name();
	set_nickname();
	set_phone_number();
	set_darkest_secret();
}

void    PhoneBook::adding_contact(Contact cont)
{
    c[idx] = cont;
    idx++;
    if(size < 8)
        size++;
    if (idx == 8)
        idx = 0;
    
}

std::string PhoneBook::truncate_str(std::string str)
{
    if (str.size() >= 10)
        str = str.substr(0, 9).append(".");
    return str;
}

void    PhoneBook::searching_contact()
{
    int j = 0, i;
    std::string index, s;
    std::cout << std::setw(10) << std::setfill(' ') << "index";
    std::cout << "|";
    std::cout << std::setw(10) << std::setfill(' ') << "firstname";
    std::cout << "|";
    std::cout << std::setw(10) << std::setfill(' ') << "lastname";
    std::cout << "|";
    std::cout << std::setw(10) << std::setfill(' ') << "nickname";
    std::cout << std::endl;
    while (j < size)
    {
        std::cout << std::setw(10) << std::setfill(' ') << j;
        std::cout << "|";
        std::cout << std::setw(10) << std::setfill(' ') << truncate_str(c[j].get_firstname());
        std::cout << "|";
        std::cout << std::setw(10) << std::setfill(' ') << truncate_str(c[j].get_lastname());
        std::cout << "|";
        std::cout << std::setw(10) << std::setfill(' ') << truncate_str(c[j].get_nickname());
        std::cout << std::endl;
        j++;
    }
    std::cout << "enter the index : ";
    std::getline(std::cin , index);
 
    i = util::ft_atoi(index);
    if (i >= size || i == -1)
        std::cout << "you must enter a valid index !" << std::endl;
    else
    {
       std::cout << "index: " << i << std::endl;
       std::cout << "first name: " << c[i].get_firstname() << std::endl;
       std::cout << "last name: " << c[i].get_lastname() << std::endl;
       std::cout << "nickname: " << c[i].get_nickname() << std::endl;
       std::cout << "phone number: " << c[i].get_phonenumber() << std::endl;
       std::cout << "darkest secret: " << c[i].get_darkestsecret() << std::endl;
    }
}
