/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 03:15:22 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/10/31 18:51:54 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

namespace   util
{
    int check_num(std::string str)
    {
        for (int i = 0; str[i]; i++)
        {
            if (!isdigit(str[i]))
                return (0);
        }
        return (1);
    }

    int check_names(std::string str)
    {
        for (int i = 0; str[i]; i++)
        {
            if (isdigit(str[i]))
                return (1);
        }
        return (0);
    }
    int	ft_atoi(std::string str)
    {
        int	i;
        int	n;
        int	rst;

        i = 0;
        rst = 0;
        n = 1;
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
            || str[i] == '\v' || str[i] == '\r' || str[i] == '\n')
            i++;
        if (!util::check_num(&str[i]))
            return (-1);
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                n = -1;
            i++;
        }
        while (str[i] && str[i] >= '0' && str[i] <= '9')
        {
            rst = rst * 10 + (str[i] - 48);
            i++;
        }
        return (rst * n);
    }
}

void    Contact::set_first_name()
{
    std::cout << "first name : ";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        exit (1);
	first_name = remove_sp(first_name);
    while (first_name.empty() || util::check_names(first_name))
    {
        std::cout << "first name : ";
        std::getline(std::cin, first_name);
        if (std::cin.eof())
            exit (1);
		first_name = remove_sp(first_name);
    }
}

void    Contact::set_last_name()
{
    std::cout << "last name : ";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        exit (1);
    last_name = remove_sp(last_name);
    while (last_name.empty() || util::check_names(last_name))
    {
        std::cout << "last name : ";
        std::getline(std::cin, last_name);
        if (std::cin.eof())
            exit (1);
		last_name = remove_sp(last_name);
    }
}

void    Contact::set_nickname()
{
    std::cout << "nickname : ";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        exit (1);
    nickname = remove_sp(nickname);
    while (nickname.empty())
    {
        std::cout << "nickname : ";
        std::getline(std::cin, nickname);
        if (std::cin.eof())
            exit (1);
		nickname = remove_sp(nickname);
    }
}

void    Contact::set_phone_number()
{
    std::cout << "phone number : ";
    std::getline(std::cin, phone_number);
    if (std::cin.eof())
        exit (1);
    phone_number = remove_sp(phone_number);
    while (phone_number.empty() || !util::check_num(phone_number))
    {
        std::cout << "phone number : ";
        std::getline(std::cin, phone_number);
        if (std::cin.eof())
            exit (1);
        phone_number = remove_sp(phone_number);
    }
}

void    Contact::set_darkest_secret()
{
    std::cout << "darkest secret : ";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
        exit (1);
    darkest_secret = remove_sp(darkest_secret);
    while (darkest_secret.empty())
    {
        std::cout << "darkest secret : ";
        std::getline(std::cin, darkest_secret);
        if (std::cin.eof())
            exit (1);
        darkest_secret = remove_sp(darkest_secret);
    }
}