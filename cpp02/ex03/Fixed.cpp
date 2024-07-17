/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:36:14 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/21 18:58:45 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//-----------------------------EX00------------------------------------//

Fixed::Fixed() : _value(0) {
}

Fixed::Fixed(Fixed const &src) {
    *this = src;
}

Fixed::~Fixed() {
}

Fixed &Fixed::operator=(Fixed const &rhs) {
    this->_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

//-----------------------------EX01------------------------------------//

Fixed::Fixed(const int &src) : _value(src << bits) {
}

// Constructeur avec un flottant
Fixed::Fixed(const float &src) : _value(roundf(src * (1 << bits))) {
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << bits);
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

bool    Fixed::operator==(const Fixed &rhs) const
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return !(*this == rhs);
}

bool Fixed::operator>(const Fixed &rhs) const
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return !(*this > rhs);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return ((*this > rhs) || (*this == rhs));
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return ((*this < rhs) || (*this == rhs));
}


// ============================================//

Fixed Fixed::operator+(const Fixed &rhs) const {
    Fixed result;
    result.setRawBits(this->getRawBits() + rhs.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    Fixed result;
    result.setRawBits(this->getRawBits() - rhs.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    Fixed result;
    result.setRawBits((this->getRawBits() * rhs.getRawBits()) >> bits);
    return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    if (rhs.getRawBits() == 0) {
        std::cerr << "Error: division by zero" << std::endl;
        return Fixed();
    }
    Fixed result;
    result.setRawBits((this->getRawBits() << bits) / rhs.getRawBits());
    return result;
}

// ===========================================//
Fixed &Fixed::operator++() {
    ++_value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    _value++;
    return tmp;
}

Fixed &Fixed::operator--() {
    --_value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    tmp._value = this->_value--;
    return tmp;
}

// ==========================================//

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

Fixed Fixed::ternaire(bool condition, const Fixed &vrai, const Fixed &faux) {
    return condition ? vrai : faux;
}

Fixed Fixed::abs() const {
        return Fixed(this->_value < 0 ? -this->toFloat() : this->toFloat());
}