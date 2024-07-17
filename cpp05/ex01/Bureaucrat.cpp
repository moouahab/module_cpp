/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:44:55 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/29 21:37:06 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException(); // indique l'activation de l'execption
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat() : _name("bureaucrat unknown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name),
	_grade(other._grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		if (other._grade < 1)
			throw GradeTooHighException();
		if (other._grade > 150)
			throw GradeTooLowException();
		this->_grade = other.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		--_grade;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		++_grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[31mError: data invalid, number too small.\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[31mError: data invalid, number too large.\033[0m");
}
