/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:22:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/10/31 21:31:22 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    size = 0;
    idx = 0;
}

int main()
{
    PhoneBook ph;
    std::string command;
    while (command != "EXIT")
    {
        std::cout << "Hi, enter a command (ADD, SEARCH or EXIT)" << std::endl;
        std::getline(std::cin , command);
        if (std::cin.eof())
            exit (1);
        while (command != "ADD" && command != "SEARCH" && command != "EXIT")
        {
            std::cout << "Please try again" << std::endl;
            std::getline(std::cin, command);
        }
        if (command == "ADD")
        {
            Contact c;
            c.set_contact();
            ph.adding_contact(c);
        }
        else if (command == "SEARCH")
        {
            if (ph.size == 0)
                continue ;
            ph.searching_contact();
        }
    }
    std::cout << "See you later pal !" << std::endl;
}