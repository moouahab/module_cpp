/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:39:54 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/21 15:43:06 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(void) : y(), x() {
    
}

Point::Point(const float _x, const float _y) : y(_x), x(_y){
}


Point::~Point(void) {
    
}

Point::Point(Point const & src) {
    *this = src;
}

Point& Point::operator=(Point const &rhs) {
    if (this != &rhs) {
        const_cast<Fixed&>(this->x) = rhs.x;
        const_cast<Fixed&>(this->y) = rhs.y;
    }
    return *this;
}



Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}