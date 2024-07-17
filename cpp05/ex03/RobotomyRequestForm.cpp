/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 22:44:57 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 22:49:33 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {
    _target = src._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        _target = rhs._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (getIsSigned() && executor.getGrade() <= getGradeToExecute()) {
        std::cout << "Bip bip bip, " << _target << " has been robotomized successfully!" << std::endl;
    } else {
        throw AForm::GradeTooLowException();
    }
}

const std::string &RobotomyRequestForm::getTarget() const {
    return _target;
}


/* ************************************************************************** */