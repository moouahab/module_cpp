/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:53:23 by moouahab          #+#    #+#             */
/*   Updated: 2024/07/10 13:53:38 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> a(5);
        a[0] = 10;
        a[1] = 20;
        Array<int> b = a;
        b[0] = 30;
        std::cout << "a[0]: " << a[0] << std::endl;
        std::cout << "b[0]: " << b[0] << std::endl;
        Array<int> c;
        c = a;
        c[0] = 40;
        std::cout << "a[1] after assignment: " << a[1] << std::endl;
        std::cout << "c[0] after assignment: " << c[0] << std::endl;
        std::cout << a[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        Array<std::string> a(3);

      a[0] = "Hello";
      a[1] = "World";
      a[2] = a[0] + " " + a[1];

      std::cout << "a[2]: " << a[2] << std::endl;
      std::cout << "a[10]" << a[10] << std::endl;
      
    }
    catch (const std::exception& e)
    {
      std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
