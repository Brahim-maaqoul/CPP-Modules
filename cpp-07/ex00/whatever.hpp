/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:16:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/16 22:29:29 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void    swap(T &a, T &b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

T   max(T a, T b)
{
    return (std::max(a, b));
}

template <typename T>

T   min(T a, T b)
{
    return (std::min(a, b));
}

#endif