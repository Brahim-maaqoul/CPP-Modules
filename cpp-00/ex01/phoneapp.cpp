/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneapp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:06:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/06/30 00:52:16 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    contact::print_contact(void)
{
    std::cout << this->first_name << std::endl;
    std::cout << this->last_name << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->phone_number << std::endl;
    std::cout << this->darkest_secret << std::endl;
}

void    contact::adding_contact(void)
{
    std::cout << "first name : ";
    std::getline(std::cin, this->first_name);
    std::cout << "last name : ";
    std::getline(std::cin, this->last_name);
    std::cout << "nickname : ";
    std::getline(std::cin, this->nickname);
    std::cout << "phone number : ";
    std::getline(std::cin, this->phone_number);
    std::cout << "darkest secret : ";
    std::getline(std::cin, this->darkest_secret);
    this->b = 1;
}

std::string contact::truncate_str(std::string str)
{
    if (str.size() > 10)
    {
        str = str.substr(0, 9).append(".");
        return str;
    }
    return str;
}

void    contact::searching_contact(contact c[8], int i)
{
    int j = 0;
    std::cout << "  index  " << "|" << "first name" << "|" << "last name " << "|" << " nickname " << std::endl;
    std::cout << "         " << "|" << "          " << "|" << "          " << "|" << "          " << std::endl;
    while (c[j].b && j < 8)
    {
        std::cout << "         " << j << "|" << truncate_str(c[j].first_name) << "|" << truncate_str(c[j].last_name) << "|";
        std::cout << truncate_str(c[j].nickname) << std::endl;
        j++;
    }
    std::cout << "enter the index : " << std::endl;
    std::cin >> this->index;
    if (this->index != i)
    {
        std::cout << "you must enter a valid index !" << std::endl;
        return ;
    }
}