/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:29:32 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/02/14 18:30:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base::Base(){}
Base::~Base(){}

A::A(){std::cout << "Im A\n";}
A::~A(){}

B::B(){std::cout << "Im B\n";}
B::~B(){}

C::C(){std::cout << "Im C\n";}
C::~C(){}

Base *generate(void)
{
    srand(time(0));
    int x = rand() % 3;
    if (x == 0)
        return new A();
    else if (x == 1)
        return new B();
    else if (x == 2)
        return new C();
    return NULL;
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "type C" << std::endl;
    else
        std::cout << "uknown type" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A a =  dynamic_cast<A&>(p);
        std::cout << "type A" << std::endl;
    }
    catch (const std::exception &e)
    {
        try
        {
            B b = dynamic_cast<B&>(p);
            std::cout << "type B" << std::endl;
        }
        catch(...)
        {
            try
            {
                C c = dynamic_cast<C&>(p);
                std::cout << "type C" << std::endl;
            }
            catch(...)
            {
                std::cout << "uknown type" << std::endl;
            }
        }
    }
}