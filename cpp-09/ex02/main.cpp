/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 03:04:47 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/29 19:54:57 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Error\n";
		return 0;
	}
	std::deque<int>d(ac - 1);
	std::vector<int>v(ac - 1);
	clock_t t = clock();
	for (int i = 1; i < ac; i++)
		v[i - 1] = takeNumber(av[i]);
	std::cout << "Before: ";
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
		if (i == 5)
		{
			std::cout << "[...]";
			break;
		}
	}
	std::cout << "\n";
	mergesort(v);
	t = clock() - t;
	std::cout << "After: ";
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
		if (i == 5)
		{
			std::cout << "[...]";
			break;
		}
	}
	std::cout << "\n";
	std::cout << std::fixed;
	std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << std::setprecision(5) << ((double)t)/CLOCKS_PER_SEC  * 1000 << " ms\n";
	t = clock();
	for (int i = 1; i < ac; i++)
		d[i - 1] = takeNumber(av[i]);
	mergesort(d);
	t = clock() - t;
	std::cout << "Time to process a range of " << d.size() << " elements with std::deque : " << std::setprecision(5) << ((double)t)/CLOCKS_PER_SEC  * 1000 << " ms\n";

}