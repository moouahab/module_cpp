/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:36:41 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/22 10:44:48 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int bits = 8;
    public:
        // constructor and destructor
        Fixed();
        ~Fixed();
        Fixed(Fixed const &src);
        Fixed(int const &val);
        Fixed(float const &val);
        // method 
        int getRawBits(void) const; // retourne la valeur du nombre à virgule fixe sans la convertir.
        void setRawBits(int const raw); // qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
        float toFloat(void) const; // convertit la valeur en virgule fixe en nombre à virgule flottante.
        int toInt(void) const; // convertit la valeur en virgule fixe en nombre entier
        
        // Operator functions
        Fixed &operator=(Fixed const &other); // operator d'affectation
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs); // operator d'flux


#endif