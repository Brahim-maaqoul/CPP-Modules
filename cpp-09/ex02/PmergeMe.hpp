/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 03:05:12 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/29 19:43:34 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>
#include <iomanip>

int	takeNumber(std::string str);
void	checkNumbers(std::string str);

template <typename T>
void	insertion_sort(T &param)
{
	for (size_t i = 1; i < param.size(); i++)
	{
		int j;
		int tmp = param[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (param[j] > tmp)
				param[j + 1] = param[j];
			else
				break;
		}
		param[j + 1] = tmp;
	}
}

template <typename T>
void merge(T &param, T &left, T &right)
{
	size_t i = 0,l = 0,r = 0;
	while(l < left.size() && r < right.size())
	{
		if (left[l] < right[r])
		{
			param[i] = left[l];
			l++;
		}
		else
		{
			param[i] = right[r];
			r++;
		}
		i++;
	}
	while(l < left.size())
	{
		param[i] = left[l];
		l++;
		i++;
	}
	while (r < right.size())
	{
		param[i] = right[r];
		r++;
		i++;
	}
	
}

template <typename T>
void	mergesort(T &param)
{
	if (param.size() <= 100)
		return insertion_sort(param);
	T left(param.begin(), param.begin() + param.size()/2);
	T right(param.begin() + param.size()/2, param.end());
	mergesort(left);
	mergesort(right);
	merge(param, left, right);
}

#endif