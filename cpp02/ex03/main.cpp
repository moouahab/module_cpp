/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:35:40 by moouahab          #+#    #+#             */
/*   Updated: 2024/05/22 10:48:40 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

#include "Point.hpp"
#include <iostream>

int main() {
    Point a(0, 0);
    Point b(10, 30);
    Point c(20, 0);
    Point point_inside(10, 15);
    Point point_outside(30, 15);

    if (bsp(a, b, c, point_inside)) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is not inside the triangle" << std::endl;
    }

    if (bsp(a, b, c, point_outside)) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is not inside the triangle" << std::endl;
    }
	

    return 0;
}
