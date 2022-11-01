/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:16:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/01 20:41:52 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact c[8];
    public :
        PhoneBook(void);
        void    searching_contact();
        void    adding_contact(Contact cont);
        void    print_contact(void);
        std::string	truncate_str(std::string str);
        int     size;
        int     idx;
};

namespace   util
{
    int check_num(std::string str);
    int	ft_atoi(std::string str);
    int check_names(std::string str);
}

#endif