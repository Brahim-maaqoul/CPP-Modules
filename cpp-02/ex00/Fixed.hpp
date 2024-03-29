/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 04:27:46 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/21 00:17:00 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int	value;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed   & operator=(Fixed const &a);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif