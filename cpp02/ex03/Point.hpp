/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:40:01 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/22 10:45:25 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"
# include <cmath>

class Point
{
    private:
        Fixed y;
        Fixed x;
    public:
        ~Point();
        Point();
        Point(const float _x, const float _y);
        Point(Point const &src);
        Fixed getY(void) const;
        Fixed getX(void) const;
        Point &operator=(Point const &rhs);
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);




#endif