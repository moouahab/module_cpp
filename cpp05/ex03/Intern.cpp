/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 23:33:44 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 23:36:47 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern &other) {
    *this = other;
}

Intern &Intern::operator=(const Intern &other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* forms[3] = {
        new ShrubberyCreationForm(formTarget),
        new RobotomyRequestForm(formTarget),
        new PresidentialPardonForm(formTarget)
    };
    
    for (int i = 0; i < 3; ++i) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formNames[i] << std::endl;
            for (int j = 0; j < 3; ++j) {
                if (j != i) delete forms[j];
            }
            return forms[i];
        }
    }

    std::cout << "Error: Form name not found." << std::endl;
    for (int i = 0; i < 3; ++i) {
        delete forms[i];
    }
    return NULL;
}

