/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:50:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 14:48:11 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat bob("bob", 5);
        Form taxForm("form", 45, 75);

        std::cout << bob << std::endl;
        std::cout << taxForm << std::endl;

        bob.signForm(taxForm);
        std::cout << taxForm << std::endl;

        Bureaucrat alice("Alice", 180);
        alice.signForm(taxForm);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}


