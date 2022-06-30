/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:22:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/06/30 04:07:41 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main()
{
    contact c[8];
    std::string command;
    int i = -1;
    std::cout << "Hi, enter a command (ADD, SEARCH or EXIT)" << std::endl;
    std::getline(std::cin, command);
    while (command != "EXIT")
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
                c[i].adding_contact();
                break;
            }
            else if (command == "SEARCH")
            {
                i++;
                c[i].searching_contact(i);
                c[i].print_contact();
                std::cin.ignore();
                break;
            }
        }
        std::cout << "Hi, enter a command (ADD, SEARCH or EXIT)" << std::endl;
        std::getline(std::cin, command);
    }
    std::cout << "See you later pal !" << std::endl;
}