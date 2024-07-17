/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 22:04:59 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 22:16:19 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("none") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src) {
    *this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        _target = rhs._target;
    }
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}

void    PresidentialPardonForm::setTarget(const std::string &target)
{
    this->_target = target;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw GradeTooLowException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/* ************************************************************************** */