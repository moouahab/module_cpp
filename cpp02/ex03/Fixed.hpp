/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:36:41 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/22 10:45:15 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

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
        int getRawBits(void) const;    
            // retourne la valeur du nombre à virgule fixe sans la convertir.
        void setRawBits(int const raw);
            // qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
        float toFloat(void) const;     
            // convertit la valeur en virgule fixe en nombre à virgule flottante.
        int toInt(void) const;         
            // convertit la valeur en virgule fixe en nombre entier
        Fixed   abs() const;
        
    
	// Operator functions
	Fixed   &operator=(Fixed const &other); // operator d'affectation
    // OPERATEUR DE COMDITION 
    bool    operator==(const Fixed& b) const;
    bool    operator!=(const Fixed& b) const;
    bool    operator>(const Fixed &rhs) const;
    bool    operator<(const Fixed &rhs) const;
    bool    operator>=(const Fixed &rhs) const;
    bool    operator<=(const Fixed &rhs) const;
    // OPERATEUR ARIDEMETIQUE 
    Fixed operator+(const Fixed &rhs) const;
    Fixed operator-(const Fixed &rhs) const;
    Fixed operator*(const Fixed &rhs) const;
    Fixed operator/(const Fixed &rhs) const;
    // OPERATEUR INCREMENTAL
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    // function static max and min
    static  Fixed &min(Fixed &a, Fixed &b);
    static  Fixed &max(Fixed &a, Fixed &b);
    static  Fixed const &min(Fixed const &a, Fixed const &b);
    static  Fixed const &max(Fixed const &a, Fixed const &b);
    static  Fixed ternaire(bool condition, const Fixed &vrai, const Fixed &faux);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);



#endif