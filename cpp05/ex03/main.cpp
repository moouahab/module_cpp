/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:50:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 23:42:01 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Intern someRandomIntern;
    AForm* form;

    form = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form)
	{
        Bureaucrat bob("Bob", 50);
        bob.signForm(*form);
        bob.executeForm(*form);
        delete form;
    }

    form = someRandomIntern.makeForm("shrubbery creation", "amin");
    if (form) {
        Bureaucrat bob("Bob", 50);
        bob.signForm(*form);
        bob.executeForm(*form);
        delete form;
    }

    form = someRandomIntern.makeForm("presidential pardon", "Charlie");
    if (form) {
        Bureaucrat bob("Bob", 50);
        bob.signForm(*form);
        bob.executeForm(*form);
        delete form;
    }

    form = someRandomIntern.makeForm("invalid form", "nowhere");
    delete form;

    return 0;
}

