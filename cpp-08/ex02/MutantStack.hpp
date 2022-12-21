/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:16:49 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/19 23:10:12 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack(){}
        MutantStack(const MutantStack &obj){*this = obj;}
        MutantStack &operator=(const MutantStack &obj){(void)obj; return *this;}
        ~MutantStack(){}
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};


#endif