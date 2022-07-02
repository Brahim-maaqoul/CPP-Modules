/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:22:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/07/02 21:11:43 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string truncate_str(std::string str)
{
    if (str.size() > 10)
    {
        str = str.substr(0, 9).append(".");
        return str;
    }
    return str;
}

void    searching_contact(contact c[8])
{
    int j = 0, index;
    std::cout << "  index  " << "|" << "first name" << "|" << "last name " << "|" << " nickname " << std::endl;
    std::cout << "         " << "|" << "          " << "|" << "          " << "|" << "          " << std::endl;
    while (c[j].b && j < 8)
    {
        std::cout << "         " << j << "|" << truncate_str(c[j].first_name) << "|" << truncate_str(c[j].last_name) << "|";
        std::cout << truncate_str(c[j].nickname) << std::endl;
        j++;
    }
    std::cout << "enter the index : ";
    std::cin >> index;
    // if (!isdigit(this->index))
    //     return ;
    for (int i = 0; i < 8; i++)
    {
        if (index != i || !c[i].b)
        {
            std::cout << "you must enter a valid index !" << std::endl;
            return ;
        }
        else if (i == index && c[i].b)
        {
            std::cout << "         " << i << "|" << truncate_str(c[i].first_name) << "|" << truncate_str(c[i].last_name) << "|";
            std::cout << truncate_str(c[i].nickname) << std::endl;
            break ;
        }
    }
    // c[i].print_contact(&c[i], i);
}

int main()
{
    contact c[8];
    std::string command;
    int i = -1;
    for (int i = 0; i < 8; i++)
        c[i].b = 0;
    std::cout << "Hi, enter a command (ADD, SEARCH or EXIT)" << std::endl;
    std::getline(std::cin, command);
    while (command != "EXIT" && i < 8)
    {
        while (command != "ADD" && command != "SEARCH" && command != "EXIT")
        {
            std::cout << "Please try again" << std::endl;
            std::getline(std::cin, command);
        }
        while (i < 8)
        {
            if (command == "ADD")
            {
                i++;
                c[i].adding_contact(&c[i], i);
                break;
            }
            else if (command == "SEARCH")
            {
                searching_contact(&c[i]);
                // c[i].print_contact(&c[i], i);
                std::cin.ignore();
                break;
            }
        }
        std::cout << "Hi, enter a command (ADD, SEARCH or EXIT)" << std::endl;
        std::getline(std::cin, command);
    }
    std::cout << "See you later pal !" << std::endl;
}