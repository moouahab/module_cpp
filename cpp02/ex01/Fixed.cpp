/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:36:14 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/21 11:36:56 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//-----------------------------EX00------------------------------------//

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

//-----------------------------EX01------------------------------------//

Fixed::Fixed(const int &src) : _value(src << bits) {
    std::cout << "Int constructor called" << std::endl;
}

// Constructeur avec un flottant
Fixed::Fixed(const float &src) : _value(roundf(src * (1 << bits))) {
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << bits); 
        // static_cast<TYPE DU CAST> va permetre de redefinir le type de variable
}

// Convertit la valeur en entier
int Fixed::toInt(void) const {
    return _value >> bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}

//-----------------------------EX02------------------------------------//

