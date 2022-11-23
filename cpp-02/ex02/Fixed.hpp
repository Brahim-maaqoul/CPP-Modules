/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:32:02 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/23 02:44:28 by bmaaqoul         ###   ########.fr       */
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
		Fixed (const int val);
		Fixed (const float val);
		Fixed(Fixed const &src);
		Fixed   & operator=(Fixed const &a);
		Fixed   & operator+(Fixed const &a);
		Fixed   & operator-(Fixed const &a);
		Fixed   & operator*(Fixed const &a);
		Fixed   & operator/(Fixed const &a);
		Fixed	&operator++(void);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;
        bool    operator>(Fixed const &s) const;
        bool    operator<(Fixed const &s) const;
        bool    operator>=(Fixed const &s) const;
        bool    operator<=(Fixed const &s) const;
        bool    operator==(Fixed const &s) const;
        bool    operator!=(Fixed const &s) const;
		
};

std::ostream &	operator<<(std::ostream &os, Fixed const &f);

#endif