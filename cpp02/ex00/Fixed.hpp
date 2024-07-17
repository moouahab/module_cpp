/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:36:41 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/20 21:07:29 by moouahab         ###   ########.fr       */
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
        // Operator functions
        Fixed &operator=(Fixed const &other); // operator d'affectation 
        // method 
        int getRawBits(void) const; // retourne la valeur du nombre à virgule fixe sans la convertir.
        void setRawBits(int const raw); // qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
};

#endif