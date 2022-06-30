/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:07:07 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/06/30 03:27:27 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>

class contact
{
    public :
    void    print_contact(void);
    void    adding_contact(void);
    void    searching_contact(int i);
    std::string truncate_str(std::string str);
    std::string first_name;
    std::string last_name;
    std::string	nickname;
    std::string phone_number;
    std::string darkest_secret;
    int         index;
    int         b;
};

#endif