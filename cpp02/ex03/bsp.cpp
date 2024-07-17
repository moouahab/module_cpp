/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:09:01 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/21 19:08:21 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// src : https://www.youtube.com/watch?v=M5oU30NxvkE

Fixed area(Point const a, Point const b, Point const c) {
    return Fixed((a.getX() * (b.getY() - c.getY()) +
                  b.getX() * (c.getY() - a.getY()) +
                  c.getX() * (a.getY() - b.getY())) / 2.0f).abs();
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed totalArea = area(a, b, c);
    Fixed area1 = area(point, a, b);
    Fixed area2 = area(point, b, c);
    Fixed area3 = area(point, c, a);

    return (totalArea == (area1 + area2 + area3));
}
