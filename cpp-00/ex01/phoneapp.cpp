/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneapp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:06:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/07/02 21:13:41 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    contact::print_contact(contact c[8], int i)
{
    std::cout << c[i].first_name << std::endl;
    std::cout << c[i].last_name << std::endl;
    std::cout << c[i].nickname << std::endl;
    std::cout << c[i].phone_number << std::endl;
    std::cout << c[i].darkest_secret << std::endl;
}

void    contact::adding_contact(contact c[8], int i)
{
    std::cout << "first name : ";
    std::getline(std::cin, c[i].first_name);
    std::cout << "last name : ";
    std::getline(std::cin, c[i].last_name);
    std::cout << "nickname : ";
    std::getline(std::cin, c[i].nickname);
    std::cout << "phone number : ";
    std::getline(std::cin, c[i].phone_number);
    std::cout << "darkest secret : ";
    std::getline(std::cin, c[i].darkest_secret);
    c[i].b = 1;
}

// std::string contact::truncate_str(std::string str)
// {
//     if (str.size() > 10)
//     {
//         str = str.substr(0, 9).append(".");
//         return str;
//     }
//     return str;
// }

// void    contact::searching_contact(contact c[8])
// {
//     int j = 0, index;
//     std::cout << "  index  " << "|" << "first name" << "|" << "last name " << "|" << " nickname " << std::endl;
//     std::cout << "         " << "|" << "          " << "|" << "          " << "|" << "          " << std::endl;
//     while (c[j].b && j < 8)
//     {
//         std::cout << "         " << j << "|" << truncate_str(c[j].first_name) << "|" << truncate_str(c[j].last_name) << "|";
//         std::cout << truncate_str(c[j].nickname) << std::endl;
//         j++;
//     }
//     std::cout << "enter the index : ";
//     std::cin >> index;
//     // if (!isdigit(this->index))
//     //     return ;
//     for (int i = 0; i < 8; i++)
//     {
//         if (index != i || !c[i].b)
//         {
//             std::cout << "you must enter a valid index !" << std::endl;
//             return ;
//         }
//         else if (i == index && c[i].b)
//         {
//             std::cout << "         " << i << "|" << truncate_str(c[i].first_name) << "|" << truncate_str(c[i].last_name) << "|";
//             std::cout << truncate_str(c[i].nickname) << std::endl;
//             break ;
//         }
//     }
//     // c[i].print_contact(&c[i], i);
// }