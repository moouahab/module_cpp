/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:50:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/29 18:29:35 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b("Alice", 2);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat c("Bob", 150);
        std::cout << c << std::endl;
        c.decrementGrade();
        std::cout << c << std::endl;
        c.decrementGrade();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

