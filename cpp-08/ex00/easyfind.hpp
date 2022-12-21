/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:48:03 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/19 00:18:24 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

template <typename T>
void    easyfind(T param, int i)
{
    typename T::iterator it;
    
    it = std::find(param.begin(), param.end(), i);
    if (*it == i)
        std::cout << i << " found" << std::endl;
    else
        std::cout << i << " not found!" << std::endl;
}

#endif