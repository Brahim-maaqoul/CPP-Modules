/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:22:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/07/03 23:54:20 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"






int main()
{
    phonebook ph;
    std::string command;
    std::cout << "Hi, enter a command (ADD, SEARCH or EXIT)" << std::endl;
    std::getline(std::cin, command);
    while (command != "EXIT")
    {
        while (command != "ADD" && command != "SEARCH" && command != "EXIT")
        {
            std::cout << "Please try again" << std::endl;
            std::getline(std::cin, command);
        }
        if (command == "ADD")
        {
            contact c;
            c.set_contact();
            ph.adding_contact(c);
        }
        else if (command == "SEARCH")
        {
            ph.searching_contact();
            std::cin.ignore();
        }
        std::cout << "Hi, enter a command (ADD, SEARCH or EXIT)" << std::endl;
        std::getline(std::cin, command);
    }
    std::cout << "See you later pal !" << std::endl;
}