/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 23:10:58 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 23:10:59 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw GradeTooLowException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();

    std::ofstream file((_target + "_shrubbery").c_str());
    if (!file.is_open())
        throw std::ios_base::failure("Failed to create file");

    file << "          .     .  .      +     .      .          .\n";
    file << "     .       .      .     #       .           .\n";
    file << "        .      .         ###            .      .      .\n";
    file << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    file << "          .      . \"####\"###\"####\"  .\n";
    file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
    file << "  .             \"#########\"#########\"        .        .\n";
    file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    file << "                .\"##\"####\"####\"##\"           .      .\n";
    file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    file << "      .     \"#######\"##\"####\"##\"#######\"      .     .\n";
    file << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    file << "            .     \"      000      \"    .     .\n";
    file << "       .         .   .   000     .        .       .\n";
    file << ".. .. ..................O000O........................ ......\n";

    file.close();
}
