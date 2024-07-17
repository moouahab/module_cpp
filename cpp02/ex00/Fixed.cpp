/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:36:14 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/20 20:25:58 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "\033[32mDefault constructor called\033[0m" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "\033[35mCopy constructor called\033[0m" << std::endl;
    *this = src;
}

Fixed::~Fixed() {
    std::cout << "\033[31mDestructor called\033[0m" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
    std::cout << "\033[35mCopy assignment operator called\033[0m" << std::endl;
    this->_value = rhs.getRawBits();
    return *this;
}


int Fixed::getRawBits(void) const {
    std::cout << "\033[37mgetRawBits member function called\033[0m" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}
