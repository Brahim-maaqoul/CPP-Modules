/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:32:00 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/23 23:35:48 by bmaaqoul         ###   ########.fr       */
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

Fixed   Fixed::operator+(Fixed const &a)
{
    Fixed f;

    f.setRawBits(value + a.getRawBits());
    return f;
}

Fixed   Fixed::operator-(Fixed const &a)
{
    Fixed f;

    f.setRawBits(value - a.getRawBits());
    return f;
}

Fixed   Fixed::operator*(Fixed const &a)
{
    Fixed f;

    f.setRawBits((long long)value * a.getRawBits() >> bits);
    return f;
}

Fixed   Fixed::operator/(Fixed const &a)
{
    Fixed f;

    f.setRawBits((long long)value << bits / a.getRawBits());
    return f;
}

Fixed   &Fixed::operator++(void)
{
    ++value;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed   f(*this);
    value++;
    return f;
}

Fixed   &Fixed::operator--(void)
{
    --value;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed   f(*this);
    value--;
    return f;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.value > b.value)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.value > b.value)
        return (Fixed&)a;
    return (Fixed&)b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.value < b.value)
        return a;
    return b;
}
Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.value < b.value)
        return (Fixed&)a;
    return (Fixed&)b;
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