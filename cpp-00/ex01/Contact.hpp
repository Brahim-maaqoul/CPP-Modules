/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:07:07 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/01 20:42:52 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>

class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string	nickname;
        std::string phone_number;
        std::string darkest_secret;

    public :
        void        set_contact(void);
        void        set_first_name(void);
        void        set_last_name(void);
        void        set_nickname(void);
        void        set_phone_number(void);
        void        set_darkest_secret(void);
        std::string	remove_sp(std::string str);
        std::string	get_firstname(void); 
        std::string	get_lastname(void); 
        std::string	get_nickname(void); 
        std::string	get_phonenumber(void); 
        std::string	get_darkestsecret(void); 
};

#endif