/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:26:07 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/15 17:38:27 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>
#include <cstdlib>

class Base
{
    public:
        Base();
       virtual ~Base();
};

class A : public Base
{
    public:
        A();
        ~A();
};

class B : public Base
{
    public:
        B();
        ~B();
};

class C : public Base
{
    public:
        C();
        ~C();
};

Base *generate(void);
void   identify(Base* p);
void   identify(Base& p);

#endif