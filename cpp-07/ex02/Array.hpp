/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:30:58 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/16 22:33:18 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

#include <stdexcept>

template <typename T>
class Array {
  private:
    T* elements_;
    unsigned int size_;

  public:
    Array() : elements_(NULL), size_(0) {}

    Array(unsigned int n) : size_(n) {
      elements_ = new T[size_];
    }

    Array(const Array& other) : size_(other.size_)
    {
      elements_ = new T[size_];
      for (unsigned int i = 0; i < size_; i++) {
        elements_[i] = other.elements_[i];
      }
    }

    Array& operator=(const Array& other) {
        if (elements_)
          delete[] elements_;
        size_ = other.size_;
        elements_ = new T[size_];
        for (unsigned int i = 0; i < size_; i++) {
          elements_[i] = other.elements_[i];
        }
      return *this;
    }

    ~Array() {
      delete[] elements_;
    }

  T& operator[](unsigned int index) {
    if (index >= size_) {
      throw std::out_of_range("Index out of bounds");
    }
    return elements_[index];
  }

  unsigned int size() const {
    return size_;
  }
};

#endif