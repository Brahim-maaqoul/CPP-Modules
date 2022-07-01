/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:22:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/07/01 22:28:16 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
                i++;
                c[i].searching_contact(&c[i], i);
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