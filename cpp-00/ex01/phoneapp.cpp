/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneapp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:06:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/07/03 23:54:34 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    contact::set_contact()
{
    std::cout << "first name : ";
    std::getline(std::cin, first_name);
    std::cout << "last name : ";
    std::getline(std::cin, last_name);
    std::cout << "nickname : ";
    std::getline(std::cin, nickname);
    std::cout << "phone number : ";
    std::getline(std::cin, phone_number);
    std::cout << "darkest secret : ";
    std::getline(std::cin, darkest_secret);
}

void    phonebook::adding_contact(contact cont)
{
    c[idx] = cont;
    idx++;
    if(size < 8)
        size++;
    if (idx == 8)
        idx = 0;
    
}

std::string truncate_str(std::string str)
{
    if (str.size() > 10)
    {
        str = str.substr(0, 9).append(".");
        return str;
    }
    return str;
}

void    phonebook::searching_contact()
{
    int j = 0, index;
    std::cout << "  index  " << "|" << "first name" << "|" << "last name " << "|" << " nickname " << std::endl;
    std::cout << "         " << "|" << "          " << "|" << "          " << "|" << "          " << std::endl;
    while (j < size)
    {
        std::cout << "         " << j << "|" << truncate_str(c[j].first_name) << "|" << truncate_str(c[j].last_name) << "|";
        std::cout << truncate_str(c[j].nickname) << std::endl;
        j++;
    }
    std::cout << "enter the index : ";
    std::cin >> index;
    // if (!isdigit(this->index))
    //     return ;

    if (index >= size)
    {
        std::cout << "you must enter a valid index !" << std::endl;
        return ;
    }
    else
    {
        std::cout << "         " << index << "|" << truncate_str(c[index].first_name) << "|" << truncate_str(c[index].last_name) << "|";
        std::cout << truncate_str(c[index].nickname) << std::endl;
        return;
    }
}
