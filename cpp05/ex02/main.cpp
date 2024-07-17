/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:50:05 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 23:17:42 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bob("Bob", 50);
		ShrubberyCreationForm shrubbery("home");
		RobotomyRequestForm robotomy("Alice");
		PresidentialPardonForm pardon("Charlie");
		std::cout << bob << std::endl;
		bob.signForm(shrubbery);
		bob.signForm(robotomy);
		bob.signForm(pardon);
		bob.executeForm(shrubbery);
		bob.executeForm(robotomy);
		bob.executeForm(pardon);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
