/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:57:09 by moouahab          #+#    #+#             */
/*   Updated: 2024/06/30 14:49:10 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        std::string getName() const;
        void signForm(Form& form);
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        /**
         * une classe d'exception c'est quoi :
         * 
         * c'est une class capable de ce declancher 
         * en d'exception quon aurait pre definit
         */
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw(); // le mot cle throw() indique la function what 
                                                        // peut possiblement return un exception
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const  &b);

#endif