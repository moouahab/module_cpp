/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:50:00 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/29 21:49:42 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form() : name("form unknown"), isSigned(true), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const Form& other)
    : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {
}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        isSigned = other.isSigned;
    }
    return *this;
}

Form::~Form() {}

std::string Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getGradeToSign() const {
    return gradeToSign;
}

int Form::getGradeToExecute() const {
    return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat) 
{
    if (bureaucrat.getGrade() > gradeToSign)
    {
        throw Bureaucrat::GradeTooLowException();
        this->isSigned = false;
    }
    else
        this->isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form " << form.getName() << ", signed: " << (form.getIsSigned() ? "no" : "yes" )
       << ", grade required to sign: " << form.getGradeToSign()
       << ", grade required to execute: " << form.getGradeToExecute();
    return os;
}
