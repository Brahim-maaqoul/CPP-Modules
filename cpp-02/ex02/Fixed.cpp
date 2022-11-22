/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:32:00 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/22 04:11:10 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
    // std::cout << "Int constructor called" << std::endl;
    value = val * (1 << bits);
}

Fixed::Fixed(const float val)
{
    // std::cout << "Float constructor called" << std::endl;
    value = val * (1 << bits);
}

Fixed::Fixed(Fixed const &src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

float   Fixed::toFloat(void) const
{
    return float(value) / (1 << bits);
}

int   Fixed::toInt(void) const
{
    return value / (1 << bits);
}


int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed &Fixed::operator=(Fixed const &a)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    value = a.getRawBits();
    return *this;
}

bool    Fixed::operator>(Fixed const &s) const
{
    return (this->value > s.getRawBits());
}

bool    Fixed::operator<(Fixed const &s) const
{
    return (this->value < s.getRawBits());
}

bool    Fixed::operator==(Fixed const &s) const
{
    return (this->value == s.getRawBits());
}

bool    Fixed::operator!=(Fixed const &s) const
{
    return (this->value != s.getRawBits());
}

bool    Fixed::operator>=(Fixed const &s) const
{
    return (this->value >= s.getRawBits());
}

bool    Fixed::operator<=(Fixed const &s) const
{
    return (this->value <= s.getRawBits());
}

std::ostream & operator<<(std::ostream & o, Fixed const &f)
{
    o << f.toFloat();
    return o;
}


Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}