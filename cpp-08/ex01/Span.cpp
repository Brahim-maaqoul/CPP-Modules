/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 02:32:22 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/19 21:05:33 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0){}

Span::Span(unsigned int N) : _size(N)
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    this->_size = obj._size;
    this->_v = obj._v;
    return *this;
}

Span::~Span(){}

void    Span::addNumber(int n)
{
    try
    {
        if (_v.size() == _size)
            throw std::out_of_range("there are already enough elements");
        _v.push_back(n);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while (begin != end)
    {
        addNumber(*begin);
        begin++;
    }
}

int Span::shortestSpan()
{
    int shortest;

    if (_v.size() <= 1)
        throw std::out_of_range("please add more elements!");
    std::sort(_v.begin(), _v.end());
    shortest = _v[1] - _v[0];
    for (unsigned long i = 0; i < _v.size() - 1; i++)
        shortest = std::min(shortest, _v[i + 1] - _v[i]);
    return shortest;
}

int Span::longestSpan()
{
    int longest;

    if (_v.size() <= 1)
        throw std::out_of_range("please add more elements!");
    std::sort(_v.begin(), _v.end());
    longest = _v[_v.size() - 1] - _v[0];
    return longest;
}

int &Span::operator[](unsigned int index)
{
    if (index >= _v.size())
      throw std::out_of_range("Index out of bounds");
    return _v[index];
}