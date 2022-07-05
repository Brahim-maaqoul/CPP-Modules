/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:07:07 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/07/03 23:40:59 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>

class contact
{
    public :
    
    void    set_contact(void);
    // void    searching_contact(contact c[8]);
    std::string truncate_str(std::string str);
    std::string first_name;
    std::string last_name;
    std::string	nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class phonebook
{
    private :
        contact c[8];
        int size;
        int idx;
    public :
        void    searching_contact();
        void    adding_contact(contact cont);
        void    print_contact(void);
        phonebook()
        {
            size = 0;
            idx = 0;
        }
};

#endif